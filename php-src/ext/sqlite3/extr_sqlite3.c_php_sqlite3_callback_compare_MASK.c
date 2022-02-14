
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int size; int param_count; int * params; int * retval; int * object; int function_name; } ;
struct TYPE_4__ {int fcc; TYPE_3__ fci; } ;
struct TYPE_5__ {TYPE_1__ fci; int cmp_func; } ;
typedef TYPE_2__ php_sqlite3_collation ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,void const*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void *VAR_4, int VAR_5, const void *VAR_6, int VAR_7, const void* VAR_8)
{
 php_sqlite3_collation *VAR_9 = (php_sqlite3_collation*)VAR_4;
 zval VAR_10[2];
 zval VAR_11;
 int VAR_12;


 if (FUNC_0(VAR_3)) {
  return 0;
 }

 VAR_9->fci.fci.size = (sizeof(VAR_9->fci.fci));
 FUNC_1(&VAR_9->fci.fci.function_name, &VAR_9->cmp_func);
 VAR_9->fci.fci.object = ((void*)0);
 VAR_9->fci.fci.retval = &VAR_11;
 VAR_9->fci.fci.param_count = 2;

 FUNC_2(&VAR_10[0], VAR_6, VAR_5);
 FUNC_2(&VAR_10[1], VAR_8, VAR_7);

 VAR_9->fci.fci.params = VAR_10;

 if ((VAR_12 = FUNC_6(&VAR_9->fci.fci, &VAR_9->fci.fcc)) == VAR_1) {
  FUNC_5(((void*)0), VAR_0, "An error occurred while invoking the compare callback");
 }

 FUNC_7(&VAR_10[0]);
 FUNC_7(&VAR_10[1]);

 if (FUNC_0(VAR_3)) {
  VAR_12 = 0;
 } else if (FUNC_4(VAR_11) != VAR_2){



  FUNC_5(((void*)0), VAR_0, "An error occurred while invoking the compare callback (invalid return type).  Collation behaviour is undefined.");
 } else {
  VAR_12 = FUNC_3(VAR_11);
 }

 FUNC_7(&VAR_11);

 return VAR_12;
}
