
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_11__ {int startIndex; scalar_t__ length; } ;
struct TYPE_12__ {int bits; TYPE_2__ src; } ;
struct TYPE_14__ {int length; scalar_t__ sense; TYPE_3__ u; scalar_t__ converted; } ;
struct TYPE_13__ {TYPE_1__* regexp; scalar_t__ ok; int cx; } ;
struct TYPE_10__ {int source_len; char* source; int flags; } ;
typedef TYPE_4__ REGlobalData ;
typedef TYPE_5__ RECharSet ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_5__*,char,char) ;
 int FUNC_1 (TYPE_5__*,char) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char,int*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int) ;
 char FUNC_10 (char) ;
 char FUNC_11 (char) ;

__attribute__((used)) static BOOL
FUNC_12(REGlobalData *VAR_3, RECharSet *VAR_4)
{
    const WCHAR *VAR_5, *VAR_6;
    BOOL VAR_7 = VAR_0;
    WCHAR VAR_8 = 0;
    UINT VAR_9, VAR_10;
    WCHAR VAR_11, VAR_12;
    INT VAR_13, VAR_14;

    FUNC_5(!VAR_4->converted);




    FUNC_5(1 <= VAR_4->u.src.startIndex);
    FUNC_5(VAR_4->u.src.startIndex < VAR_3->regexp->source_len);
    FUNC_5(VAR_4->u.src.length <= VAR_3->regexp->source_len
            - 1 - VAR_4->u.src.startIndex);

    VAR_4->converted = VAR_2;
    VAR_5 = VAR_3->regexp->source + VAR_4->u.src.startIndex;

    VAR_6 = VAR_5 + VAR_4->u.src.length;

    FUNC_5(VAR_5[-1] == '[' && VAR_6[0] == ']');

    VAR_9 = (VAR_4->length >> 3) + 1;
    VAR_4->u.bits = FUNC_6(VAR_9);
    if (!VAR_4->u.bits) {
        FUNC_4(VAR_3->cx);
        VAR_3->ok = VAR_0;
        return VAR_0;
    }
    FUNC_9(VAR_4->u.bits, 0, VAR_9);

    if (VAR_5 == VAR_6)
        return VAR_2;

    if (*VAR_5 == '^') {
        FUNC_5(VAR_4->sense == VAR_0);
        ++VAR_5;
    } else {
        FUNC_5(VAR_4->sense == VAR_2);
    }

    while (VAR_5 != VAR_6) {
        switch (*VAR_5) {
          case '\\':
            ++VAR_5;
            VAR_11 = *VAR_5++;
            switch (VAR_11) {
              case 'b':
                VAR_12 = 0x8;
                break;
              case 'f':
                VAR_12 = 0xC;
                break;
              case 'n':
                VAR_12 = 0xA;
                break;
              case 'r':
                VAR_12 = 0xD;
                break;
              case 't':
                VAR_12 = 0x9;
                break;
              case 'v':
                VAR_12 = 0xB;
                break;
              case 'c':
                if (VAR_5 < VAR_6 && FUNC_3(*VAR_5)) {
                    VAR_12 = (WCHAR)(*VAR_5++ & 0x1F);
                } else {
                    --VAR_5;
                    VAR_12 = '\\';
                }
                break;
              case 'x':
                VAR_13 = 2;
                goto lexHex;
              case 'u':
                VAR_13 = 4;
            lexHex:
                VAR_10 = 0;
                for (VAR_14 = 0; (VAR_14 < VAR_13) && (VAR_5 < VAR_6); VAR_14++) {
                    UINT VAR_15;
                    VAR_11 = *VAR_5++;
                    if (!FUNC_7(VAR_11, &VAR_15)) {




                        VAR_5 -= VAR_14 + 1;
                        VAR_10 = '\\';
                        break;
                    }
                    VAR_10 = (VAR_10 << 4) | VAR_15;
                }
                VAR_12 = (WCHAR)VAR_10;
                break;
              case '0':
              case '1':
              case '2':
              case '3':
              case '4':
              case '5':
              case '6':
              case '7':





                VAR_10 = FUNC_2(VAR_11);
                VAR_11 = *VAR_5;
                if ('0' <= VAR_11 && VAR_11 <= '7') {
                    VAR_5++;
                    VAR_10 = 8 * VAR_10 + FUNC_2(VAR_11);
                    VAR_11 = *VAR_5;
                    if ('0' <= VAR_11 && VAR_11 <= '7') {
                        VAR_5++;
                        VAR_14 = 8 * VAR_10 + FUNC_2(VAR_11);
                        if (VAR_14 <= 0377)
                            VAR_10 = VAR_14;
                        else
                            VAR_5--;
                    }
                }
                VAR_12 = (WCHAR)VAR_10;
                break;

              case 'd':
                FUNC_0(VAR_4, '0', '9');
                continue;
              case 'D':
                FUNC_0(VAR_4, 0, '0' - 1);
                FUNC_0(VAR_4,
                                           (WCHAR)('9' + 1),
                                           (WCHAR)VAR_4->length);
                continue;
              case 's':
                for (VAR_14 = (INT)VAR_4->length; VAR_14 >= 0; VAR_14--)
                    if (FUNC_8(VAR_14))
                        FUNC_1(VAR_4, (WCHAR)VAR_14);
                continue;
              case 'S':
                for (VAR_14 = (INT)VAR_4->length; VAR_14 >= 0; VAR_14--)
                    if (!FUNC_8(VAR_14))
                        FUNC_1(VAR_4, (WCHAR)VAR_14);
                continue;
              case 'w':
                for (VAR_14 = (INT)VAR_4->length; VAR_14 >= 0; VAR_14--)
                    if (FUNC_3(VAR_14))
                        FUNC_1(VAR_4, (WCHAR)VAR_14);
                continue;
              case 'W':
                for (VAR_14 = (INT)VAR_4->length; VAR_14 >= 0; VAR_14--)
                    if (!FUNC_3(VAR_14))
                        FUNC_1(VAR_4, (WCHAR)VAR_14);
                continue;
              default:
                VAR_12 = VAR_11;
                break;

            }
            break;

          default:
            VAR_12 = *VAR_5++;
            break;

        }
        if (VAR_7) {
            if (VAR_3->regexp->flags & VAR_1) {
                FUNC_5(VAR_8 <= VAR_12);
                for (VAR_14 = VAR_8; VAR_14 <= VAR_12; VAR_14++) {
                    WCHAR VAR_16, VAR_17;

                    FUNC_1(VAR_4, VAR_14);
                    VAR_16 = FUNC_11(VAR_14);
                    VAR_17 = FUNC_10(VAR_14);
                    if (VAR_14 != VAR_16)
                        FUNC_1(VAR_4, VAR_16);
                    if (VAR_14 != VAR_17)
                        FUNC_1(VAR_4, VAR_17);
                }
            } else {
                FUNC_0(VAR_4, VAR_8, VAR_12);
            }
            VAR_7 = VAR_0;
        } else {
            if (VAR_3->regexp->flags & VAR_1) {
                FUNC_1(VAR_4, FUNC_11(VAR_12));
                FUNC_1(VAR_4, FUNC_10(VAR_12));
            } else {
                FUNC_1(VAR_4, VAR_12);
            }
            if (VAR_5 < VAR_6 - 1) {
                if (*VAR_5 == '-') {
                    ++VAR_5;
                    VAR_7 = VAR_2;
                    VAR_8 = VAR_12;
                }
            }
        }
    }
    return VAR_2;
}
