
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 double FUNC_2 (char const*,char**) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_5, char **VAR_6, int *VAR_7, double *VAR_8)
{
 double VAR_9;

 if (!(FUNC_1((unsigned char) *VAR_5) || *VAR_5 == '-' || *VAR_5 == '.'))
  return VAR_0;
 VAR_4 = 0;
 VAR_9 = FUNC_2(VAR_5, VAR_6);

 if (*VAR_6 == VAR_5 || VAR_4 != 0)
  return VAR_0;

 if (VAR_9 < VAR_3 || VAR_9 > VAR_2)
  return VAR_1;

 if (VAR_9 >= 0)
  *VAR_7 = (int) FUNC_0(VAR_9);
 else
  *VAR_7 = (int) -FUNC_0(-VAR_9);
 *VAR_8 = VAR_9 - *VAR_7;
 return 0;
}
