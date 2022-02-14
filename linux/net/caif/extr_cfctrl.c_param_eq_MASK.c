
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int connid; } ;
struct TYPE_8__ {int paramlen; int params; int name; int fifosize_bufs; int fifosize_kb; } ;
struct TYPE_7__ {int volume; int connid; } ;
struct TYPE_6__ {int connid; } ;
struct TYPE_10__ {TYPE_4__ video; TYPE_3__ utility; TYPE_2__ rfm; TYPE_1__ datagram; } ;
struct cfctrl_link_param {int linktype; scalar_t__ priority; scalar_t__ phyid; scalar_t__ endpoint; scalar_t__ chtype; TYPE_5__ u; } ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(const struct cfctrl_link_param *VAR_0,
       const struct cfctrl_link_param *VAR_1)
{
 bool VAR_2 =
     VAR_0->linktype == VAR_1->linktype &&
     VAR_0->priority == VAR_1->priority &&
     VAR_0->phyid == VAR_1->phyid &&
     VAR_0->endpoint == VAR_1->endpoint && VAR_0->chtype == VAR_1->chtype;

 if (!VAR_2)
  return 0;

 switch (VAR_0->linktype) {
 case 129:
  return 1;
 case 134:
  return VAR_0->u.datagram.connid == VAR_1->u.datagram.connid;
 case 131:
  return
      VAR_0->u.rfm.connid == VAR_1->u.rfm.connid &&
      FUNC_1(VAR_0->u.rfm.volume, VAR_1->u.rfm.volume) == 0;
 case 130:
  return
      VAR_0->u.utility.fifosize_kb == VAR_1->u.utility.fifosize_kb
      && VAR_0->u.utility.fifosize_bufs ==
      VAR_1->u.utility.fifosize_bufs
      && FUNC_1(VAR_0->u.utility.name, VAR_1->u.utility.name) == 0
      && VAR_0->u.utility.paramlen == VAR_1->u.utility.paramlen
      && FUNC_0(VAR_0->u.utility.params, VAR_1->u.utility.params,
         VAR_0->u.utility.paramlen) == 0;

 case 128:
  return VAR_0->u.video.connid == VAR_1->u.video.connid;
 case 133:
  return 1;
 case 132:
  return 0;
 default:
  return 0;
 }
 return 0;
}
