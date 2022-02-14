
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fdt32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 int * FUNC_1 (void const*,int,char const*,int*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_2, int VAR_3, const char *VAR_4)
{
 const fdt32_t *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_7);
 if (!VAR_5)
  return VAR_7;

 if (VAR_7 != sizeof(*VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_0(*VAR_5);
 if ((VAR_6 <= 0) || (VAR_6 > VAR_1))
  return -VAR_0;

 return VAR_6;
}
