
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bUnicode; int hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef scalar_t__ LRESULT ;


 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static inline LRESULT
FUNC_1 (const REBAR_INFO *VAR_0)
{
    FUNC_0("%s hwnd=%p\n",
   VAR_0->bUnicode ? "TRUE" : "FALSE", VAR_0->hwndSelf);

    return VAR_0->bUnicode;
}
