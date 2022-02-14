
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int narray; TYPE_2__** array; } ;
typedef TYPE_1__ filemap_t ;
struct TYPE_7__ {int action; int newsize; int oldsize; int path; int pagemap; } ;
typedef TYPE_2__ file_entry_t ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(filemap_t *VAR_0)
{
 file_entry_t *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->narray; VAR_2++)
 {
  VAR_1 = VAR_0->array[VAR_2];
  FUNC_2(&VAR_1->pagemap, VAR_1->path);

  switch (VAR_1->action)
  {
   case 130:

    break;

   case 133:
    FUNC_4(VAR_1->path, 0, VAR_1->newsize, 1);
    break;

   case 128:
    FUNC_5(VAR_1->path, VAR_1->newsize);
    break;

   case 132:
    FUNC_4(VAR_1->path, VAR_1->oldsize,
            VAR_1->newsize, 0);
    break;

   case 131:
    FUNC_1(VAR_1);
    break;

   case 129:
    FUNC_3(VAR_1);
    break;
  }
 }

 FUNC_0();
}
