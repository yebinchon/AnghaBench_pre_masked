
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optioninfo {scalar_t__ type; int sopt; int lopt; } ;


 int FUNC_0 (char const* const**) ;
 int FUNC_1 (struct optioninfo const*,int,char const*,char const*) ;
 struct optioninfo* FUNC_2 (char const*) ;
 struct optioninfo* FUNC_3 (char const**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7(const char *VAR_2,
      const char *const **VAR_3,
      const char *VAR_4) {
  const struct optioninfo *VAR_5;
  const char *VAR_6;
  int VAR_7;

  if (VAR_2[0] == '-' || VAR_2[0] == '+') {
    if (VAR_2[0] == '-' && VAR_2[1] == '-') {
      if (!FUNC_5(VAR_2,"--no-",5)) {
 VAR_7= 1;
 VAR_5= FUNC_2(VAR_2+5);
      } else {
 VAR_7= 0;
 VAR_5= FUNC_2(VAR_2+2);
      }
      if (VAR_5->type == VAR_0) {
 VAR_2= VAR_3 ? *++(*VAR_3) : VAR_4;
 if (!VAR_2) FUNC_6("option --%s requires a value argument",VAR_5->lopt);
 VAR_6= 0;
      } else if (VAR_5->type == VAR_1) {
 FUNC_0(VAR_3);
 VAR_2= *++(*VAR_3);
 VAR_6= VAR_2 ? *++(*VAR_3) : 0;
 if (!VAR_2 || !VAR_6)
   FUNC_6("option --%s requires two more arguments", VAR_5->lopt);
      } else {
 if (VAR_4) FUNC_6("option --%s does not take a value",VAR_5->lopt);
 VAR_2= 0;
 VAR_6= 0;
      }
      FUNC_1(VAR_5,VAR_7,VAR_2,VAR_6);
    } else if (VAR_2[0] == '-' && VAR_2[1] == 0) {
      VAR_2= VAR_3 ? *++(*VAR_3) : VAR_4;
      if (!VAR_2) FUNC_6("option `-' must be followed by a domain");
      FUNC_4(VAR_2);
    } else {
      VAR_7= (VAR_2[0] == '+');
      ++VAR_2;
      while (*VAR_2) {
 VAR_5= FUNC_3(&VAR_2);
 if (VAR_5->type == VAR_0) {
   if (!*VAR_2) {
     VAR_2= VAR_3 ? *++(*VAR_3) : VAR_4;
     if (!VAR_2) FUNC_6("option -%s requires a value argument",VAR_5->sopt);
   } else {
     if (VAR_4) FUNC_6("two values for option -%s given !",VAR_5->sopt);
   }
   FUNC_1(VAR_5,VAR_7,VAR_2,0);
   VAR_2= "";
 } else {
   if (VAR_4) FUNC_6("option -%s does not take a value",VAR_5->sopt);
   FUNC_1(VAR_5,VAR_7,0,0);
 }
      }
    }
  } else {
    FUNC_4(VAR_2);
  }
}
