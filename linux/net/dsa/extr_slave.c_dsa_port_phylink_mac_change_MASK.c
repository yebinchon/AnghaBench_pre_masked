
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dummy; } ;
struct dsa_port {int pl; } ;


 struct dsa_port* FUNC_0 (struct dsa_switch*,int) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct dsa_switch *VAR_0, int VAR_1, bool VAR_2)
{
 const struct dsa_port *VAR_3 = FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_3->pl, VAR_2);
}
