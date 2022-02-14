
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int* all; } ;
struct TYPE_8__ {int all; } ;
struct TYPE_11__ {TYPE_3__ u3; TYPE_1__ u; } ;
struct nf_conntrack_tuple_mask {TYPE_4__ src; } ;
struct TYPE_12__ {int* all; } ;
struct TYPE_9__ {int all; } ;
struct TYPE_13__ {TYPE_5__ u3; TYPE_2__ u; } ;
struct TYPE_14__ {TYPE_6__ src; } ;
struct nf_conntrack_expect {int master; int tuple; TYPE_7__ mask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,struct nf_conntrack_tuple_mask*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static inline int FUNC_5(const struct nf_conntrack_expect *VAR_1,
          const struct nf_conntrack_expect *VAR_2)
{


 struct nf_conntrack_tuple_mask VAR_3;
 int VAR_4;

 VAR_3.src.u.all = VAR_1->mask.src.u.all & VAR_2->mask.src.u.all;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++){
  VAR_3.src.u3.all[VAR_4] =
   VAR_1->mask.src.u3.all[VAR_4] & VAR_2->mask.src.u3.all[VAR_4];
 }

 return FUNC_2(&VAR_1->tuple, &VAR_2->tuple, &VAR_3) &&
        FUNC_0(FUNC_1(VAR_1->master), FUNC_1(VAR_2->master)) &&
        FUNC_4(VAR_1->master, FUNC_3(VAR_2->master));
}
