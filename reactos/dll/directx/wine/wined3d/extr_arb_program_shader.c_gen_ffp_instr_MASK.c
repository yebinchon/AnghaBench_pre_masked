
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_1 (struct wined3d_string_buffer*,int,unsigned int,scalar_t__) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,char const*,...) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_3(struct wined3d_string_buffer *VAR_5, unsigned int VAR_6, BOOL VAR_7,
        BOOL VAR_8, DWORD VAR_9, DWORD VAR_10, DWORD VAR_11, DWORD VAR_12, DWORD VAR_13)
{
    const char *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;
    unsigned int VAR_19 = 1;

    if(VAR_7 && VAR_8) VAR_14 = "";
    else if(VAR_7) VAR_14 = ".xyz";
    else VAR_14 = ".w";

    if(VAR_9 == VAR_4) VAR_15 = "tempreg";
    else VAR_15 = "ret";

    VAR_16 = FUNC_1(VAR_5, 0, VAR_6, VAR_11);
    VAR_17 = FUNC_1(VAR_5, 1, VAR_6, VAR_12);
    VAR_18 = FUNC_1(VAR_5, 2, VAR_6, VAR_13);

    switch (VAR_10)
    {
        case 141:
            break;

        case 129:
            VAR_17 = VAR_18;

        case 130:
            FUNC_2(VAR_5, "MOV %s%s, %s;\n", VAR_15, VAR_14, VAR_17);
            break;

        case 136:
            VAR_19 = 2;

        case 137:
            VAR_19 *= 2;

        case 138:
            FUNC_2(VAR_5, "MUL %s%s, %s, %s;\n", VAR_15, VAR_14, VAR_17, VAR_18);
            break;

        case 150:
            VAR_19 = 2;

        case 151:
            FUNC_2(VAR_5, "SUB arg2, %s, const.w;\n", VAR_18);
            VAR_18 = "arg2";

        case 152:
            FUNC_2(VAR_5, "ADD_SAT %s%s, %s, %s;\n", VAR_15, VAR_14, VAR_17, VAR_18);
            break;

        case 128:
            FUNC_2(VAR_5, "SUB_SAT %s%s, %s, %s;\n", VAR_15, VAR_14, VAR_17, VAR_18);
            break;

        case 149:
            FUNC_2(VAR_5, "SUB arg1, const.x, %s;\n", VAR_17);
            FUNC_2(VAR_5, "MAD_SAT %s%s, arg1, %s, %s;\n", VAR_15, VAR_14, VAR_18, VAR_17);
            break;

        case 148:
            VAR_16 = FUNC_1(VAR_5, 0, VAR_6, VAR_0);
            FUNC_2(VAR_5, "LRP %s%s, %s.w, %s, %s;\n", VAR_15, VAR_14, VAR_16, VAR_17, VAR_18);
            break;
        case 146:
            VAR_16 = FUNC_1(VAR_5, 0, VAR_6, VAR_3);
            FUNC_2(VAR_5, "LRP %s%s, %s.w, %s, %s;\n", VAR_15, VAR_14, VAR_16, VAR_17, VAR_18);
            break;
        case 145:
            VAR_16 = FUNC_1(VAR_5, 0, VAR_6, VAR_2);
            FUNC_2(VAR_5, "LRP %s%s, %s.w, %s, %s;\n", VAR_15, VAR_14, VAR_16, VAR_17, VAR_18);
            break;
        case 147:
            VAR_16 = FUNC_1(VAR_5, 0, VAR_6, VAR_1);
            FUNC_2(VAR_5, "LRP %s%s, %s.w, %s, %s;\n", VAR_15, VAR_14, VAR_16, VAR_17, VAR_18);
            break;

        case 144:
            VAR_16 = FUNC_1(VAR_5, 0, VAR_6, VAR_2);
            FUNC_2(VAR_5, "SUB arg0.w, const.x, %s.w;\n", VAR_16);
            FUNC_2(VAR_5, "MAD_SAT %s%s, %s, arg0.w, %s;\n", VAR_15, VAR_14, VAR_18, VAR_17);
            break;



        case 133:
            FUNC_2(VAR_5, "SUB arg0.w, const.x, %s;\n", VAR_17);
            FUNC_2(VAR_5, "MAD_SAT %s%s, arg0.w, %s, %s;\n", VAR_15, VAR_14, VAR_18, VAR_17);
            break;
        case 135:
            FUNC_2(VAR_5, "MAD_SAT %s%s, %s.w, %s, %s;\n", VAR_15, VAR_14, VAR_17, VAR_18, VAR_17);
            break;
        case 132:
            FUNC_2(VAR_5, "SUB arg0, const.x, %s;\n", VAR_17);
            FUNC_2(VAR_5, "MAD_SAT %s%s, arg0, %s, %s.w;\n", VAR_15, VAR_14, VAR_18, VAR_17);
            break;
        case 134:
            FUNC_2(VAR_5, "MAD_SAT %s%s, %s, %s, %s.w;\n", VAR_15, VAR_14, VAR_17, VAR_18, VAR_17);
            break;

        case 140:
            VAR_19 = 4;
            FUNC_2(VAR_5, "SUB arg1, %s, const.w;\n", VAR_17);
            FUNC_2(VAR_5, "SUB arg2, %s, const.w;\n", VAR_18);
            FUNC_2(VAR_5, "DP3_SAT %s%s, arg1, arg2;\n", VAR_15, VAR_14);
            break;

        case 131:
            FUNC_2(VAR_5, "MAD_SAT %s%s, %s, %s, %s;\n", VAR_15, VAR_14, VAR_17, VAR_18, VAR_16);
            break;

        case 139:

            FUNC_2(VAR_5, "LRP %s%s, %s, %s, %s;\n", VAR_15, VAR_14, VAR_16, VAR_17, VAR_18);
            break;

        case 143:
        case 142:

            break;

        default:
            FUNC_0("Unhandled texture op %08x\n", VAR_10);
    }

    if (VAR_19 == 2)
        FUNC_2(VAR_5, "MUL_SAT %s%s, %s, const.y;\n", VAR_15, VAR_14, VAR_15);
    else if (VAR_19 == 4)
        FUNC_2(VAR_5, "MUL_SAT %s%s, %s, const.z;\n", VAR_15, VAR_14, VAR_15);
}
