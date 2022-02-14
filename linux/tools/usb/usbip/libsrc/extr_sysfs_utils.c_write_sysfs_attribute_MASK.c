
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,char const*,size_t) ;

int FUNC_4(const char *VAR_1, const char *VAR_2,
     size_t VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (VAR_4 < 0) {
  FUNC_1("error opening attribute %s", VAR_1);
  return -1;
 }

 VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_3);
 if (VAR_5 < 0) {
  FUNC_1("error writing to attribute %s", VAR_1);
  FUNC_0(VAR_4);
  return -1;
 }

 FUNC_0(VAR_4);

 return 0;
}
