
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char**,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;

__attribute__((used)) static inline int FUNC_4(const char **VAR_2, unsigned *VAR_3)
{
 zend_long VAR_4;
 int VAR_5 = (**VAR_2 == 'x' || **VAR_2 == 'X');
 char *VAR_6;

 if (VAR_5 && (**VAR_2 != '\0'))
  (*VAR_2)++;



 if ((VAR_5 && !FUNC_3(**VAR_2)) ||
   (!VAR_5 && !FUNC_2(**VAR_2))) {
  return VAR_0;
 }

 VAR_4 = FUNC_0(*VAR_2, &VAR_6, VAR_5 ? 16 : 10);

 *VAR_2 = VAR_6;

 if (**VAR_2 != ';')
  return VAR_0;



 if (VAR_4 > FUNC_1(0x10FFFF))
  return VAR_0;

 if (VAR_3 != ((void*)0))
  *VAR_3 = (unsigned)VAR_4;

 return VAR_1;
}
