
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nlist; int narray; int * last; TYPE_2__* first; TYPE_2__** array; } ;
typedef TYPE_1__ filemap_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ file_entry_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__**,int) ;

__attribute__((used)) static void
FUNC_2(filemap_t *VAR_0)
{
 int VAR_1;
 file_entry_t *VAR_2,
      *VAR_3;

 VAR_0->array = (file_entry_t **)
  FUNC_1(VAR_0->array,
       (VAR_0->nlist + VAR_0->narray) * sizeof(file_entry_t *));

 VAR_1 = VAR_0->narray;
 for (VAR_2 = VAR_0->first; VAR_2 != ((void*)0); VAR_2 = VAR_3)
 {
  VAR_0->array[VAR_1++] = VAR_2;
  VAR_3 = VAR_2->next;
  VAR_2->next = ((void*)0);
 }
 FUNC_0(VAR_1 == VAR_0->nlist + VAR_0->narray);
 VAR_0->narray = VAR_1;
 VAR_0->nlist = 0;
 VAR_0->first = VAR_0->last = ((void*)0);
}
