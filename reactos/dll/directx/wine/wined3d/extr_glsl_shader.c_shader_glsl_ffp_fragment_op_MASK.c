
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
 int FUNC_1 (struct wined3d_string_buffer*,char*,char const*,char const*,char const*,char const*,...) ;
 char* FUNC_2 (struct wined3d_string_buffer*,int,unsigned int,scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_3(struct wined3d_string_buffer *VAR_5, unsigned int VAR_6, BOOL VAR_7,
        BOOL VAR_8, DWORD VAR_9, DWORD VAR_10, DWORD VAR_11, DWORD VAR_12, DWORD VAR_13)
{
    const char *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;

    if (VAR_7 && VAR_8)
        VAR_14 = "";
    else if (VAR_7)
        VAR_14 = ".xyz";
    else
        VAR_14 = ".w";

    if (VAR_9 == VAR_4)
        VAR_15 = "temp_reg";
    else
        VAR_15 = "ret";

    VAR_16 = FUNC_2(VAR_5, 0, VAR_6, VAR_11);
    VAR_17 = FUNC_2(VAR_5, 1, VAR_6, VAR_12);
    VAR_18 = FUNC_2(VAR_5, 2, VAR_6, VAR_13);

    switch (VAR_10)
    {
        case 141:
            break;

        case 130:
            FUNC_1(VAR_5, "%s%s = %s%s;\n", VAR_15, VAR_14, VAR_17, VAR_14);
            break;

        case 129:
            FUNC_1(VAR_5, "%s%s = %s%s;\n", VAR_15, VAR_14, VAR_18, VAR_14);
            break;

        case 138:
            FUNC_1(VAR_5, "%s%s = %s%s * %s%s;\n", VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14);
            break;

        case 136:
            FUNC_1(VAR_5, "%s%s = clamp(%s%s * %s%s * 4.0, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14);
            break;

        case 137:
            FUNC_1(VAR_5, "%s%s = clamp(%s%s * %s%s * 2.0, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14);
            break;

        case 152:
            FUNC_1(VAR_5, "%s%s = clamp(%s%s + %s%s, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14);
            break;

        case 151:
            FUNC_1(VAR_5, "%s%s = clamp(%s%s + (%s - vec4(0.5))%s, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14);
            break;

        case 150:
            FUNC_1(VAR_5, "%s%s = clamp((%s%s + (%s - vec4(0.5))%s) * 2.0, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14);
            break;

        case 128:
            FUNC_1(VAR_5, "%s%s = clamp(%s%s - %s%s, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14);
            break;

        case 149:
            FUNC_1(VAR_5, "%s%s = clamp((vec4(1.0) - %s)%s * %s%s + %s%s, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14, VAR_17, VAR_14);
            break;

        case 147:
            VAR_16 = FUNC_2(VAR_5, 0, VAR_6, VAR_1);
            FUNC_1(VAR_5, "%s%s = mix(%s%s, %s%s, %s.w);\n",
                    VAR_15, VAR_14, VAR_18, VAR_14, VAR_17, VAR_14, VAR_16);
            break;

        case 145:
            VAR_16 = FUNC_2(VAR_5, 0, VAR_6, VAR_2);
            FUNC_1(VAR_5, "%s%s = mix(%s%s, %s%s, %s.w);\n",
                    VAR_15, VAR_14, VAR_18, VAR_14, VAR_17, VAR_14, VAR_16);
            break;

        case 146:
            VAR_16 = FUNC_2(VAR_5, 0, VAR_6, VAR_3);
            FUNC_1(VAR_5, "%s%s = mix(%s%s, %s%s, %s.w);\n",
                    VAR_15, VAR_14, VAR_18, VAR_14, VAR_17, VAR_14, VAR_16);
            break;

        case 144:
            VAR_16 = FUNC_2(VAR_5, 0, VAR_6, VAR_2);
            FUNC_1(VAR_5, "%s%s = clamp(%s%s * (1.0 - %s.w) + %s%s, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_18, VAR_14, VAR_16, VAR_17, VAR_14);
            break;

        case 148:
            VAR_16 = FUNC_2(VAR_5, 0, VAR_6, VAR_0);
            FUNC_1(VAR_5, "%s%s = mix(%s%s, %s%s, %s.w);\n",
                    VAR_15, VAR_14, VAR_18, VAR_14, VAR_17, VAR_14, VAR_16);
            break;

        case 135:
            FUNC_1(VAR_5, "%s%s = clamp(%s%s * %s.w + %s%s, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_18, VAR_14, VAR_17, VAR_17, VAR_14);
            break;

        case 134:
            FUNC_1(VAR_5, "%s%s = clamp(%s%s * %s%s + %s.w, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14, VAR_17);
            break;

        case 133:
            FUNC_1(VAR_5, "%s%s = clamp(%s%s * (1.0 - %s.w) + %s%s, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_18, VAR_14, VAR_17, VAR_17, VAR_14);
            break;
        case 132:
            FUNC_1(VAR_5, "%s%s = clamp((vec4(1.0) - %s)%s * %s%s + %s.w, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14, VAR_17);
            break;

        case 143:
        case 142:

            break;

        case 140:
            FUNC_1(VAR_5, "%s%s = vec4(clamp(dot(%s.xyz - 0.5, %s.xyz - 0.5) * 4.0, 0.0, 1.0))%s;\n",
                    VAR_15, VAR_14, VAR_17, VAR_18, VAR_14);
            break;

        case 131:
            FUNC_1(VAR_5, "%s%s = clamp(%s%s * %s%s + %s%s, 0.0, 1.0);\n",
                    VAR_15, VAR_14, VAR_17, VAR_14, VAR_18, VAR_14, VAR_16, VAR_14);
            break;

        case 139:

            FUNC_1(VAR_5, "%s%s = mix(%s%s, %s%s, %s%s);\n",
                    VAR_15, VAR_14, VAR_18, VAR_14, VAR_17, VAR_14, VAR_16, VAR_14);
            break;

        default:
            FUNC_0("Unhandled operation %#x.\n", VAR_10);
            break;
    }
}
