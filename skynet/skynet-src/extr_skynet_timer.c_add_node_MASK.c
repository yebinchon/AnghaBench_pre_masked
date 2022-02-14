
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct timer_node {size_t expire; } ;
struct timer {size_t time; int ** t; int * near; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct timer_node*) ;

__attribute__((used)) static void
FUNC_1(struct timer *VAR_5,struct timer_node *VAR_6) {
 uint32_t VAR_7=VAR_6->expire;
 uint32_t VAR_8=VAR_5->time;

 if ((VAR_7|VAR_3)==(VAR_8|VAR_3)) {
  FUNC_0(&VAR_5->near[VAR_7&VAR_3],VAR_6);
 } else {
  int VAR_9;
  uint32_t VAR_10=VAR_2 << VAR_1;
  for (VAR_9=0;VAR_9<3;VAR_9++) {
   if ((VAR_7|(VAR_10-1))==(VAR_8|(VAR_10-1))) {
    break;
   }
   VAR_10 <<= VAR_1;
  }

  FUNC_0(&VAR_5->t[VAR_9][((VAR_7>>(VAR_4 + VAR_9*VAR_1)) & VAR_0)],VAR_6);
 }
}
