
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void const*,scalar_t__*) ;

int FUNC_1(const void *VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_4 == VAR_1)
  return -VAR_0;

 if (VAR_3)
  *VAR_3 = VAR_4 + 1;

 return 0;
}
