
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {scalar_t__ nFilterIndex; int lpstrFilter; int lpstrCustomFilter; } ;
typedef TYPE_1__ OPENFILENAMEW ;
typedef int LRESULT ;
typedef int LPSTR ;
typedef char* LPCWSTR ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;
typedef int HCURSOR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,char*,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,int ,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int VAR_8 ;
 int FUNC_8 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ,int) ;
 int VAR_11 ;
 char* FUNC_11 (char*,char) ;

__attribute__((used)) static BOOL FUNC_12(const OPENFILENAMEW *VAR_12, HWND VAR_13, LPCWSTR VAR_14)
{
    WCHAR VAR_15[VAR_0];
    HWND VAR_16;
    LRESULT VAR_17 = VAR_8;
    HCURSOR VAR_18, VAR_19;

    FUNC_7("Trying to change to %s\n", FUNC_8(VAR_14));
    if ( VAR_14[0] && !FUNC_5( VAR_14 ))
        return VAR_3;


    FUNC_10(VAR_15, FUNC_1(VAR_12->lpstrCustomFilter,
              VAR_12->lpstrFilter, VAR_12->nFilterIndex - 1), VAR_0);

    VAR_18 = FUNC_3(0, (LPSTR)VAR_5);
    VAR_19 = FUNC_6(VAR_18);


    if ((VAR_16 = FUNC_2(VAR_13, VAR_9)) != 0) {
        WCHAR* VAR_20;
 WCHAR* VAR_21 = VAR_15;

 FUNC_7("Using filter %s\n", FUNC_8(VAR_21));
 FUNC_4(VAR_16, VAR_7, 0, 0);
 while (VAR_21) {
     VAR_20 = FUNC_11(VAR_21, ';');
     if (VAR_20) *VAR_20 = 0;
     while (*VAR_21 == ' ') VAR_21++;
     FUNC_7("Using file spec %s\n", FUNC_8(VAR_21));
     FUNC_4(VAR_16, VAR_6, 0, (LPARAM)VAR_21);
     if (VAR_20) *VAR_20 = ';';
     VAR_21 = (VAR_20) ? (VAR_20 + 1) : 0;
  }
    }


    FUNC_9(VAR_15, VAR_4);

    if (FUNC_2(VAR_13, VAR_10) != 0) {
        VAR_17 = FUNC_0(VAR_13, VAR_15, VAR_10, VAR_11, VAR_2 | VAR_1);
    }
    FUNC_6(VAR_19);
    return VAR_17;
}
