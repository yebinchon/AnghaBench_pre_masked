
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {int bUnicode; scalar_t__ hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ LPARAM ;
typedef scalar_t__ INT ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static LRESULT
FUNC_3 (REBAR_INFO *VAR_5, LPARAM VAR_6)
{
    INT VAR_7;

    if (VAR_6 == VAR_3) {
 VAR_7 = FUNC_2(FUNC_1 (VAR_5),
    VAR_4, (WPARAM)VAR_5->hwndSelf, VAR_2);
        if ((VAR_7 != VAR_0) && (VAR_7 != VAR_1)) {
     FUNC_0("wrong response to WM_NOTIFYFORMAT (%d), assuming ANSI\n", VAR_7);
     VAR_7 = VAR_0;
 }
        VAR_5->bUnicode = (VAR_7 == VAR_1);
 return (LRESULT)VAR_7;
    }
    return (LRESULT)((VAR_5->bUnicode) ? VAR_1 : VAR_0);
}
