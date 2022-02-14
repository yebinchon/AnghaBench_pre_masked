
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef TYPE_1__ php_conf_rec ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int *,int ,int) ;

void *FUNC_4(apr_pool_t *VAR_4, char *VAR_5)
{
 php_conf_rec *VAR_6 = (php_conf_rec *) FUNC_0(VAR_4, sizeof(*VAR_6));

 FUNC_2((VAR_3, "Creating new config (%p) for %s\n", VAR_6, VAR_5));
 FUNC_3(&VAR_6->config, 0, ((void*)0), VAR_1, 1);
 FUNC_1(VAR_4, VAR_6, VAR_2, VAR_0);
 return (void *) VAR_6;
}
