
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_5)
{
 size_t VAR_6;

 if (!VAR_5)
  return -VAR_3;

 VAR_6 = FUNC_0(VAR_5, "on");
 if (VAR_6) {
  VAR_4 = VAR_2;
  return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_5, "off");
 if (VAR_6) {
  VAR_4 = VAR_1;
  return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_5, "ratelimit");
 if (VAR_6) {
  VAR_4 = VAR_0;
  return VAR_6;
 }

 return -VAR_3;
}
