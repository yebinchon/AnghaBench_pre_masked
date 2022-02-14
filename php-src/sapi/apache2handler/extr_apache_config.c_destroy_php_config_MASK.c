
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
typedef TYPE_1__ php_conf_rec ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static apr_status_t FUNC_2(void *VAR_2)
{
 php_conf_rec *VAR_3 = VAR_2;

 FUNC_0((VAR_1, "Destroying config %p\n", VAR_2));
 FUNC_1(&VAR_3->config);

 return VAR_0;
}
