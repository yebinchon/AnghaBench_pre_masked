
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {int dummy; } ;
struct msi_desc {struct msi_msg msg; } ;



void FUNC_0(struct msi_desc *VAR_0, struct msi_msg *VAR_1)
{
 *VAR_1 = VAR_0->msg;
}
