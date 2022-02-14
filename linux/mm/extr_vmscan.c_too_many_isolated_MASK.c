
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scan_control {int gfp_mask; } ;
struct pglist_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 unsigned long FUNC_1 (struct pglist_data*,int ) ;
 int FUNC_2 (struct scan_control*) ;

__attribute__((used)) static int FUNC_3(struct pglist_data *VAR_6, int VAR_7,
  struct scan_control *VAR_8)
{
 unsigned long VAR_9, VAR_10;

 if (FUNC_0())
  return 0;

 if (!FUNC_2(VAR_8))
  return 0;

 if (VAR_7) {
  VAR_9 = FUNC_1(VAR_6, VAR_1);
  VAR_10 = FUNC_1(VAR_6, VAR_3);
 } else {
  VAR_9 = FUNC_1(VAR_6, VAR_0);
  VAR_10 = FUNC_1(VAR_6, VAR_2);
 }






 if ((VAR_8->gfp_mask & (VAR_5 | VAR_4)) == (VAR_5 | VAR_4))
  VAR_9 >>= 3;

 return VAR_10 > VAR_9;
}
