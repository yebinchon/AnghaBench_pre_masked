
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int uint16 ;
typedef int TransactionId ;
typedef int MultiXactId ;
typedef size_t BackendId ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 size_t FUNC_1 (int ,int) ;

void
FUNC_2(TransactionId VAR_2, uint16 VAR_3,
         void *VAR_4, uint32 VAR_5)
{
 BackendId VAR_6 = FUNC_1(VAR_2, 1);

 FUNC_0(VAR_5 == sizeof(MultiXactId));

 VAR_1[VAR_6] = VAR_0;
}
