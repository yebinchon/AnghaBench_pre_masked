
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_8__ {scalar_t__ hwndFrom; void* code; void* idFrom; } ;
struct TYPE_7__ {scalar_t__ hwndFrom; int hwndTo; int dwParam5; } ;
typedef TYPE_1__ NOTIFYDATA ;
typedef TYPE_2__ NMHDR ;
typedef int LRESULT ;
typedef TYPE_2__* LPNMHDR ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,void*,int ) ;
 int FUNC_2 (char*,scalar_t__,int ,void*,TYPE_2__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT FUNC_3 (const NOTIFYDATA *VAR_1, UINT VAR_2, LPNMHDR VAR_3)
{
    NMHDR VAR_4;
    LPNMHDR VAR_5 = ((void*)0);
    UINT VAR_6 = 0;

    FUNC_2("(%p %p %d %p 0x%08x)\n",
    VAR_1->hwndFrom, VAR_1->hwndTo, VAR_2, VAR_3,
    VAR_1->dwParam5);

    if (!VAR_1->hwndTo)
 return 0;

    if (VAR_1->hwndFrom == (HWND)-1) {
 VAR_5 = VAR_3;
 VAR_6 = VAR_3->idFrom;
    }
    else {
 if (VAR_1->hwndFrom)
     VAR_6 = FUNC_0 (VAR_1->hwndFrom);

 VAR_5 = (VAR_3) ? VAR_3 : &VAR_4;

 VAR_5->hwndFrom = VAR_1->hwndFrom;
 VAR_5->idFrom = VAR_6;
 VAR_5->code = VAR_2;
    }

    return FUNC_1 (VAR_1->hwndTo, VAR_0, VAR_6, (LPARAM)VAR_5);
}
