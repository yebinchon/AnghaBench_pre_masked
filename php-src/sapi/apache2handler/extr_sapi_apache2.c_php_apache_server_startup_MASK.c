
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* process; } ;
typedef TYPE_2__ server_rec ;
typedef int apr_pool_t ;
struct TYPE_9__ {scalar_t__ (* startup ) (TYPE_3__*) ;scalar_t__ php_ini_path_override; } ;
struct TYPE_7__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (void**,char const*,int ) ;
 int FUNC_3 (void const*,char const*,int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(apr_pool_t *VAR_7, apr_pool_t *VAR_8, apr_pool_t *VAR_9, server_rec *VAR_10)
{
 void *VAR_11 = ((void*)0);
 const char *VAR_12 = "apache2hook_post_config";



 FUNC_2(&VAR_11, VAR_12, VAR_10->process->pool);
 if (VAR_11 == ((void*)0)) {





  FUNC_3((const void *)1, VAR_12, VAR_5, VAR_10->process->pool);
  return VAR_1;
 }


 if (VAR_3) {
  VAR_4.php_ini_path_override = VAR_3;
 }







 FUNC_8();

 FUNC_6(&VAR_4);
 if (VAR_4.startup(&VAR_4) != VAR_2) {
  return VAR_0;
 }
 FUNC_1(VAR_7, ((void*)0), VAR_6, VAR_5);
 FUNC_4(VAR_7);

 return VAR_1;
}
