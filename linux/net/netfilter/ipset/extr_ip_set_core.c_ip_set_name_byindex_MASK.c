
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip_set {int name; } ;
typedef int ip_set_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ip_set* FUNC_1 (struct net*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ) ;

void
FUNC_5(struct net *VAR_2, ip_set_id_t VAR_3, char *VAR_4)
{
 struct ip_set *VAR_5 = FUNC_1(VAR_2, VAR_3);

 FUNC_0(!VAR_5);

 FUNC_2(&VAR_1);
 FUNC_4(VAR_4, VAR_5->name, VAR_0);
 FUNC_3(&VAR_1);
}
