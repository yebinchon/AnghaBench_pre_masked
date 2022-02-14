
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (void const*,int,int*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, int VAR_1,
     const char *VAR_2, int VAR_3)
{
 int VAR_4;
 const char *VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);

 return VAR_5 && (VAR_4 == VAR_3) && (FUNC_1(VAR_5, VAR_2, VAR_3) == 0);
}
