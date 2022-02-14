
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int cmsInt32Number ;
struct TYPE_9__ {scalar_t__ sy; char ch; char* id; int inum; int dnum; char* DoubleFormatter; char* str; int IncludeSP; TYPE_2__** FileStack; int lineno; } ;
typedef TYPE_1__ cmsIT8 ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;
struct TYPE_10__ {char FileName; int * Stream; } ;
typedef scalar_t__ SYMBOL ;
typedef TYPE_2__ FILECTX ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char,char,scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*,scalar_t__,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int ,TYPE_1__*,char*,...) ;
 scalar_t__ VAR_13 ;
 int * FUNC_7 (char,char*) ;
 scalar_t__ FUNC_8 (char) ;
 scalar_t__ FUNC_9 (char) ;
 scalar_t__ FUNC_10 (char) ;
 scalar_t__ FUNC_11 (char) ;
 scalar_t__ FUNC_12 (char) ;
 int FUNC_13 (char*,int,char*,int) ;
 scalar_t__ FUNC_14 (char*) ;
 char FUNC_15 (char) ;

__attribute__((used)) static
void FUNC_16(cmsContext VAR_14, cmsIT8* VAR_15)
{
    register char *VAR_16;
    register int VAR_17;
    SYMBOL VAR_18;
    int VAR_19;

    do {

        while (FUNC_11(VAR_15->ch))
            FUNC_4(VAR_15);

        if (FUNC_9(VAR_15->ch)) {

            VAR_17 = 0;
            VAR_16 = VAR_15->id;

            do {

                if (++VAR_17 < VAR_1) *VAR_16++ = (char) VAR_15->ch;

                FUNC_4(VAR_15);

            } while (FUNC_10(VAR_15->ch));

            *VAR_16 = '\0';


            VAR_18 = FUNC_1(VAR_15->id);
            if (VAR_18 == VAR_12) VAR_15->sy = VAR_8;
            else VAR_15->sy = VAR_18;

        }
        else
            if (FUNC_8(VAR_15->ch) || VAR_15->ch == '.' || VAR_15->ch == '-' || VAR_15->ch == '+')
            {
                int VAR_20 = 1;

                if (VAR_15->ch == '-') {
                    VAR_20 = -1;
                    FUNC_4(VAR_15);
                }

                VAR_15->inum = 0;
                VAR_15->sy = VAR_10;

                if (VAR_15->ch == '0') {

                    FUNC_4(VAR_15);
                    if (FUNC_15(VAR_15->ch) == 'X') {

                        int VAR_21;

                        FUNC_4(VAR_15);
                        while (FUNC_12(VAR_15->ch))
                        {
                            VAR_15->ch = FUNC_15(VAR_15->ch);
                            if (VAR_15->ch >= 'A' && VAR_15->ch <= 'F') VAR_21 = VAR_15->ch -'A'+10;
                            else VAR_21 = VAR_15->ch - '0';

                            if ((cmsFloat64Number) VAR_15->inum * 16.0 + (cmsFloat64Number) VAR_21 > (cmsFloat64Number)+2147483647.0)
                            {
                                FUNC_6(VAR_14, VAR_15, "Invalid hexadecimal number");
                                return;
                            }

                            VAR_15->inum = VAR_15->inum * 16 + VAR_21;
                            FUNC_4(VAR_15);
                        }
                        return;
                    }

                    if (FUNC_15(VAR_15->ch) == 'B') {

                        int VAR_22;

                        FUNC_4(VAR_15);
                        while (VAR_15->ch == '0' || VAR_15->ch == '1')
                        {
                            VAR_22 = VAR_15->ch - '0';

                            if ((cmsFloat64Number) VAR_15->inum * 2.0 + VAR_22 > (cmsFloat64Number)+2147483647.0)
                            {
                                FUNC_6(VAR_14, VAR_15, "Invalid binary number");
                                return;
                            }

                            VAR_15->inum = VAR_15->inum * 2 + VAR_22;
                            FUNC_4(VAR_15);
                        }
                        return;
                    }
                }


                while (FUNC_8(VAR_15->ch)) {

                    cmsInt32Number VAR_23 = (VAR_15->ch - '0');

                    if ((cmsFloat64Number) VAR_15->inum * 10.0 + (cmsFloat64Number) VAR_23 > (cmsFloat64Number) +2147483647.0) {
                        FUNC_5(VAR_15, VAR_15->inum);
                        VAR_15->sy = VAR_5;
                        VAR_15->dnum *= VAR_20;
                        return;
                    }

                    VAR_15->inum = VAR_15->inum * 10 + VAR_23;
                    FUNC_4(VAR_15);
                }

                if (VAR_15->ch == '.') {

                    FUNC_5(VAR_15, VAR_15->inum);
                    VAR_15->sy = VAR_5;
                    VAR_15->dnum *= VAR_20;
                    return;
                }

                VAR_15 -> inum *= VAR_20;



                if (FUNC_10(VAR_15 ->ch)) {

                    if (VAR_15 ->sy == VAR_10) {

                        FUNC_13(VAR_15->id, 127, "%d", VAR_15->inum);
                    }
                    else {

                        FUNC_13(VAR_15->id, 127, VAR_15 ->DoubleFormatter, VAR_15->dnum);
                    }

                    VAR_17 = (int) FUNC_14(VAR_15 ->id);
                    VAR_16 = VAR_15 ->id + VAR_17;
                    do {

                        if (++VAR_17 < VAR_1) *VAR_16++ = (char) VAR_15->ch;

                        FUNC_4(VAR_15);

                    } while (FUNC_10(VAR_15->ch));

                    *VAR_16 = '\0';
                    VAR_15->sy = VAR_8;
                }
                return;

            }
            else
                switch ((int) VAR_15->ch) {


        case '\x1a':
            FUNC_4(VAR_15);
            break;


        case 0:
        case -1:
            VAR_15->sy = VAR_6;
            break;



        case '\r':
            FUNC_4(VAR_15);
            if (VAR_15 ->ch == '\n')
                FUNC_4(VAR_15);
            VAR_15->sy = VAR_7;
            VAR_15->lineno++;
            break;

        case '\n':
            FUNC_4(VAR_15);
            VAR_15->sy = VAR_7;
            VAR_15->lineno++;
            break;


        case '#':
            FUNC_4(VAR_15);
            while (VAR_15->ch && VAR_15->ch != '\n' && VAR_15->ch != '\r')
                FUNC_4(VAR_15);

            VAR_15->sy = VAR_4;
            break;


        case '\'':
        case '\"':
            VAR_16 = VAR_15->str;
            VAR_19 = VAR_15->ch;
            VAR_17 = 0;
            FUNC_4(VAR_15);

            while (VAR_17 < (VAR_3-1) && VAR_15->ch != VAR_19) {

                if (VAR_15->ch == '\n'|| VAR_15->ch == '\r') VAR_17 = VAR_3+1;
                else {
                    *VAR_16++ = (char) VAR_15->ch;
                    FUNC_4(VAR_15);
                    VAR_17++;
                }
            }

            VAR_15->sy = VAR_11;
            *VAR_16 = '\0';
            FUNC_4(VAR_15);
            break;


        default:
            FUNC_6(VAR_14, VAR_15, "Unrecognized character: 0x%x", VAR_15 ->ch);
            return;
            }

    } while (VAR_15->sy == VAR_4);



    if (VAR_15 -> sy == VAR_9) {

                FILECTX* VAR_24;

                if(VAR_15 -> IncludeSP >= (VAR_2-1)) {

                    FUNC_6(VAR_14, VAR_15, "Too many recursion levels");
                    return;
                }

                FUNC_16(VAR_14, VAR_15);
                if (!FUNC_3(VAR_14, VAR_15, VAR_11, "Filename expected")) return;

                VAR_24 = VAR_15 -> FileStack[VAR_15 -> IncludeSP + 1];
                if(VAR_24 == ((void*)0)) {

                    VAR_24 = VAR_15 ->FileStack[VAR_15 -> IncludeSP + 1] = (FILECTX*)FUNC_0(VAR_14, VAR_15, sizeof(FILECTX));


                }

                if (FUNC_2(VAR_15->str,
                                      VAR_15->FileStack[VAR_15->IncludeSP]->FileName,
                                      VAR_24->FileName, VAR_13-1) == VAR_0) {
                    FUNC_6(VAR_14, VAR_15, "File path too long");
                    return;
                }

                VAR_24->Stream = FUNC_7(VAR_24->FileName, "rt");
                if (VAR_24->Stream == ((void*)0)) {

                        FUNC_6(VAR_14, VAR_15, "File %s not found", VAR_24->FileName);
                        return;
                }
                VAR_15->IncludeSP++;

                VAR_15 ->ch = ' ';
                FUNC_16(VAR_14, VAR_15);
    }

}
