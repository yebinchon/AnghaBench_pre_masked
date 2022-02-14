
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int narray; TYPE_2__** array; } ;
typedef TYPE_1__ filemap_t ;
struct TYPE_7__ {scalar_t__ bitmapsize; } ;
struct TYPE_6__ {scalar_t__ action; TYPE_4__ pagemap; int path; } ;
typedef TYPE_2__ file_entry_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_2 ;

void
FUNC_4(void)
{
 filemap_t *VAR_3 = VAR_1;
 file_entry_t *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->narray; VAR_5++)
 {
  VAR_4 = VAR_3->array[VAR_5];
  if (VAR_4->action != VAR_0 ||
   VAR_4->pagemap.bitmapsize > 0)
  {
   FUNC_3("%s (%s)", VAR_4->path,
       FUNC_0(VAR_4->action));

   if (VAR_4->pagemap.bitmapsize > 0)
    FUNC_1(&VAR_4->pagemap);
  }
 }
 FUNC_2(VAR_2);
}
