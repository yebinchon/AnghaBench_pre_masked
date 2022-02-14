
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char) ;
 int FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, const char **VAR_2, int *VAR_3,
         char *VAR_4, int VAR_5) {
  int VAR_6;
  char *VAR_7;

  VAR_6= FUNC_3(VAR_1,&VAR_7,0);
  if (*VAR_7 == ',' && FUNC_2(VAR_7,'/')) {
    VAR_7++;
    while (*VAR_7 != '/') {
      if (--VAR_5 <= 0) { FUNC_0("too many flags\n",VAR_0); FUNC_1(3); }
      *VAR_4++= *VAR_7++;
    }
  }
  if (*VAR_7 != '/') { *VAR_2= VAR_1; *VAR_3= 0; }
  else { *VAR_2= VAR_7+1; *VAR_3= VAR_6; }
  *VAR_4= 0;
}
