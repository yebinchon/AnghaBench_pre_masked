
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scaler {TYPE_1__* kernel; int lut_size; int lut; } ;
struct gl_shader_cache {int dummy; } ;
struct TYPE_2__ {int size; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct gl_shader_cache*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct gl_shader_cache *VAR_0,
                                              struct scaler *VAR_1)
{
    FUNC_1(VAR_0, "lut", VAR_1->lut);
    FUNC_0("float ypos = LUT_POS(fcoord, %d.0);\n", VAR_1->lut_size);

    int VAR_2 = VAR_1->kernel->size;
    int VAR_3 = (VAR_2 + 3) / 4;

    FUNC_0("float weights[%d];\n", VAR_2);
    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        if (VAR_4 % 4 == 0)
            FUNC_0("c = texture(lut, vec2(%f, ypos));\n", (VAR_4 / 4 + 0.5) / VAR_3);
        FUNC_0("weights[%d] = c[%d];\n", VAR_4, VAR_4 % 4);
    }
}
