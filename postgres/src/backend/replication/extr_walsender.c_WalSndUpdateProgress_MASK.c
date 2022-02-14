
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int TimestampTz ;
typedef int LogicalDecodingContext ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(LogicalDecodingContext *VAR_1, XLogRecPtr VAR_2, TransactionId VAR_3)
{
 static TimestampTz VAR_4 = 0;
 TimestampTz VAR_5 = FUNC_0();






 if (!FUNC_2(VAR_4, VAR_5,
         1000))
  return;

 FUNC_1(VAR_2, VAR_5);
 VAR_4 = VAR_5;
}
