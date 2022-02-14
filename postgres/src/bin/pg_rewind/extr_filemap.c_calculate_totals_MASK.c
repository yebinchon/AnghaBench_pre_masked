
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int narray; scalar_t__ fetch_size; scalar_t__ total_size; TYPE_2__** array; } ;
typedef TYPE_1__ filemap_t ;
struct TYPE_7__ {scalar_t__ bitmapsize; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ action; TYPE_4__ pagemap; scalar_t__ oldsize; scalar_t__ newsize; } ;
typedef TYPE_2__ file_entry_t ;
typedef int datapagemap_iterator_t ;
typedef int BlockNumber ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int *) ;

void
FUNC_3(void)
{
 file_entry_t *VAR_5;
 int VAR_6;
 filemap_t *VAR_7 = VAR_4;

 VAR_7->total_size = 0;
 VAR_7->fetch_size = 0;

 for (VAR_6 = 0; VAR_6 < VAR_7->narray; VAR_6++)
 {
  VAR_5 = VAR_7->array[VAR_6];

  if (VAR_5->type != VAR_3)
   continue;

  VAR_7->total_size += VAR_5->newsize;

  if (VAR_5->action == VAR_1)
  {
   VAR_7->fetch_size += VAR_5->newsize;
   continue;
  }

  if (VAR_5->action == VAR_2)
   VAR_7->fetch_size += (VAR_5->newsize - VAR_5->oldsize);

  if (VAR_5->pagemap.bitmapsize > 0)
  {
   datapagemap_iterator_t *VAR_8;
   BlockNumber VAR_9;

   VAR_8 = FUNC_0(&VAR_5->pagemap);
   while (FUNC_1(VAR_8, &VAR_9))
    VAR_7->fetch_size += VAR_0;

   FUNC_2(VAR_8);
  }
 }
}
