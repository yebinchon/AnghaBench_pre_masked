
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int noatomic; int txn_wait; int txn_timings; int damage; } ;
struct TYPE_3__ {int txn_timeout_ms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (int ,char*,char const*) ;

void FUNC_4(const char *VAR_5) {
 if (FUNC_1(VAR_5, "damage=highlight") == 0) {
  VAR_3.damage = VAR_0;
 } else if (FUNC_1(VAR_5, "damage=rerender") == 0) {
  VAR_3.damage = VAR_1;
 } else if (FUNC_1(VAR_5, "noatomic") == 0) {
  VAR_3.noatomic = 1;
 } else if (FUNC_1(VAR_5, "txn-wait") == 0) {
  VAR_3.txn_wait = 1;
 } else if (FUNC_1(VAR_5, "txn-timings") == 0) {
  VAR_3.txn_timings = 1;
 } else if (FUNC_2(VAR_5, "txn-timeout=", 12) == 0) {
  VAR_4.txn_timeout_ms = FUNC_0(&VAR_5[12]);
 } else {
  FUNC_3(VAR_2, "Unknown debug flag: %s", VAR_5);
 }
}
