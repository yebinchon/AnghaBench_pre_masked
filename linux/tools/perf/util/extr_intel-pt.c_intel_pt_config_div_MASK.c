
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 long FUNC_1 (char const*,int *,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 int *VAR_4 = VAR_3;
 long VAR_5;

 if (!FUNC_0(VAR_1, "intel-pt.cache-divisor")) {
  VAR_5 = FUNC_1(VAR_2, ((void*)0), 0);
  if (VAR_5 > 0 && VAR_5 <= VAR_0)
   *VAR_4 = VAR_5;
 }

 return 0;
}
