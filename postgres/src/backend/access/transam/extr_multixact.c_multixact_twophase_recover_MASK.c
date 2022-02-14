
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
 int * VAR_0 ;
 size_t FUNC_1 (int ,int) ;

void
FUNC_2(TransactionId VAR_1, uint16 VAR_2,
         void *VAR_3, uint32 VAR_4)
{
 BackendId VAR_5 = FUNC_1(VAR_1, 0);
 MultiXactId VAR_6;





 FUNC_0(VAR_4 == sizeof(MultiXactId));
 VAR_6 = *((MultiXactId *) VAR_3);

 VAR_0[VAR_5] = VAR_6;
}
