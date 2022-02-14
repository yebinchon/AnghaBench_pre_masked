
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xa_state {scalar_t__ xa_node; TYPE_2__* xa_alloc; TYPE_1__* xa; } ;
typedef int gfp_t ;
struct TYPE_5__ {int private_list; } ;
struct TYPE_4__ {int xa_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (struct xa_state*) ;

bool FUNC_5(struct xa_state *VAR_5, gfp_t VAR_6)
{
 if (VAR_5->xa_node != FUNC_0(-VAR_0)) {
  FUNC_4(VAR_5);
  return 0;
 }
 if (VAR_5->xa->xa_flags & VAR_2)
  VAR_6 |= VAR_3;
 VAR_5->xa_alloc = FUNC_2(VAR_4, VAR_6);
 if (!VAR_5->xa_alloc)
  return 0;
 FUNC_1(VAR_5->xa_alloc, !FUNC_3(&VAR_5->xa_alloc->private_list));
 VAR_5->xa_node = VAR_1;
 return 1;
}
