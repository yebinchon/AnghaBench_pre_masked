
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hsec; scalar_t__ himages; int hlv; struct TYPE_6__* zones; struct TYPE_6__* zone_attr; } ;
typedef TYPE_1__ secdlg_data ;
typedef int INT_PTR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static INT_PTR FUNC_6(secdlg_data * VAR_4)
{
    FUNC_3("(%p)\n", VAR_4);

    FUNC_4(VAR_4->zone_attr);
    FUNC_4(VAR_4->zones);
    if (VAR_4->himages) {
        FUNC_1(VAR_4->hlv, VAR_1, VAR_2, 0);
        FUNC_0(VAR_4->himages);
    }

    FUNC_5(VAR_4);
    FUNC_2(VAR_4->hsec, VAR_0, 0);
    FUNC_4(VAR_4);
    return VAR_3;
}
