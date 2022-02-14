
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ IOBase; } ;
typedef TYPE_1__* PNIC_ADAPTER ;
typedef int NDIS_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

NDIS_STATUS FUNC_2(
    PNIC_ADAPTER VAR_7)







{
    FUNC_0(VAR_0, ("Called.\n"));


    FUNC_1(VAR_7->IOBase + VAR_3, 0x00);


    FUNC_1(VAR_7->IOBase + VAR_2, VAR_4 | VAR_5 | VAR_6);

    return VAR_1;
}
