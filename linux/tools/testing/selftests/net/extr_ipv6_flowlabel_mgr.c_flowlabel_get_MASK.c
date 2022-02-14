
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int* s6_addr; } ;
struct in6_flowlabel_req {TYPE_1__ flr_dst; int flr_share; int flr_flags; int flr_label; int flr_action; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,struct in6_flowlabel_req*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3, uint32_t VAR_4, uint8_t VAR_5, uint16_t VAR_6)
{
 struct in6_flowlabel_req VAR_7 = {
  .flr_action = VAR_1,
  .flr_label = FUNC_0(VAR_4),
  .flr_flags = VAR_6,
  .flr_share = VAR_5,
 };


 VAR_7.flr_dst.s6_addr[0] = 0xfd;
 VAR_7.flr_dst.s6_addr[15] = 0x1;

 return FUNC_1(VAR_3, VAR_2, VAR_0, &VAR_7, sizeof(VAR_7));
}
