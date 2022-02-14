
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_10__ {int flags; int context; } ;
struct TYPE_7__ {int bmsize; void* sense; } ;
struct TYPE_8__ {TYPE_1__ ucclass; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
typedef TYPE_3__ RENode ;
typedef TYPE_4__ CompilerState ;
typedef void* BOOL ;


 void* VAR_0 ;
 int FUNC_0 (char) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (char const) ;
 void* VAR_3 ;
 int FUNC_3 (char,int*) ;
 int VAR_4 ;
 char FUNC_4 (int) ;
 char FUNC_5 (int) ;

__attribute__((used)) static BOOL
FUNC_6(CompilerState *VAR_5, RENode *VAR_6, const WCHAR *VAR_7,
                    const WCHAR *VAR_8)
{
    UINT VAR_9 = 0;
    BOOL VAR_10 = VAR_0;
    WCHAR VAR_11, VAR_12 = 0;
    UINT VAR_13, VAR_14, VAR_15, VAR_16;

    VAR_6->u.ucclass.bmsize = 0;
    VAR_6->u.ucclass.sense = VAR_3;

    if (VAR_7 == VAR_8)
        return VAR_3;

    if (*VAR_7 == '^') {
        ++VAR_7;
        VAR_6->u.ucclass.sense = VAR_0;
    }

    while (VAR_7 != VAR_8) {
        BOOL VAR_17 = VAR_3;
        UINT VAR_18 = 0;

        switch (*VAR_7) {
          case '\\':
            ++VAR_7;
            VAR_11 = *VAR_7++;
            switch (VAR_11) {
              case 'b':
                VAR_18 = 0x8;
                break;
              case 'f':
                VAR_18 = 0xC;
                break;
              case 'n':
                VAR_18 = 0xA;
                break;
              case 'r':
                VAR_18 = 0xD;
                break;
              case 't':
                VAR_18 = 0x9;
                break;
              case 'v':
                VAR_18 = 0xB;
                break;
              case 'c':
                if (VAR_7 < VAR_8 && FUNC_2(*VAR_7)) {
                    VAR_18 = (UINT) (*VAR_7++) & 0x1F;
                } else {
                    --VAR_7;
                    VAR_18 = '\\';
                }
                break;
              case 'x':
                VAR_15 = 2;
                goto lexHex;
              case 'u':
                VAR_15 = 4;
lexHex:
                VAR_13 = 0;
                for (VAR_16 = 0; (VAR_16 < VAR_15) && (VAR_7 < VAR_8); VAR_16++) {
                    VAR_11 = *VAR_7++;
                    if (!FUNC_3(VAR_11, &VAR_14)) {




                        VAR_7 -= VAR_16 + 1;
                        VAR_13 = '\\';
                        break;
                    }
                    VAR_13 = (VAR_13 << 4) | VAR_14;
                }
                VAR_18 = VAR_13;
                break;
              case 'd':
                VAR_17 = VAR_0;
                if (VAR_10) {
                    FUNC_1(VAR_5->context,
                                         VAR_4, ((void*)0),
                                         VAR_1);
                    return VAR_0;
                }
                VAR_18 = '9';
                break;
              case 'D':
              case 's':
              case 'S':
              case 'w':
              case 'W':
                VAR_17 = VAR_0;
                if (VAR_10) {
                    FUNC_1(VAR_5->context,
                                         VAR_4, ((void*)0),
                                         VAR_1);
                    return VAR_0;
                }
                VAR_9 = 65535;





                VAR_18 = 0;
                break;
              case '0':
              case '1':
              case '2':
              case '3':
              case '4':
              case '5':
              case '6':
              case '7':






                VAR_13 = FUNC_0(VAR_11);
                VAR_11 = *VAR_7;
                if ('0' <= VAR_11 && VAR_11 <= '7') {
                    VAR_7++;
                    VAR_13 = 8 * VAR_13 + FUNC_0(VAR_11);
                    VAR_11 = *VAR_7;
                    if ('0' <= VAR_11 && VAR_11 <= '7') {
                        VAR_7++;
                        VAR_16 = 8 * VAR_13 + FUNC_0(VAR_11);
                        if (VAR_16 <= 0377)
                            VAR_13 = VAR_16;
                        else
                            VAR_7--;
                    }
                }
                VAR_18 = VAR_13;
                break;

              default:
                VAR_18 = VAR_11;
                break;
            }
            break;
          default:
            VAR_18 = *VAR_7++;
            break;
        }

        if (VAR_10) {

            if (VAR_12 > VAR_18) {
                FUNC_1(VAR_5->context,
                                     VAR_4, ((void*)0),
                                     VAR_1);
                return VAR_0;
            }
            VAR_10 = VAR_0;
        } else {
            if (VAR_17 && VAR_7 < VAR_8 - 1) {
                if (*VAR_7 == '-') {
                    ++VAR_7;
                    VAR_10 = VAR_3;
                    VAR_12 = (WCHAR)VAR_18;
                    continue;
                }
            }
            if (VAR_5->flags & VAR_2)
                VAR_12 = VAR_18;
        }

        if (VAR_5->flags & VAR_2) {
            WCHAR VAR_19 = VAR_18;

            for (VAR_16 = VAR_12; VAR_16 <= VAR_18; VAR_16++) {
                WCHAR VAR_20, VAR_21;

                VAR_20 = FUNC_5(VAR_16);
                VAR_21 = FUNC_4(VAR_16);
                if(VAR_19 < VAR_20)
                    VAR_19 = VAR_20;
                if(VAR_19 < VAR_21)
                    VAR_19 = VAR_21;
            }
            VAR_18 = VAR_19;
        }

        if (VAR_18 > VAR_9)
            VAR_9 = VAR_18;
    }
    VAR_6->u.ucclass.bmsize = VAR_9;
    return VAR_3;
}
