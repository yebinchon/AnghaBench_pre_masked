
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;} ;


 int FUNC_0 (struct mgmt_pending_cmd*,void*) ;
 int FUNC_1 (struct mgmt_pending_cmd*) ;
 int FUNC_2 (struct mgmt_pending_cmd*,int ) ;

__attribute__((used)) static void FUNC_3(struct mgmt_pending_cmd *VAR_0, void *VAR_1)
{
 if (VAR_0->cmd_complete) {
  u8 *VAR_2 = VAR_1;

  VAR_0->cmd_complete(VAR_0, *VAR_2);
  FUNC_1(VAR_0);

  return;
 }

 FUNC_0(VAR_0, VAR_1);
}
