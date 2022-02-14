
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netlbl_unlhsh_iface {int addr4_list; } ;
struct TYPE_2__ {int addr; int mask; int valid; } ;
struct netlbl_unlhsh_addr4 {TYPE_1__ list; int secid; } ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlbl_unlhsh_addr4*) ;
 struct netlbl_unlhsh_addr4* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct netlbl_unlhsh_iface *VAR_3,
       const struct in_addr *VAR_4,
       const struct in_addr *VAR_5,
       u32 VAR_6)
{
 int VAR_7;
 struct netlbl_unlhsh_addr4 *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->list.addr = VAR_4->s_addr & VAR_5->s_addr;
 VAR_8->list.mask = VAR_5->s_addr;
 VAR_8->list.valid = 1;
 VAR_8->secid = VAR_6;

 FUNC_3(&VAR_2);
 VAR_7 = FUNC_2(&VAR_8->list, &VAR_3->addr4_list);
 FUNC_4(&VAR_2);

 if (VAR_7 != 0)
  FUNC_0(VAR_8);
 return VAR_7;
}
