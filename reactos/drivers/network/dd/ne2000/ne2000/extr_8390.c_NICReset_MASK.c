
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_5__ {scalar_t__ IOBase; } ;
typedef TYPE_1__* PNIC_ADAPTER ;
typedef int NDIS_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int) ;

NDIS_STATUS FUNC_6(
    PNIC_ADAPTER VAR_3)







{
    UCHAR VAR_4;

    FUNC_0(VAR_0, ("Called.\n"));


    FUNC_2(VAR_3);


    FUNC_3(VAR_3->IOBase + VAR_2, &VAR_4);


    FUNC_5(1600);


    FUNC_4(VAR_3->IOBase + VAR_2, VAR_4);


    FUNC_1(VAR_3);

    return VAR_1;
}
