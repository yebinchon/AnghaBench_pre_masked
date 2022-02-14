
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {int size; int param_count; int * params; int * retval; int * object; int function_name; } ;
struct TYPE_3__ {int fcc; TYPE_2__ fci; } ;
struct pdo_sqlite_collation {TYPE_1__ fc; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void *VAR_3,
 int VAR_4, const void *VAR_5,
 int VAR_6, const void *VAR_7)
{
 int VAR_8;
 zval VAR_9[2];
 zval VAR_10;
 struct pdo_sqlite_collation *VAR_11 = (struct pdo_sqlite_collation*) VAR_3;

 VAR_11->fc.fci.size = sizeof(VAR_11->fc.fci);
 FUNC_0(&VAR_11->fc.fci.function_name, &VAR_11->callback);
 VAR_11->fc.fci.object = ((void*)0);
 VAR_11->fc.fci.retval = &VAR_10;


 FUNC_1(&VAR_9[0], (char *) VAR_5, VAR_4);
 FUNC_1(&VAR_9[1], (char *) VAR_7, VAR_6);
 VAR_11->fc.fci.param_count = 2;
 VAR_11->fc.fci.params = VAR_9;

 if ((VAR_8 = FUNC_7(&VAR_11->fc.fci, &VAR_11->fc.fcc)) == VAR_1) {
  FUNC_6(((void*)0), VAR_0, "An error occurred while invoking the callback");
 } else if (!FUNC_2(VAR_10)) {
  if (FUNC_4(VAR_10) != VAR_2) {
   FUNC_5(&VAR_10);
  }
  VAR_8 = 0;
  if (FUNC_3(VAR_10) > 0) {
   VAR_8 = 1;
  } else if (FUNC_3(VAR_10) < 0) {
   VAR_8 = -1;
  }
  FUNC_8(&VAR_10);
 }

 FUNC_8(&VAR_9[0]);
 FUNC_8(&VAR_9[1]);

 return VAR_8;
}
