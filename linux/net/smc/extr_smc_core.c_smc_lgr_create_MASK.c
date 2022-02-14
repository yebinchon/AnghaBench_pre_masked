
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {struct smc_link_group* lgr; } ;
struct smc_sock {TYPE_3__ conn; scalar_t__ listen_smc; } ;
struct smc_link_group {int list; struct smc_link* lnk; int * peer_systemid; int role; int smcd; int peer_gid; int conns_all; int free_work; int id; int * rmbs; int * sndbufs; int conns_lock; int rmbs_lock; int sndbufs_lock; int vlan_id; scalar_t__ sync_err; scalar_t__ is_smcd; } ;
struct smc_link {size_t link_id; int ibport; int psn_initial; int sgid_index; int gid; TYPE_5__* smcibdev; int path_mtu; int state; } ;
struct smc_init_info {int ib_port; int vlan_id; int ism_dev; scalar_t__ is_smcd; TYPE_5__* ib_dev; TYPE_1__* ib_lcl; int ism_gid; } ;
typedef int rndvec ;
struct TYPE_11__ {int initialized; TYPE_2__* pattr; } ;
struct TYPE_10__ {int lock; int list; scalar_t__ num; } ;
struct TYPE_8__ {int active_mtu; } ;
struct TYPE_7__ {int* id_for_peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (struct smc_link_group*) ;
 struct smc_link_group* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct smc_link*) ;
 int FUNC_9 (struct smc_link*) ;
 int FUNC_10 (struct smc_link*) ;
 int FUNC_11 (struct smc_link*) ;
 int FUNC_12 (TYPE_5__*,int,int ,int ,int *) ;
 int FUNC_13 (TYPE_5__*) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int VAR_14 ;
 TYPE_4__ VAR_15 ;
 int FUNC_16 (struct smc_link*) ;
 int FUNC_17 (struct smc_link*) ;
 int FUNC_18 (struct smc_link*) ;
 int FUNC_19 (struct smc_link*) ;
 int FUNC_20 (struct smc_link*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct smc_sock *VAR_16, struct smc_init_info *VAR_17)
{
 struct smc_link_group *VAR_18;
 struct smc_link *VAR_19;
 u8 VAR_20[3];
 int VAR_21 = 0;
 int VAR_22;

 if (VAR_17->is_smcd && VAR_17->vlan_id) {
  if (FUNC_14(VAR_17->ism_dev, VAR_17->vlan_id)) {
   VAR_21 = VAR_4;
   goto out;
  }
 }

 VAR_18 = FUNC_4(sizeof(*VAR_18), VAR_1);
 if (!VAR_18) {
  VAR_21 = VAR_5;
  goto ism_put_vlan;
 }
 VAR_18->is_smcd = VAR_17->is_smcd;
 VAR_18->sync_err = 0;
 VAR_18->vlan_id = VAR_17->vlan_id;
 FUNC_7(&VAR_18->sndbufs_lock);
 FUNC_7(&VAR_18->rmbs_lock);
 FUNC_7(&VAR_18->conns_lock);
 for (VAR_22 = 0; VAR_22 < VAR_10; VAR_22++) {
  FUNC_1(&VAR_18->sndbufs[VAR_22]);
  FUNC_1(&VAR_18->rmbs[VAR_22]);
 }
 VAR_15.num += VAR_8;
 FUNC_6(&VAR_18->id, (u8 *)&VAR_15.num, VAR_7);
 FUNC_0(&VAR_18->free_work, VAR_14);
 VAR_18->conns_all = VAR_2;
 if (VAR_17->is_smcd) {

  VAR_18->peer_gid = VAR_17->ism_gid;
  VAR_18->smcd = VAR_17->ism_dev;
 } else {

  VAR_18->role = VAR_16->listen_smc ? VAR_11 : VAR_6;
  FUNC_6(VAR_18->peer_systemid, VAR_17->ib_lcl->id_for_peer,
         VAR_13);

  VAR_19 = &VAR_18->lnk[VAR_12];

  VAR_19->state = VAR_9;
  VAR_19->link_id = VAR_12;
  VAR_19->smcibdev = VAR_17->ib_dev;
  VAR_19->ibport = VAR_17->ib_port;
  VAR_19->path_mtu =
   VAR_17->ib_dev->pattr[VAR_17->ib_port - 1].active_mtu;
  if (!VAR_17->ib_dev->initialized)
   FUNC_13(VAR_17->ib_dev);
  FUNC_2(VAR_20, sizeof(VAR_20));
  VAR_19->psn_initial = VAR_20[0] + (VAR_20[1] << 8) +
   (VAR_20[2] << 16);
  VAR_21 = FUNC_12(VAR_19->smcibdev, VAR_19->ibport,
       VAR_17->vlan_id, VAR_19->gid,
       &VAR_19->sgid_index);
  if (VAR_21)
   goto free_lgr;
  VAR_21 = FUNC_17(VAR_19);
  if (VAR_21)
   goto free_lgr;
  VAR_21 = FUNC_18(VAR_19);
  if (VAR_21)
   goto clear_llc_lnk;
  VAR_21 = FUNC_8(VAR_19);
  if (VAR_21)
   goto free_link_mem;
  VAR_21 = FUNC_9(VAR_19);
  if (VAR_21)
   goto dealloc_pd;
  VAR_21 = FUNC_19(VAR_19);
  if (VAR_21)
   goto destroy_qp;
 }
 VAR_16->conn.lgr = VAR_18;
 FUNC_21(&VAR_15.lock);
 FUNC_5(&VAR_18->list, &VAR_15.list);
 FUNC_22(&VAR_15.lock);
 return 0;

destroy_qp:
 FUNC_11(VAR_19);
dealloc_pd:
 FUNC_10(VAR_19);
free_link_mem:
 FUNC_20(VAR_19);
clear_llc_lnk:
 FUNC_16(VAR_19);
free_lgr:
 FUNC_3(VAR_18);
ism_put_vlan:
 if (VAR_17->is_smcd && VAR_17->vlan_id)
  FUNC_15(VAR_17->ism_dev, VAR_17->vlan_id);
out:
 if (VAR_21 < 0) {
  if (VAR_21 == -VAR_0)
   VAR_21 = VAR_5;
  else
   VAR_21 = VAR_3;
 }
 return VAR_21;
}
