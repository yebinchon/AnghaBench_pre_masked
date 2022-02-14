
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;
typedef int StringInfo ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(StringInfo VAR_0, int VAR_1, TransactionId *VAR_2)
{
 int VAR_3;

 if (VAR_1 > 0)
 {
  FUNC_1(VAR_0, "; subxacts:");
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   FUNC_0(VAR_0, " %u", VAR_2[VAR_3]);
 }
}
