
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ text; int hwndSelf; int selection_end; int selection_start; } ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__ INT ;
typedef int HGLOBAL ;
typedef TYPE_1__ EDITSTATE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 scalar_t__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (scalar_t__*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(EDITSTATE *VAR_3)
{
 INT VAR_4 = FUNC_11(VAR_3->selection_start, VAR_3->selection_end);
 INT VAR_5 = FUNC_9(VAR_3->selection_start, VAR_3->selection_end);
 HGLOBAL VAR_6;
 LPWSTR VAR_7;
 DWORD VAR_8;

 if (VAR_5 == VAR_4) return;

 VAR_8 = VAR_5 - VAR_4;
 VAR_6 = FUNC_2(VAR_2 | VAR_1, (VAR_8 + 1) * sizeof(WCHAR));
 VAR_7 = FUNC_3(VAR_6);
 FUNC_10(VAR_7, VAR_3->text + VAR_4, VAR_8 * sizeof(WCHAR));
 VAR_7[VAR_8] = 0;
 FUNC_7("%s\n", FUNC_8(VAR_7));
 FUNC_4(VAR_6);
 FUNC_5(VAR_3->hwndSelf);
 FUNC_1();
 FUNC_6(VAR_0, VAR_6);
 FUNC_0();
}
