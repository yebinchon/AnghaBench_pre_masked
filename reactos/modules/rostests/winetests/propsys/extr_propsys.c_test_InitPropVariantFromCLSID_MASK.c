
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int propvar ;
typedef int clsid ;
struct TYPE_9__ {int lVal; int puuid; } ;
struct TYPE_10__ {scalar_t__ vt; TYPE_1__ u; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef scalar_t__ HRESULT ;
typedef TYPE_2__ GUID ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    PROPVARIANT VAR_3;
    GUID VAR_4;
    HRESULT VAR_5;

    FUNC_3(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.vt = VAR_2;
    VAR_3.u.lVal = 15;

    FUNC_3(&VAR_4, 0xcc, sizeof(VAR_4));
    VAR_5 = FUNC_0(&VAR_4, &VAR_3);
    FUNC_4(VAR_5 == VAR_0, "Unexpected hr %#x.\n", VAR_5);
    FUNC_4(VAR_3.vt == VAR_1, "Unexpected type %d.\n", VAR_3.vt);
    FUNC_4(FUNC_1(VAR_3.u.puuid, &VAR_4), "Unexpected puuid value.\n");
    FUNC_2(&VAR_3);
}
