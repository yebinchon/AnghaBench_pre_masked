
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filename; struct TYPE_3__* next; } ;
typedef int Size ;
typedef TYPE_1__ DynamicFileList ;


 int FUNC_0 (int,scalar_t__) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

Size
FUNC_2(void)
{
 DynamicFileList *VAR_1;
 Size VAR_2 = 1;

 for (VAR_1 = VAR_0;
   VAR_1 != ((void*)0);
   VAR_1 = VAR_1->next)
  VAR_2 = FUNC_0(VAR_2, FUNC_1(VAR_1->filename) + 1);

 return VAR_2;
}
