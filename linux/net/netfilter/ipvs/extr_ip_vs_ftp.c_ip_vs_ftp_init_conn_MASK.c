
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn {int flags; } ;
struct ip_vs_app {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct ip_vs_app *VAR_1, struct ip_vs_conn *VAR_2)
{

 VAR_2->flags |= VAR_0;
 return 0;
}
