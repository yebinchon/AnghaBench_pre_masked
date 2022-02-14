
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct cdb_make {int numentries; int pos; struct cdb_hplist* head; } ;
struct cdb_hplist {size_t num; TYPE_1__* hp; struct cdb_hplist* next; } ;
struct TYPE_2__ {int p; int h; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct cdb_make*,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct cdb_make *VAR_1, unsigned int VAR_2, unsigned int VAR_3, uint32 VAR_4)
{
 struct cdb_hplist *VAR_5;

 VAR_5 = VAR_1->head;
 if (!VAR_5 || (VAR_5->num >= VAR_0)) {
  VAR_5 = (struct cdb_hplist *) FUNC_1(sizeof(struct cdb_hplist));
  if (!VAR_5)
   return -1;
  VAR_5->num = 0;
  VAR_5->next = VAR_1->head;
  VAR_1->head = VAR_5;
 }
 VAR_5->hp[VAR_5->num].h = VAR_4;
 VAR_5->hp[VAR_5->num].p = VAR_1->pos;
 ++VAR_5->num;
 ++VAR_1->numentries;
 if (FUNC_0(VAR_1,8) == -1)
  return -1;
 if (FUNC_0(VAR_1, VAR_2) == -1)
  return -1;
 if (FUNC_0(VAR_1, VAR_3) == -1)
  return -1;
 return 0;
}
