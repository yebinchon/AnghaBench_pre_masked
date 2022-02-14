
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct netlbl_unlhsh_iface {int ifindex; int valid; int list; int addr6_list; int addr4_list; } ;
struct TYPE_2__ {int * tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct netlbl_unlhsh_iface*) ;
 struct netlbl_unlhsh_iface* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_4 (int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (int ) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int ,struct netlbl_unlhsh_iface*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct netlbl_unlhsh_iface *FUNC_10(int VAR_4)
{
 u32 VAR_5;
 struct netlbl_unlhsh_iface *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->ifindex = VAR_4;
 FUNC_0(&VAR_6->addr4_list);
 FUNC_0(&VAR_6->addr6_list);
 VAR_6->valid = 1;

 FUNC_8(&VAR_3);
 if (VAR_4 > 0) {
  VAR_5 = FUNC_4(VAR_4);
  if (FUNC_6(VAR_4) != ((void*)0))
   goto add_iface_failure;
  FUNC_3(&VAR_6->list,
        &FUNC_5(VAR_1)->tbl[VAR_5]);
 } else {
  FUNC_0(&VAR_6->list);
  if (FUNC_5(VAR_2) != ((void*)0))
   goto add_iface_failure;
  FUNC_7(VAR_2, VAR_6);
 }
 FUNC_9(&VAR_3);

 return VAR_6;

add_iface_failure:
 FUNC_9(&VAR_3);
 FUNC_1(VAR_6);
 return ((void*)0);
}
