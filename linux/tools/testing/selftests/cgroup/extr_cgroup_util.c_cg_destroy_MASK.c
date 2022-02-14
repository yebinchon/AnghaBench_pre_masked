
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int) ;

int FUNC_3(const char *VAR_3)
{
 int VAR_4;

retry:
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 && VAR_2 == VAR_0) {
  FUNC_0(VAR_3);
  FUNC_2(100);
  goto retry;
 }

 if (VAR_4 && VAR_2 == VAR_1)
  VAR_4 = 0;

 return VAR_4;
}
