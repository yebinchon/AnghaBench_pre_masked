
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * freelist; } ;
struct TYPE_6__ {scalar_t__ npages; int next; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__ FreePageSpanLeader ;
typedef TYPE_2__ FreePageManager ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static Size
FUNC_3(FreePageManager *VAR_1)
{
 char *VAR_2;
 Size VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = 0;
 if (!FUNC_2(VAR_1->freelist[VAR_0 - 1]))
 {
  FreePageSpanLeader *VAR_4;

  VAR_4 = FUNC_1(VAR_2, VAR_1->freelist[VAR_0 - 1]);
  do
  {
   if (VAR_4->npages > VAR_3)
    VAR_3 = VAR_4->npages;
   VAR_4 = FUNC_1(VAR_2, VAR_4->next);
  } while (VAR_4 != ((void*)0));
 }
 else
 {
  Size VAR_5 = VAR_0 - 1;

  do
  {
   --VAR_5;
   if (!FUNC_2(VAR_1->freelist[VAR_5]))
   {
    VAR_3 = VAR_5 + 1;
    break;
   }
  } while (VAR_5 > 0);
 }

 return VAR_3;
}
