
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;

double
FUNC_0(const double VAR_4, const char **VAR_5, double *const VAR_6)
{
 double VAR_7, VAR_8;
 const char *VAR_9;






 if (VAR_4 > (999.5 * VAR_0)) {
  VAR_9 = "TB";
  VAR_7 = VAR_3;
 } else if (VAR_4 > (999.5 * VAR_2)) {
  VAR_9 = "GB";
  VAR_7 = VAR_0;
 } else if (VAR_4 > (999.5 * VAR_1)) {
  VAR_9 = "MB";
  VAR_7 = VAR_2;
 } else if (VAR_4 > 999.5) {
  VAR_9 = "kB";
  VAR_7 = 1024;
 } else {
  VAR_9 = "B";
  VAR_7 = 1;
 }
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_9;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_7;
 VAR_8 = VAR_4 / ((double) VAR_7);
 if (VAR_8 < 0.0)
  VAR_8 = 0.0;
 return (VAR_8);
}
