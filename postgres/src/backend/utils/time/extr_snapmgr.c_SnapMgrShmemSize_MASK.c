
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;
typedef int Size ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

Size
FUNC_3(void)
{
 Size VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (VAR_2 > 0)
  VAR_4 = FUNC_0(VAR_4, FUNC_1(sizeof(TransactionId),
            VAR_0));

 return VAR_4;
}
