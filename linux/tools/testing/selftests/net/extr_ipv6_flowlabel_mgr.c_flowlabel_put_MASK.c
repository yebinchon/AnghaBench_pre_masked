
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct in6_flowlabel_req {int flr_label; int flr_action; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,struct in6_flowlabel_req*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3, uint32_t VAR_4)
{
 struct in6_flowlabel_req VAR_5 = {
  .flr_action = VAR_1,
  .flr_label = FUNC_0(VAR_4),
 };

 return FUNC_1(VAR_3, VAR_2, VAR_0, &VAR_5, sizeof(VAR_5));
}
