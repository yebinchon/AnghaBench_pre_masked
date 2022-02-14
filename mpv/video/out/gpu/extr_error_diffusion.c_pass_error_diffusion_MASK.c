
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_shader_cache {int dummy; } ;
struct error_diffusion_kernel {int shift; int divisor; int** pattern; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct error_diffusion_kernel const*) ;

void FUNC_4(struct gl_shader_cache *VAR_3,
                          const struct error_diffusion_kernel *VAR_4,
                          int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    FUNC_2(VAR_9 <= VAR_7);
    int VAR_10 = VAR_6 + (VAR_7 - 1) * VAR_4->shift;





    int VAR_11 = (VAR_7 * VAR_10 + VAR_9 - 1) / VAR_9;





    int VAR_12 = VAR_7 + VAR_1;
    int VAR_13 = FUNC_3(VAR_4) + 1;
    int VAR_14 = VAR_12 * VAR_13;


    FUNC_1("shared uint err_rgb8[%d];\n", VAR_14);


    FUNC_0("for (int i = int(gl_LocalInvocationIndex); i < %d; i += %d) ",
         VAR_14, VAR_9);
    FUNC_0("err_rgb8[i] = 0;\n");

    FUNC_0("for (int block_id = 0; block_id < %d; ++block_id) {\n", VAR_11);



    FUNC_0("groupMemoryBarrier();\n");
    FUNC_0("barrier();\n");



    FUNC_0("int id = int(gl_LocalInvocationIndex) + block_id * %d;\n", VAR_9);
    FUNC_0("int y = id %% %d, x_shifted = id / %d;\n", VAR_7, VAR_7);
    FUNC_0("int x = x_shifted - y * %d;\n", VAR_4->shift);


    FUNC_0("if (0 <= x && x < %d) {\n", VAR_6);


    FUNC_0("int idx = (x_shifted * %d + y) %% %d;\n", VAR_12, VAR_14);


    FUNC_0("vec3 pix = texelFetch(texture%d, ivec2(x, y), 0).rgb;\n", VAR_5);


    int VAR_15 = (1 << VAR_8) - 1;
    int VAR_16 = 24, VAR_17 = 12;

    int VAR_18 = 127 * 2;



    FUNC_0("uint err_u32 = err_rgb8[idx] + %uu;\n",
         (128u << VAR_16) | (128u << VAR_17) | 128u);
    FUNC_0("pix = pix * %d.0 + vec3("
         "int((err_u32 >> %d) & 255u) - 128,"
         "int((err_u32 >> %d) & 255u) - 128,"
         "int( err_u32        & 255u) - 128"
         ") / %d.0;\n", VAR_15, VAR_16, VAR_17, VAR_18);
    FUNC_0("err_rgb8[idx] = 0;\n");


    FUNC_0("vec3 dithered = round(pix);\n");
    FUNC_0("imageStore(out_image, ivec2(x, y), vec4(dithered / %d.0, 0.0));\n",
         VAR_15);

    FUNC_0("vec3 err_divided = (pix - dithered) * %d.0 / %d.0;\n",
         VAR_18, VAR_4->divisor);
    FUNC_0("ivec3 tmp;\n");



    for (int VAR_19 = 1; VAR_19 <= VAR_4->divisor; VAR_19++) {
        bool VAR_20 = 0;

        for (int VAR_21 = 0; VAR_21 <= VAR_1; VAR_21++) {
            for (int VAR_22 = VAR_2; VAR_22 <= VAR_0; VAR_22++) {
                if (VAR_4->pattern[VAR_21][VAR_22 - VAR_2] != VAR_19)
                    continue;

                if (!VAR_20) {
                    VAR_20 = 1;

                    FUNC_0("tmp = ivec3(round(err_divided * %d.0));\n", VAR_19);

                    FUNC_0("err_u32 = "
                         "(uint(tmp.r & 255) << %d)|"
                         "(uint(tmp.g & 255) << %d)|"
                         " uint(tmp.b & 255);\n",
                         VAR_16, VAR_17);
                }

                int VAR_23 = VAR_22 + VAR_21 * VAR_4->shift;





                if (VAR_22 < 0)
                    FUNC_0("if (x >= %d) ", -VAR_22);



                int VAR_24 = VAR_23 * VAR_12 + VAR_21;
                FUNC_0("atomicAdd(err_rgb8[(idx + %d) %% %d], err_u32);\n",
                     VAR_24, VAR_14);
            }
        }
    }

    FUNC_0("}\n");

    FUNC_0("}\n");
}
