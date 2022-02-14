
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_6__ {TYPE_1__* fs; } ;
struct TYPE_7__ {char* fn; TYPE_2__ obj; } ;
struct TYPE_5__ {char* lfnbuf; } ;
typedef char TCHAR ;
typedef int FRESULT ;
typedef int DWORD ;
typedef TYPE_3__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 void** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 char FUNC_5 (char,int ) ;
 char FUNC_6 (char) ;
 int FUNC_7 (int*,char,int) ;
 int FUNC_8 (char const**) ;

__attribute__((used)) static FRESULT FUNC_9 (
    DIR* VAR_14,
    const TCHAR** VAR_15
)
{
    BYTE VAR_16, VAR_17, *VAR_18;
    UINT VAR_19, VAR_20, VAR_21;
    const char *VAR_22;


    VAR_22 = *VAR_15; VAR_18 = VAR_14->fn;
    FUNC_7(VAR_18, ' ', 11);
    VAR_20 = VAR_21 = 0; VAR_19 = 8;
    for (;;) {
        VAR_16 = (BYTE)VAR_22[VAR_20++];
        if (VAR_16 <= ' ') break;
        if (VAR_16 == '/' || VAR_16 == '\\') {
            while (VAR_22[VAR_20] == '/' || VAR_22[VAR_20] == '\\') VAR_20++;
            break;
        }
        if (VAR_16 == '.' || VAR_21 >= VAR_19) {
            if (VAR_19 == 11 || VAR_16 != '.') return VAR_4;
            VAR_21 = 8; VAR_19 = 11;
            continue;
        }

        if (VAR_2 && VAR_16 >= 0x80) {
            VAR_16 = VAR_2[VAR_16 & 0x7F];
        }





        if (FUNC_3(VAR_16)) {
            VAR_17 = (BYTE)VAR_22[VAR_20++];
            if (!FUNC_4(VAR_17) || VAR_21 >= VAR_19 - 1) return VAR_4;
            VAR_18[VAR_21++] = VAR_16;
            VAR_18[VAR_21++] = VAR_17;
        } else {
            if (FUNC_2("\"*+,:;<=>\?[]|\x7F", VAR_16)) return VAR_4;
            if (FUNC_0(VAR_16)) VAR_16 -= 0x20;
            VAR_18[VAR_21++] = VAR_16;
        }
    }
    *VAR_15 = VAR_22 + VAR_20;
    if (VAR_21 == 0) return VAR_4;

    if (VAR_18[0] == VAR_1) VAR_18[0] = VAR_13;
    VAR_18[VAR_6] = (VAR_16 <= ' ') ? VAR_10 : 0;

    return VAR_5;

}
