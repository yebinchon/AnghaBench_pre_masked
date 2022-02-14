
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sugov_tunables {int attr_set; } ;
struct sugov_policy {int tunables_hook; } ;


 int VAR_0 ;
 struct sugov_tunables* VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 struct sugov_tunables* FUNC_2 (int,int ) ;

__attribute__((used)) static struct sugov_tunables *FUNC_3(struct sugov_policy *VAR_2)
{
 struct sugov_tunables *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_3->attr_set, &VAR_2->tunables_hook);
  if (!FUNC_1())
   VAR_1 = VAR_3;
 }
 return VAR_3;
}
