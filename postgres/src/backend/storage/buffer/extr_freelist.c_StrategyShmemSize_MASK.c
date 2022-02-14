
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int BufferStrategyControl ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;

Size
FUNC_3(void)
{
 Size VAR_2 = 0;


 VAR_2 = FUNC_2(VAR_2, FUNC_0(VAR_0 + VAR_1));


 VAR_2 = FUNC_2(VAR_2, FUNC_1(sizeof(BufferStrategyControl)));

 return VAR_2;
}
