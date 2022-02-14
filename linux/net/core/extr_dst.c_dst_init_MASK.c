
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dst_ops {int dummy; } ;
struct dst_entry {unsigned long expires; int obsolete; unsigned short flags; int lastuse; scalar_t__ __use; int __refcnt; int * lwtstate; scalar_t__ tclassid; scalar_t__ trailer_len; scalar_t__ header_len; scalar_t__ error; int output; int input; int * xfrm; struct dst_ops* ops; struct net_device* dev; } ;
struct TYPE_2__ {int metrics; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct net_device*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dst_ops*,int) ;
 int FUNC_3 (struct dst_entry*,int ,int) ;
 int VAR_4 ;

void FUNC_4(struct dst_entry *VAR_5, struct dst_ops *VAR_6,
       struct net_device *VAR_7, int VAR_8, int VAR_9,
       unsigned short VAR_10)
{
 VAR_5->dev = VAR_7;
 if (VAR_7)
  FUNC_1(VAR_7);
 VAR_5->ops = VAR_6;
 FUNC_3(VAR_5, VAR_1.metrics, 1);
 VAR_5->expires = 0UL;



 VAR_5->input = VAR_2;
 VAR_5->output = VAR_3;
 VAR_5->error = 0;
 VAR_5->obsolete = VAR_9;
 VAR_5->header_len = 0;
 VAR_5->trailer_len = 0;



 VAR_5->lwtstate = ((void*)0);
 FUNC_0(&VAR_5->__refcnt, VAR_8);
 VAR_5->__use = 0;
 VAR_5->lastuse = VAR_4;
 VAR_5->flags = VAR_10;
 if (!(VAR_10 & VAR_0))
  FUNC_2(VAR_6, 1);
}
