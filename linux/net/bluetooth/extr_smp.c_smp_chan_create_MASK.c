
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_chan {int tfm_cmac; int security_timer; struct l2cap_conn* conn; int tfm_ecdh; } ;
struct l2cap_conn {int hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct smp_chan*,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct smp_chan* FUNC_8 (int,int ) ;
 int FUNC_9 (struct smp_chan*) ;
 int VAR_3 ;

__attribute__((used)) static struct smp_chan *FUNC_10(struct l2cap_conn *VAR_4)
{
 struct l2cap_chan *VAR_5 = VAR_4->smp;
 struct smp_chan *VAR_6;

 VAR_6 = FUNC_8(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->tfm_cmac = FUNC_5("cmac(aes)", 0, 0);
 if (FUNC_2(VAR_6->tfm_cmac)) {
  FUNC_0("Unable to create CMAC crypto context");
  goto zfree_smp;
 }

 VAR_6->tfm_ecdh = FUNC_4("ecdh", VAR_0, 0);
 if (FUNC_2(VAR_6->tfm_ecdh)) {
  FUNC_0("Unable to create ECDH crypto context");
  goto free_shash;
 }

 VAR_6->conn = VAR_4;
 VAR_5->data = VAR_6;

 FUNC_3(VAR_6, VAR_2);

 FUNC_1(&VAR_6->security_timer, VAR_3);

 FUNC_7(VAR_4->hcon);

 return VAR_6;

free_shash:
 FUNC_6(VAR_6->tfm_cmac);
zfree_smp:
 FUNC_9(VAR_6);
 return ((void*)0);
}
