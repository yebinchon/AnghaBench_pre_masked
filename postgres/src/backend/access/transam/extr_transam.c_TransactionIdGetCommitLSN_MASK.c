
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int TransactionId ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

XLogRecPtr
FUNC_3(TransactionId VAR_3)
{
 XLogRecPtr VAR_4;







 if (FUNC_0(VAR_3, VAR_2))
  return VAR_1;


 if (!FUNC_2(VAR_3))
  return VAR_0;




 (void) FUNC_1(VAR_3, &VAR_4);

 return VAR_4;
}
