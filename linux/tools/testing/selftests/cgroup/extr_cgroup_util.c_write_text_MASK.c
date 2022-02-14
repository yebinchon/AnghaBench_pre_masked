
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(const char *VAR_2, char *VAR_3, ssize_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1 | VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_2(VAR_5, VAR_3, VAR_4);
 if (VAR_4 < 0) {
  FUNC_0(VAR_5);
  return VAR_4;
 }

 FUNC_0(VAR_5);

 return VAR_4;
}
