
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neighbour {int nud_state; } ;
struct TYPE_3__ {int ipv6; int ipv4; } ;
struct fib_nh_common {scalar_t__ nhc_gw_family; int nhc_dev; TYPE_1__ nhc_gw; } ;
struct fib_info {int dummy; } ;
struct TYPE_4__ {int * nd_tbl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct fib_nh_common* FUNC_0 (struct fib_info*,int ) ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 struct neighbour* FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct neighbour*) ;

__attribute__((used)) static int FUNC_4(struct fib_info *VAR_8, int VAR_9,
       struct fib_info **VAR_10, int *VAR_11,
       int VAR_12)
{
 const struct fib_nh_common *VAR_13 = FUNC_0(VAR_8, 0);
 struct neighbour *VAR_14;
 int VAR_15 = VAR_3;

 if (FUNC_1(VAR_13->nhc_gw_family == VAR_0))
  VAR_14 = FUNC_2(&VAR_6, &VAR_13->nhc_gw.ipv4, VAR_13->nhc_dev);
 else if (VAR_13->nhc_gw_family == VAR_1)
  VAR_14 = FUNC_2(VAR_7->nd_tbl, &VAR_13->nhc_gw.ipv6,
     VAR_13->nhc_dev);
 else
  VAR_14 = ((void*)0);

 if (VAR_14) {
  VAR_15 = VAR_14->nud_state;
  FUNC_3(VAR_14);
 } else {
  return 0;
 }
 if (VAR_15 == VAR_4)
  return 0;
 if ((VAR_15 & VAR_5) && VAR_9 != VAR_12)
  return 0;
 if ((VAR_15 & VAR_5) ||
     (*VAR_11 < 0 && VAR_9 > VAR_12 && VAR_15 != VAR_2)) {
  *VAR_10 = VAR_8;
  *VAR_11 = VAR_9;
 }
 return 1;
}
