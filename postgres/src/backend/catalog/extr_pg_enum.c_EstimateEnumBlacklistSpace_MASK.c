
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int Oid ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;

Size
FUNC_1(void)
{
 size_t VAR_1;

 if (VAR_0)
  VAR_1 = FUNC_0(VAR_0);
 else
  VAR_1 = 0;


 return sizeof(Oid) * (VAR_1 + 1);
}
