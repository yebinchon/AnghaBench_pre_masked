
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {int num; TYPE_1__* avail; } ;
struct vringh {scalar_t__ last_avail_idx; TYPE_2__ vring; int weak_barriers; } ;
struct TYPE_3__ {int * ring; int idx; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct vringh *VAR_0, u16 *VAR_1)
{
 u16 VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_0->vring.avail->idx);
 if (VAR_4)
  return VAR_4;

 if (VAR_0->last_avail_idx == VAR_2)
  return 0;


 FUNC_1(VAR_0->weak_barriers);

 VAR_3 = VAR_0->last_avail_idx & (VAR_0->vring.num - 1);

 VAR_4 = FUNC_0(*VAR_1, &VAR_0->vring.avail->ring[VAR_3]);
 if (VAR_4)
  return VAR_4;

 VAR_0->last_avail_idx++;
 return 1;
}
