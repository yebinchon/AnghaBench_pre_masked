
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image {int padding; int transform; int multiplier; } ;
struct gl_video {int dummy; } ;
typedef int crap ;


 int FUNC_0 (char*,char const*,...) ;
 char* FUNC_1 (struct image*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct gl_video *VAR_1, const char *VAR_2, int VAR_3,
                         struct image VAR_4)
{
    FUNC_0("#define %s_raw texture%d\n", VAR_2, VAR_3);
    FUNC_0("#define %s_pos texcoord%d\n", VAR_2, VAR_3);
    FUNC_0("#define %s_size texture_size%d\n", VAR_2, VAR_3);
    FUNC_0("#define %s_rot texture_rot%d\n", VAR_2, VAR_3);
    FUNC_0("#define %s_off texture_off%d\n", VAR_2, VAR_3);
    FUNC_0("#define %s_pt pixel_size%d\n", VAR_2, VAR_3);
    FUNC_0("#define %s_map texmap%d\n", VAR_2, VAR_3);
    FUNC_0("#define %s_mul %f\n", VAR_2, VAR_4.multiplier);

    char VAR_5[5] = "";
    FUNC_4(VAR_5, sizeof(VAR_5), "%s", FUNC_1(&VAR_4));


    int VAR_6 = FUNC_5(VAR_5);
    for (int VAR_7 = 0; VAR_7 < VAR_4.padding; VAR_7++) {
        if (VAR_6) {
            char VAR_8 = VAR_5[0];
            FUNC_3(VAR_5, VAR_5 + 1, VAR_6 - 1);
            VAR_5[VAR_6 - 1] = VAR_8;
        }
    }


    FUNC_0("#define %s_tex(pos) (%s_mul * vec4(texture(%s_raw, pos)).%s)\n",
           VAR_2, VAR_2, VAR_2, VAR_5);



    if (FUNC_2(VAR_4.transform, VAR_0)) {
        FUNC_0("#define %s_texOff(off) %s_tex(%s_pos + %s_pt * vec2(off))\n",
               VAR_2, VAR_2, VAR_2, VAR_2);
    } else {
        FUNC_0("#define %s_texOff(off) "
                   "%s_tex(%s_pos + %s_rot * vec2(off)/%s_size)\n",
               VAR_2, VAR_2, VAR_2, VAR_2, VAR_2);
    }
}
