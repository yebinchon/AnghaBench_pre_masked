
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct sta_info {TYPE_2__* mesh; int * tx_filtered; int * ps_tx_buf; TYPE_1__ sta; int sdata; } ;
struct ieee802_11_elems {int * awake_window; int tim_len; int tim; } ;
struct TYPE_4__ {scalar_t__ plink_state; int aid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct sta_info*,int) ;
 int FUNC_4 (struct sta_info*,int,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct sta_info*,int ) ;

void FUNC_7(struct sta_info *VAR_4,
     struct ieee802_11_elems *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 bool VAR_8 = 0;

 if (VAR_4->mesh->plink_state == VAR_1)
  VAR_8 = FUNC_0(VAR_5->tim, VAR_5->tim_len,
         VAR_4->mesh->aid);

 if (VAR_8)
  FUNC_2(VAR_4->sdata, "%pM indicates buffered frames\n",
   VAR_4->sta.addr);


 if (FUNC_6(VAR_4, VAR_3) &&
     (!VAR_5->awake_window || !FUNC_1(*VAR_5->awake_window)))
  return;

 if (!FUNC_6(VAR_4, VAR_2))
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   VAR_7 += FUNC_5(&VAR_4->ps_tx_buf[VAR_6]) +
     FUNC_5(&VAR_4->tx_filtered[VAR_6]);

 if (!VAR_8 && !VAR_7)
  return;

 if (VAR_4->mesh->plink_state == VAR_1)
  FUNC_4(VAR_4, VAR_8, !VAR_7);
 else
  FUNC_3(VAR_4, 1);
}
