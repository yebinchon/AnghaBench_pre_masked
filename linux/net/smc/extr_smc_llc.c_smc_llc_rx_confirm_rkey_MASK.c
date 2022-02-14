
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct smc_llc_msg_confirm_rkey {TYPE_2__ hd; TYPE_1__* rtoken; } ;
struct smc_link {int llc_confirm_rkey_rc; int llc_confirm_rkey; } ;
struct TYPE_3__ {int rmb_key; int rmb_vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct smc_link*) ;
 int FUNC_2 (struct smc_link*,struct smc_llc_msg_confirm_rkey*,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct smc_link *VAR_2,
        struct smc_llc_msg_confirm_rkey *VAR_3)
{
 int VAR_4;

 if (VAR_3->hd.flags & VAR_0) {
  VAR_2->llc_confirm_rkey_rc = VAR_3->hd.flags &
         VAR_1;
  FUNC_0(&VAR_2->llc_confirm_rkey);
 } else {
  VAR_4 = FUNC_3(FUNC_1(VAR_2),
        VAR_3->rtoken[0].rmb_vaddr,
        VAR_3->rtoken[0].rmb_key);



  VAR_3->hd.flags |= VAR_0;
  if (VAR_4 < 0)
   VAR_3->hd.flags |= VAR_1;
  FUNC_2(VAR_2, VAR_3, sizeof(*VAR_3));
 }
}
