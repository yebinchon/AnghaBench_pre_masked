
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* insts; int bytelen; char len; } ;
typedef TYPE_1__ ByteProg ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(ByteProg *VAR_0)
{
    int VAR_1 = 0;
    char *VAR_2 = VAR_0->insts;
    while (VAR_1 < VAR_0->bytelen) {
                FUNC_1("%2d: ", VAR_1);
                switch(VAR_2[VAR_1++]) {
                default:
                        FUNC_0(0);

                case 128:
                        FUNC_1("split %d (%d)\n", VAR_1 + (signed char)VAR_2[VAR_1] + 1, (signed char)VAR_2[VAR_1]);
                        VAR_1++;
                        break;
                case 130:
                        FUNC_1("rsplit %d (%d)\n", VAR_1 + (signed char)VAR_2[VAR_1] + 1, (signed char)VAR_2[VAR_1]);
                        VAR_1++;
                        break;
                case 133:
                        FUNC_1("jmp %d (%d)\n", VAR_1 + (signed char)VAR_2[VAR_1] + 1, (signed char)VAR_2[VAR_1]);
                        VAR_1++;
                        break;
                case 137:
                        FUNC_1("char %c\n", VAR_2[VAR_1++]);
                        break;
                case 139:
                        FUNC_1("any\n");
                        break;
                case 136:
                case 135: {
                        int VAR_3 = VAR_2[VAR_1];
                        FUNC_1("class%s %d", (VAR_2[VAR_1 - 1] == 135 ? "not" : ""), VAR_3);
                        VAR_1++;
                        while (VAR_3--) {
                            FUNC_1(" 0x%02x-0x%02x", VAR_2[VAR_1], VAR_2[VAR_1 + 1]);
                            VAR_1 += 2;
                        }
                        FUNC_1("\n");
                        break;
                }
                case 131:
                        FUNC_1("namedclass %c\n", VAR_2[VAR_1++]);
                        break;
                case 132:
                        FUNC_1("match\n");
                        break;
                case 129:
                        FUNC_1("save %d\n", (unsigned char)VAR_2[VAR_1++]);
                        break;
                case 138:
                        FUNC_1("assert bol\n");
                        break;
                case 134:
                        FUNC_1("assert eol\n");
                        break;
                }
    }
    FUNC_1("Bytes: %d, insts: %d\n", VAR_0->bytelen, VAR_0->len);
}
