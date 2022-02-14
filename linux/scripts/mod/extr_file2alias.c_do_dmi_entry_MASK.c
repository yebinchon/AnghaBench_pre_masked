
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ field; char* prefix; } ;
struct TYPE_5__ {scalar_t__ slot; int substr; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (void*,int ,TYPE_1__**) ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3, void *VAR_4,
   char *VAR_5)
{
 int VAR_6, VAR_7;
 FUNC_1(VAR_4, VAR_1, VAR_2);
 FUNC_3(VAR_5, "dmi*");

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   if ((*VAR_2)[VAR_7].slot &&
       (*VAR_2)[VAR_7].slot == VAR_0[VAR_6].field) {
    FUNC_3(VAR_5 + FUNC_5(VAR_5), ":%s*",
     VAR_0[VAR_6].prefix);
    FUNC_2(VAR_5 + FUNC_5(VAR_5),
       (*VAR_2)[VAR_7].substr);
    FUNC_4(VAR_5, "*");
   }
  }
 }

 FUNC_4(VAR_5, ":");
 return 1;
}
