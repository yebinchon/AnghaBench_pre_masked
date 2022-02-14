
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_dev {int tfm_ecdh; int tfm_cmac; } ;
struct l2cap_chan {struct smp_dev* data; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct smp_dev*) ;
 int FUNC_4 (struct l2cap_chan*) ;

__attribute__((used)) static void FUNC_5(struct l2cap_chan *VAR_0)
{
 struct smp_dev *VAR_1;

 FUNC_0("chan %p", VAR_0);

 VAR_1 = VAR_0->data;
 if (VAR_1) {
  VAR_0->data = ((void*)0);
  FUNC_2(VAR_1->tfm_cmac);
  FUNC_1(VAR_1->tfm_ecdh);
  FUNC_3(VAR_1);
 }

 FUNC_4(VAR_0);
}
