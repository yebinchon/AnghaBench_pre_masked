
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ value_len; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
struct TYPE_10__ {int fd; TYPE_3__ tmpkv; int dir; int ndump; int ht; int ns; int path; int name; scalar_t__ refs; scalar_t__ lock; int db; } ;
typedef TYPE_2__ Sdb ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_12(Sdb* VAR_0, int VAR_1) {
 if (!VAR_0) {
  return;
 }
 FUNC_5 (VAR_0);
 FUNC_0 (&VAR_0->db);
 if (VAR_0->lock) {
  FUNC_10 (FUNC_8 (VAR_0->dir));
 }
 FUNC_9 (VAR_0);
 VAR_0->refs = 0;
 FUNC_2 (VAR_0->name);
 FUNC_2 (VAR_0->path);
 FUNC_3 (VAR_0->ns);
 FUNC_6 (VAR_0->ht);
 FUNC_7 (VAR_0);
 if (VAR_0->fd != -1) {
  FUNC_1 (VAR_0->fd);
  VAR_0->fd = -1;
 }
 FUNC_2 (VAR_0->ndump);
 FUNC_2 (VAR_0->dir);
 FUNC_2 (FUNC_11 (&VAR_0->tmpkv));
 VAR_0->tmpkv.base.value_len = 0;
 if (VAR_1) {
  FUNC_4 (VAR_0, 0, sizeof (Sdb));
 }
}
