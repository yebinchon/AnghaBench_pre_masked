
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fStatus; int hwndSelf; int uNumBands; scalar_t__ DoRedraw; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static inline LRESULT
FUNC_4 (REBAR_INFO *VAR_2, BOOL VAR_3)
{
    BOOL VAR_4 = VAR_2->DoRedraw;

    FUNC_3("set to %s, fStatus=%08x\n",
   (VAR_3) ? "TRUE" : "FALSE", VAR_2->fStatus);
    VAR_2->DoRedraw = VAR_3;
    if (VAR_3) {
 if (VAR_2->fStatus & VAR_0) {
     FUNC_2 (VAR_2, 0, VAR_2->uNumBands);
     FUNC_1 (VAR_2);
     FUNC_0 (VAR_2->hwndSelf, ((void*)0), VAR_1);
 }
 VAR_2->fStatus &= ~VAR_0;
    }
    return (VAR_4) ? -1 : 0;
}
