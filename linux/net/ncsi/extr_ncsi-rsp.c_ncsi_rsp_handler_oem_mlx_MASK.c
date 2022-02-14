
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncsi_rsp_oem_pkt {scalar_t__ data; } ;
struct ncsi_rsp_oem_mlx_pkt {scalar_t__ cmd; scalar_t__ param; } ;
struct ncsi_request {int rsp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ncsi_request*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ncsi_request *VAR_2)
{
 struct ncsi_rsp_oem_mlx_pkt *VAR_3;
 struct ncsi_rsp_oem_pkt *VAR_4;


 VAR_4 = (struct ncsi_rsp_oem_pkt *)FUNC_1(VAR_2->rsp);
 VAR_3 = (struct ncsi_rsp_oem_mlx_pkt *)(VAR_4->data);

 if (VAR_3->cmd == VAR_0 &&
     VAR_3->param == VAR_1)
  return FUNC_0(VAR_2);
 return 0;
}
