
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpoa_client {int mps_ctrl_addr; } ;
struct k_message {int MPS_ctrl; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (struct k_message*,struct mpoa_client*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2, struct mpoa_client *VAR_3)
{
 struct k_message VAR_4;

 FUNC_0(VAR_3->mps_ctrl_addr, VAR_2, VAR_0);

 VAR_4.type = VAR_1;
 FUNC_0(VAR_4.MPS_ctrl, VAR_2, VAR_0);
 FUNC_1(&VAR_4, VAR_3);
}
