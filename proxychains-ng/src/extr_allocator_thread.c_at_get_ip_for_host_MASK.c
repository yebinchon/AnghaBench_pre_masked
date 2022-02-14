
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct at_msghdr {scalar_t__ msgtype; size_t datalen; } ;
typedef int ip_type4 ;
struct TYPE_3__ {int v4; } ;
struct TYPE_4__ {TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,struct at_msghdr*,int *) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_4 (int ,struct at_msghdr*,char*) ;

ip_type4 FUNC_5(char* VAR_6, size_t VAR_7) {
 ip_type4 VAR_8;
 FUNC_0(VAR_4);
 if(VAR_7 > VAR_3) goto inv;
 struct at_msghdr VAR_9 = {.msgtype = VAR_2, .datalen = VAR_7 + 1 };
 if(FUNC_4(VAR_1, &VAR_9, VAR_6) &&
    FUNC_3(VAR_0, &VAR_9, &VAR_8));
 else {
  inv:
  VAR_8 = VAR_5.addr.v4;
 }
 FUNC_2(VAR_9.msgtype == VAR_2);
 FUNC_1(VAR_4);
 return VAR_8;
}
