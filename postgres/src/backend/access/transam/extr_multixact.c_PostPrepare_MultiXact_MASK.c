
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;
typedef void* MultiXactId ;
typedef size_t BackendId ;


 void* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (void*) ;
 size_t VAR_6 ;
 void** VAR_7 ;
 void** VAR_8 ;
 size_t FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

void
FUNC_5(TransactionId VAR_9)
{
 MultiXactId VAR_10;





 VAR_10 = VAR_7[VAR_6];
 if (FUNC_2(VAR_10))
 {
  BackendId VAR_11 = FUNC_3(VAR_9, 0);







  FUNC_0(VAR_5, VAR_1);

  VAR_7[VAR_11] = VAR_10;
  VAR_7[VAR_6] = VAR_0;

  FUNC_1(VAR_5);
 }
 VAR_8[VAR_6] = VAR_0;




 VAR_4 = ((void*)0);
 FUNC_4(&VAR_2);
 VAR_3 = 0;
}
