
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SLIST_HEADER ;
typedef scalar_t__ PSLIST_HEADER ;
typedef int HINSTANCE ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_3(HINSTANCE VAR_3)
{
    VAR_1 = VAR_3;
    VAR_0 = FUNC_0(0, 0x10000, 0);

    VAR_2 = (PSLIST_HEADER)FUNC_2(sizeof(SLIST_HEADER));
    FUNC_1(VAR_2);
}
