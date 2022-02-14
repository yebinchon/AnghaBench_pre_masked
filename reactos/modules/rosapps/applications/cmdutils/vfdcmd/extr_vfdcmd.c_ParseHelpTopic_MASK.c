
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* keyword; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (char const*,char const*,size_t) ;
 int FUNC_2 (char*,...) ;
 size_t FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_5)
{
 size_t VAR_6;
 int VAR_7;
 int VAR_8;

 if (*VAR_5 == '\0') {



  return VAR_1;
 }


 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = 0;
 VAR_8 = VAR_1;

 while (VAR_2[VAR_7].keyword) {

  if (FUNC_3(VAR_2[VAR_7].keyword) >= VAR_6 &&
   !FUNC_1(VAR_5, VAR_2[VAR_7].keyword, VAR_6)) {

   if (VAR_8 == VAR_1) {
    VAR_8 = VAR_7;
   }
   else {
    if (VAR_8 != VAR_0) {
     FUNC_0(VAR_3, VAR_5);
     FUNC_2("> %s ", VAR_2[VAR_8].keyword);
     VAR_8 = VAR_0;
    }

    FUNC_2("%s ", VAR_2[VAR_7].keyword);
   }
  }

  VAR_7++;
 }

 if (VAR_8 == VAR_1) {
  FUNC_0(VAR_4, VAR_5);
 }
 else if (VAR_8 == VAR_0) {
  FUNC_2("\n");
 }

 return VAR_8;
}
