
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,void*,unsigned long) ;
 void* FUNC_1 (void const*,unsigned long,unsigned long,void*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unsigned long FUNC_3(void *VAR_0, const void *VAR_1,
      unsigned long VAR_2, unsigned long VAR_3)
{
 void *VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0);

 if (FUNC_2(!VAR_4))
  return VAR_3;
 if (VAR_4 != VAR_0)
  FUNC_0(VAR_0, VAR_4, VAR_3);

 return 0;
}
