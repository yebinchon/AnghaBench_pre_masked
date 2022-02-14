
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ bound; int zv; } ;
struct TYPE_10__ {TYPE_1__* m; TYPE_2__* data; } ;
struct TYPE_9__ {unsigned int field_count; TYPE_5__* result_bind; int stmt_id; } ;
struct TYPE_8__ {int (* free_result_bind ) (TYPE_3__* const,TYPE_5__*) ;} ;
typedef TYPE_2__ MYSQLND_STMT_DATA ;
typedef TYPE_3__ MYSQLND_STMT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int,TYPE_5__*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__* const,TYPE_5__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(MYSQLND_STMT * const VAR_2)
{
 MYSQLND_STMT_DATA * VAR_3 = VAR_2? VAR_2->data : ((void*)0);
 unsigned int VAR_4;

 FUNC_0("mysqlnd_stmt_separate_result_bind");
 if (!VAR_3) {
  VAR_0;
 }
 FUNC_1("stmt=%lu result_bind=%p field_count=%u", VAR_3->stmt_id, VAR_3->result_bind, VAR_3->field_count);

 if (!VAR_3->result_bind) {
  VAR_0;
 }






 for (VAR_4 = 0; VAR_4 < VAR_3->field_count; VAR_4++) {

  if (VAR_3->result_bind[VAR_4].bound == VAR_1) {
   FUNC_1("%u has refcount=%u", VAR_4, FUNC_3(VAR_3->result_bind[VAR_4].zv)? FUNC_2(VAR_3->result_bind[VAR_4].zv) : 0);
   FUNC_5(&VAR_3->result_bind[VAR_4].zv);
  }
 }

 VAR_2->m->free_result_bind(VAR_2, VAR_3->result_bind);
 VAR_3->result_bind = ((void*)0);

 VAR_0;
}
