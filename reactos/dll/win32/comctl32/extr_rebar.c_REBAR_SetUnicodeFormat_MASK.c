
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bUnicode; int hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef scalar_t__ LRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,char*,int ,char*) ;

__attribute__((used)) static inline LRESULT
FUNC_1 (REBAR_INFO *VAR_0, BOOL VAR_1)
{
    BOOL VAR_2 = VAR_0->bUnicode;

    FUNC_0("to %s hwnd=%p, was %s\n",
    VAR_1 ? "TRUE" : "FALSE", VAR_0->hwndSelf,
   (VAR_2) ? "TRUE" : "FALSE");

    VAR_0->bUnicode = VAR_1;

   return VAR_2;
}
