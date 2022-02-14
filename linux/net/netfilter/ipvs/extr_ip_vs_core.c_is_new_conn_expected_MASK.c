
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn {int protocol; int flags; int state; scalar_t__ control; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline bool FUNC_0(const struct ip_vs_conn *VAR_5,
     int VAR_6)
{

 if (VAR_5->control)
  return 0;

 switch (VAR_5->protocol) {
 case 128:
  return (VAR_5->state == VAR_4) ||
         (VAR_5->state == VAR_2) ||
   ((VAR_6 & 2) &&
    (VAR_5->state == VAR_3) &&
    (VAR_5->flags & VAR_0));
 case 129:
  return VAR_5->state == VAR_1;
 default:
  return 0;
 }
}
