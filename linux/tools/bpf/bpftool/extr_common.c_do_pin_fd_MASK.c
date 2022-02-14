
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(int VAR_1, const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_2("can't pin the object (%s): %s", VAR_2, FUNC_3(VAR_0));

 return VAR_3;
}
