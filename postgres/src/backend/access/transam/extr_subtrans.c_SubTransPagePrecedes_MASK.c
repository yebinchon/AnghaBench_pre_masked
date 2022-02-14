
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static bool
FUNC_1(int VAR_2, int VAR_3)
{
 TransactionId VAR_4;
 TransactionId VAR_5;

 VAR_4 = ((TransactionId) VAR_2) * VAR_1;
 VAR_4 += VAR_0;
 VAR_5 = ((TransactionId) VAR_3) * VAR_1;
 VAR_5 += VAR_0;

 return FUNC_0(VAR_4, VAR_5);
}
