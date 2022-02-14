
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct nfulnl_instance {int use; } ;
struct nfnl_log_net {int dummy; } ;


 struct nfulnl_instance* FUNC_0 (struct nfnl_log_net*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct nfulnl_instance *
FUNC_4(struct nfnl_log_net *VAR_0, u_int16_t VAR_1)
{
 struct nfulnl_instance *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 && !FUNC_3(&VAR_2->use))
  VAR_2 = ((void*)0);
 FUNC_2();

 return VAR_2;
}
