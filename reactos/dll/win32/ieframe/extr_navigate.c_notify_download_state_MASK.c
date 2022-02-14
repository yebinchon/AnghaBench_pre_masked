
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * member_0; } ;
struct TYPE_6__ {int wbe2; } ;
struct TYPE_7__ {TYPE_1__ cps; int busy; } ;
typedef TYPE_2__ DocHost ;
typedef TYPE_3__ DISPPARAMS ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;

void FUNC_2(DocHost *VAR_4, BOOL VAR_5)
{
    DISPPARAMS VAR_6 = {((void*)0)};
    FUNC_0("(%x)\n", VAR_5);
    VAR_4->busy = VAR_5 ? VAR_3 : VAR_2;
    FUNC_1(VAR_4->cps.wbe2, VAR_5 ? VAR_0 : VAR_1, &VAR_6);
}
