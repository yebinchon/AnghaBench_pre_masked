
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XidStatus ;
typedef int XLogRecPtr ;
typedef int TransactionId ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static XidStatus
FUNC_3(TransactionId VAR_9)
{
 XidStatus VAR_10;
 XLogRecPtr VAR_11;





 if (FUNC_0(VAR_9, VAR_7))
  return VAR_8;




 if (!FUNC_2(VAR_9))
 {
  if (FUNC_0(VAR_9, VAR_0))
   return VAR_3;
  if (FUNC_0(VAR_9, VAR_1))
   return VAR_3;
  return VAR_2;
 }




 VAR_10 = FUNC_1(VAR_9, &VAR_11);





 if (VAR_10 != VAR_4 &&
  VAR_10 != VAR_5)
 {
  VAR_7 = VAR_9;
  VAR_8 = VAR_10;
  VAR_6 = VAR_11;
 }

 return VAR_10;
}
