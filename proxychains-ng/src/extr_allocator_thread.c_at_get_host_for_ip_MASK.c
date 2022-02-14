
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_msghdr {scalar_t__ msgtype; int datalen; } ;
typedef int ptrdiff_t ;
typedef int ip_type4 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,struct at_msghdr*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,struct at_msghdr*,int *) ;

size_t FUNC_5(ip_type4 VAR_4, char* VAR_5) {
 struct at_msghdr VAR_6 = {.msgtype = VAR_2, .datalen = sizeof(ip_type4) };
 size_t VAR_7 = 0;
 FUNC_0(VAR_3);
 if(FUNC_4(VAR_1, &VAR_6, &VAR_4) && FUNC_3(VAR_0, &VAR_6, VAR_5)) {
  if((ptrdiff_t) VAR_6.datalen <= 0) VAR_7 = 0;
  else VAR_7 = VAR_6.datalen - 1;
 }
 FUNC_2(VAR_6.msgtype == VAR_2);
 FUNC_1(VAR_3);
 return VAR_7;
}
