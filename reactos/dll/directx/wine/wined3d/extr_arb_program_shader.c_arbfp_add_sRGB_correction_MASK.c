
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char const*,char const*,...) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_0, const char *VAR_1,
        const char *VAR_2, const char *VAR_3, const char *VAR_4, const char *VAR_5, BOOL VAR_6)
{


    if(VAR_6)
    {

        FUNC_0(VAR_0, "SUBC %s, %s.x, srgb_consts1.x;\n", VAR_2, VAR_1);

        FUNC_0(VAR_0, "POW %s.x (GE), %s.x, srgb_consts0.x;\n", VAR_1, VAR_1);
        FUNC_0(VAR_0, "POW %s.y (GE), %s.y, srgb_consts0.x;\n", VAR_1, VAR_1);
        FUNC_0(VAR_0, "POW %s.z (GE), %s.z, srgb_consts0.x;\n", VAR_1, VAR_1);
        FUNC_0(VAR_0, "MUL %s.xyz (GE), %s, srgb_consts0.y;\n", VAR_1, VAR_1);
        FUNC_0(VAR_0, "SUB %s.xyz (GE), %s, srgb_consts0.z;\n", VAR_1, VAR_1);

        FUNC_0(VAR_0, "MUL %s.xyz (LT), srgb_consts0.w, %s;\n", VAR_1, VAR_1);
    }
    else
    {

        FUNC_0(VAR_0, "POW %s.x, %s.x, srgb_consts0.x;\n", VAR_2, VAR_1);
        FUNC_0(VAR_0, "POW %s.y, %s.y, srgb_consts0.x;\n", VAR_2, VAR_1);
        FUNC_0(VAR_0, "POW %s.z, %s.z, srgb_consts0.x;\n", VAR_2, VAR_1);
        FUNC_0(VAR_0, "MUL %s, %s, srgb_consts0.y;\n", VAR_2, VAR_2);
        FUNC_0(VAR_0, "SUB %s, %s, srgb_consts0.z;\n", VAR_2, VAR_2);

        FUNC_0(VAR_0, "MUL %s, srgb_consts0.w, %s;\n", VAR_3, VAR_1);

        FUNC_0(VAR_0, "SLT %s, srgb_consts1.x, %s;\n", VAR_4, VAR_1);
        FUNC_0(VAR_0, "SGE %s, srgb_consts1.x, %s;\n", VAR_5, VAR_1);

        FUNC_0(VAR_0, "MUL %s.xyz, %s, %s;\n", VAR_1, VAR_2, VAR_4);

        FUNC_0(VAR_0, "MAD %s.xyz, %s, %s, %s;\n", VAR_1, VAR_3, VAR_5, VAR_1);





    }

}
