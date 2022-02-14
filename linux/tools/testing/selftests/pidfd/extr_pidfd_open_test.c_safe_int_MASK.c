
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 long FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_7, int *VAR_8)
{
 char *VAR_9 = ((void*)0);
 long VAR_10;

 VAR_6 = 0;
 VAR_10 = FUNC_0(VAR_7, &VAR_9, 0);
 if (VAR_6 == VAR_1 && (VAR_10 == VAR_4 || VAR_10 == VAR_5))
  return -VAR_1;

 if (VAR_6 != 0 && VAR_10 == 0)
  return -VAR_0;

 if (VAR_9 == VAR_7 || *VAR_9 != '\0')
  return -VAR_0;

 if (VAR_10 > VAR_2 || VAR_10 < VAR_3)
  return -VAR_1;

 *VAR_8 = (int)VAR_10;
 return 0;
}
