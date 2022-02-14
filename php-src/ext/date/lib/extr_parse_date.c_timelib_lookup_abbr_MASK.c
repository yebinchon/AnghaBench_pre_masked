
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gmtoffset; int type; } ;
typedef TYPE_1__ timelib_tz_lookup_table ;
typedef int timelib_long ;


 TYPE_1__* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (int,int) ;

__attribute__((used)) static timelib_long FUNC_3(char **VAR_0, int *VAR_1, char **VAR_2, int *VAR_3)
{
 char *VAR_4;
 char *VAR_5 = *VAR_0, *VAR_6;
 timelib_long VAR_7 = 0;
 const timelib_tz_lookup_table *VAR_8;

 while (**VAR_0 != '\0' && **VAR_0 != ')' && **VAR_0 != ' ') {
  ++*VAR_0;
 }
 VAR_6 = *VAR_0;
 VAR_4 = FUNC_2(1, VAR_6 - VAR_5 + 1);
 FUNC_1(VAR_4, VAR_5, VAR_6 - VAR_5);

 if ((VAR_8 = FUNC_0(VAR_4, -1, 0))) {
  VAR_7 = VAR_8->gmtoffset;
  *VAR_1 = VAR_8->type;
  VAR_7 -= VAR_8->type * 3600;
  *VAR_3 = 1;
 } else {
  *VAR_3 = 0;
 }

 *VAR_2 = VAR_4;
 return VAR_7;
}
