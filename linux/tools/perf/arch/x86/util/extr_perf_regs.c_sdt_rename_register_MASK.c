
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uprobe_name; int * sdt_name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(char *VAR_1, int VAR_2, char *VAR_3)
{
 int VAR_4 = 0;

 for (VAR_4 = 0; VAR_0[VAR_4].sdt_name != ((void*)0); VAR_4++) {
  if (!FUNC_1(VAR_0[VAR_4].sdt_name, VAR_1, VAR_2)) {
   FUNC_0(VAR_3, VAR_0[VAR_4].uprobe_name);
   return;
  }
 }

 FUNC_2(VAR_3, VAR_1, VAR_2);
}
