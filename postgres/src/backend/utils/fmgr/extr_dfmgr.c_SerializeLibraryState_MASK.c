
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filename; struct TYPE_3__* next; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__ DynamicFileList ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (char*,int ,scalar_t__) ;

void
FUNC_2(Size VAR_1, char *VAR_2)
{
 DynamicFileList *VAR_3;

 for (VAR_3 = VAR_0;
   VAR_3 != ((void*)0);
   VAR_3 = VAR_3->next)
 {
  Size VAR_4;

  VAR_4 = FUNC_1(VAR_2, VAR_3->filename, VAR_1) + 1;
  FUNC_0(VAR_4 < VAR_1);
  VAR_1 -= VAR_4;
  VAR_2 += VAR_4;
 }
 VAR_2[0] = '\0';
}
