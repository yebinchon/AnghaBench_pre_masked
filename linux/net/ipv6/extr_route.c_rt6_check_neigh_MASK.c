
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int nud_state; int lock; } ;
struct fib6_nh {int fib_nh_gw6; int fib_nh_dev; } ;
typedef enum rt6_nud_state { ____Placeholder_rt6_nud_state } rt6_nud_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct neighbour* FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static enum rt6_nud_state FUNC_6(const struct fib6_nh *VAR_7)
{
 enum rt6_nud_state VAR_8 = VAR_4;
 struct neighbour *VAR_9;

 FUNC_2();
 VAR_9 = FUNC_1(VAR_7->fib_nh_dev,
       &VAR_7->fib_nh_gw6);
 if (VAR_9) {
  FUNC_4(&VAR_9->lock);
  if (VAR_9->nud_state & VAR_2)
   VAR_8 = VAR_6;






  FUNC_5(&VAR_9->lock);
 } else {
  VAR_8 = FUNC_0(VAR_0) ?
        VAR_6 : VAR_3;
 }
 FUNC_3();

 return VAR_8;
}
