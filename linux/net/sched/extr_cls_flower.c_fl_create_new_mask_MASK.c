
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_4__ {scalar_t__ src; scalar_t__ dst; } ;
struct TYPE_6__ {TYPE_2__ tp_max; TYPE_1__ tp_min; } ;
struct fl_flow_mask {int ht; int list; int ht_node; int refcnt; int filters; TYPE_3__ key; int dissector; int flags; } ;
struct cls_fl_head {int masks_lock; int masks; int ht; } ;


 int VAR_0 ;
 struct fl_flow_mask* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (struct fl_flow_mask*) ;
 int FUNC_4 (struct fl_flow_mask*,struct fl_flow_mask*) ;
 int FUNC_5 (struct fl_flow_mask*) ;
 struct fl_flow_mask* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_3 ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct fl_flow_mask *FUNC_13(struct cls_fl_head *VAR_4,
            struct fl_flow_mask *VAR_5)
{
 struct fl_flow_mask *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_4(VAR_6, VAR_5);

 if ((VAR_6->key.tp_min.dst && VAR_6->key.tp_max.dst) ||
     (VAR_6->key.tp_min.src && VAR_6->key.tp_max.src))
  VAR_6->flags |= VAR_2;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  goto errout_free;

 FUNC_2(&VAR_6->dissector, &VAR_6->key);

 FUNC_1(&VAR_6->filters);

 FUNC_8(&VAR_6->refcnt, 1);
 VAR_7 = FUNC_10(&VAR_4->ht, &VAR_5->ht_node,
          &VAR_6->ht_node, VAR_3);
 if (VAR_7)
  goto errout_destroy;

 FUNC_11(&VAR_4->masks_lock);
 FUNC_7(&VAR_6->list, &VAR_4->masks);
 FUNC_12(&VAR_4->masks_lock);

 return VAR_6;

errout_destroy:
 FUNC_9(&VAR_6->ht);
errout_free:
 FUNC_5(VAR_6);

 return FUNC_0(VAR_7);
}
