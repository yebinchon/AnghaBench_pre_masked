
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_etf_qopt {scalar_t__ clockid; scalar_t__ delta; } ;
struct netlink_ext_ack {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static inline int FUNC_1(struct tc_etf_qopt *VAR_3,
     struct netlink_ext_ack *VAR_4)
{
 if (VAR_3->clockid < 0) {
  FUNC_0(VAR_4, "Dynamic clockids are not supported");
  return -VAR_2;
 }

 if (VAR_3->clockid != VAR_0) {
  FUNC_0(VAR_4, "Invalid clockid. CLOCK_TAI must be used");
  return -VAR_1;
 }

 if (VAR_3->delta < 0) {
  FUNC_0(VAR_4, "Delta must be positive");
  return -VAR_1;
 }

 return 0;
}
