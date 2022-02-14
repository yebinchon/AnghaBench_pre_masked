
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int UCHAR ;
struct TYPE_3__ {int CurrentPage; scalar_t__ IOBase; } ;
typedef TYPE_1__* PNIC_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static VOID FUNC_2(
    PNIC_ADAPTER VAR_6)





{
    UCHAR VAR_7;


    FUNC_1(VAR_6->IOBase + VAR_4, VAR_3 | VAR_2 | VAR_1);


    FUNC_0(VAR_6->IOBase + VAR_5, &VAR_7);


    FUNC_1(VAR_6->IOBase + VAR_4, VAR_3 | VAR_2 | VAR_0);

    VAR_6->CurrentPage = VAR_7;
}
