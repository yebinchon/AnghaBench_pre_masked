
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_protocol {int (* app_conn_bind ) (struct ip_vs_conn*) ;} ;
struct ip_vs_conn {int dummy; } ;


 int FUNC_0 (struct ip_vs_conn*) ;

int FUNC_1(struct ip_vs_conn *VAR_0,
     struct ip_vs_protocol *VAR_1)
{
 return VAR_1->app_conn_bind(VAR_0);
}
