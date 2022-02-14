
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sqlerrstate; int * label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const,char const,char const,char const,char const) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*) ;

int
FUNC_7(const char *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_4)
 {
  if (FUNC_5(VAR_3) == 5 &&
   FUNC_6(VAR_3, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 5)
   return FUNC_0(VAR_3[0],
         VAR_3[1],
         VAR_3[2],
         VAR_3[3],
         VAR_3[4]);
 }

 for (VAR_5 = 0; VAR_2[VAR_5].label != ((void*)0); VAR_5++)
 {
  if (FUNC_4(VAR_3, VAR_2[VAR_5].label) == 0)
   return VAR_2[VAR_5].sqlerrstate;
 }

 FUNC_1(VAR_1,
   (FUNC_2(VAR_0),
    FUNC_3("unrecognized exception condition \"%s\"",
     VAR_3)));
 return 0;
}
