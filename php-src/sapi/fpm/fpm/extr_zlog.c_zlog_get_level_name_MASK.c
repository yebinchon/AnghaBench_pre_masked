
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const** VAR_2 ;
 int VAR_3 ;

const char *FUNC_0(int VAR_4)
{
 if (VAR_4 < 0) {
  VAR_4 = VAR_3;
 } else if (VAR_4 < VAR_1 || VAR_4 > VAR_0) {
  return "unknown value";
 }

 return VAR_2[VAR_4];
}
