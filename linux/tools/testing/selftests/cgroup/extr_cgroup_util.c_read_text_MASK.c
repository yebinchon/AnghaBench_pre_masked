
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_3 - 1);
 if (VAR_4 < 0)
  goto out;

 VAR_2[VAR_4] = 0;
out:
 FUNC_0(VAR_5);
 return VAR_4;
}
