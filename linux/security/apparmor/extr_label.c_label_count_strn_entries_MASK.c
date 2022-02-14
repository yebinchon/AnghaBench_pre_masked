
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, size_t VAR_1)
{
 const char *VAR_2 = VAR_0 + VAR_1;
 const char *VAR_3;
 int VAR_4 = 1;

 FUNC_0(!VAR_0);

 for (VAR_3 = FUNC_1(VAR_0, VAR_2 - VAR_0);
      VAR_3;
      VAR_3 = FUNC_1(VAR_0, VAR_2 - VAR_0)) {
  VAR_4++;
  VAR_0 = VAR_3 + 3;
 }

 return VAR_4;
}
