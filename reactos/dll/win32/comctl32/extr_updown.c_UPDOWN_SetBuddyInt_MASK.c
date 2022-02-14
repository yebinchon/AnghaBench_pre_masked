
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int txt ;
typedef char WCHAR ;
struct TYPE_4__ {int Flags; int Base; int dwStyle; int Buddy; int CurVal; } ;
typedef TYPE_1__ UPDOWN_INFO ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int ) ;
 int VAR_4 ;
 char FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__ const*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char const*,int ) ;

__attribute__((used)) static BOOL FUNC_11 (const UPDOWN_INFO *VAR_5)
{
    static const WCHAR VAR_6[] = { '0', 'x', '%', '0', '4', 'X', 0 };
    static const WCHAR VAR_7[] = { '%', 'd', '\0' };
    const WCHAR *VAR_8;
    WCHAR VAR_9[20], VAR_10[20] = { 0 };
    int VAR_11;

    if (!((VAR_5->Flags & VAR_1) && FUNC_2(VAR_5->Buddy)))
        return VAR_0;

    FUNC_5("set new value(%d) to buddy.\n", VAR_5->CurVal);


    if (FUNC_7(VAR_5)) {
        return FUNC_3(VAR_5->Buddy, VAR_3, VAR_5->CurVal, 0) != VAR_2;
    }


    VAR_8 = (VAR_5->Base == 16) ? VAR_6 : VAR_7;
    VAR_11 = FUNC_10(VAR_9, VAR_8, VAR_5->CurVal);



    if ((VAR_5->Base == 10) && !(VAR_5->dwStyle & VAR_4) && (VAR_11 > 3)) {
        WCHAR VAR_12[FUNC_0(VAR_9)], *VAR_13 = VAR_12, *VAR_14 = VAR_9;
        WCHAR VAR_15 = FUNC_6();
 int VAR_16 = VAR_11 % 3;

 FUNC_9(VAR_12, VAR_9, sizeof(VAR_9));
 if (VAR_16 == 0) VAR_16 = 3;
 VAR_14 += VAR_16;
 VAR_13 += VAR_16;
        for (VAR_11=0; *VAR_13; VAR_11++) {
     if (VAR_11 % 3 == 0) *VAR_14++ = VAR_15;
     *VAR_14++ = *VAR_13++;
        }
        *VAR_14 = 0;
    }


    FUNC_1(VAR_5->Buddy, VAR_10, FUNC_0(VAR_10));
    if (FUNC_8(VAR_10, VAR_9) == 0) return VAR_0;

    return FUNC_4(VAR_5->Buddy, VAR_9);
}
