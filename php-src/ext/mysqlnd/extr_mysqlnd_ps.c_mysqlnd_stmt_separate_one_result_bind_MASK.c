
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bound; int zv; } ;
struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {TYPE_4__* result_bind; int field_count; int stmt_id; } ;
typedef TYPE_1__ MYSQLND_STMT_DATA ;
typedef TYPE_2__ MYSQLND_STMT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int const,TYPE_4__*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(MYSQLND_STMT * const VAR_2, const unsigned int VAR_3)
{
 MYSQLND_STMT_DATA * VAR_4 = VAR_2? VAR_2->data : ((void*)0);
 FUNC_0("mysqlnd_stmt_separate_one_result_bind");
 if (!VAR_4) {
  VAR_0;
 }
 FUNC_1("stmt=%lu result_bind=%p field_count=%u param_no=%u", VAR_4->stmt_id, VAR_4->result_bind, VAR_4->field_count, VAR_3);

 if (!VAR_4->result_bind) {
  VAR_0;
 }







 if (VAR_4->result_bind[VAR_3].bound == VAR_1) {
  FUNC_1("%u has refcount=%u", VAR_3, FUNC_3(VAR_4->result_bind[VAR_3].zv)? FUNC_2(VAR_4->result_bind[VAR_3].zv) : 0);
  FUNC_4(&VAR_4->result_bind[VAR_3].zv);
 }

 VAR_0;
}
