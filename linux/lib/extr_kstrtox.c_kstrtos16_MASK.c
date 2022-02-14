
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long s16 ;


 int VAR_0 ;
 int FUNC_0 (char const*,unsigned int,long long*) ;

int FUNC_1(const char *VAR_1, unsigned int VAR_2, s16 *VAR_3)
{
 long long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_4 != (s16)VAR_4)
  return -VAR_0;
 *VAR_3 = VAR_4;
 return 0;
}
