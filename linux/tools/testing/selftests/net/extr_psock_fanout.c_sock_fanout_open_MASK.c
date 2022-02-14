
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint16_t ;
struct sockaddr_ll {scalar_t__ sll_ifindex; int sll_protocol; int sll_family; int member_0; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(uint16_t VAR_6, uint16_t VAR_7)
{
 struct sockaddr_ll VAR_8 = {0};
 int VAR_9, VAR_10;

 VAR_9 = FUNC_8(VAR_3, VAR_4, 0);
 if (VAR_9 < 0) {
  FUNC_6("socket packet");
  FUNC_2(1);
 }

 FUNC_5(VAR_9);

 VAR_8.sll_family = VAR_0;
 VAR_8.sll_protocol = FUNC_3(VAR_1);
 VAR_8.sll_ifindex = FUNC_4("lo");
 if (VAR_8.sll_ifindex == 0) {
  FUNC_6("if_nametoindex");
  FUNC_2(1);
 }
 if (FUNC_0(VAR_9, (void *) &VAR_8, sizeof(VAR_8))) {
  FUNC_6("bind packet");
  FUNC_2(1);
 }

 VAR_10 = (((int) VAR_6) << 16) | VAR_7;
 if (FUNC_7(VAR_9, VAR_5, VAR_2, &VAR_10, sizeof(VAR_10))) {
  if (FUNC_1(VAR_9)) {
   FUNC_6("close packet");
   FUNC_2(1);
  }
  return -1;
 }

 return VAR_9;
}
