
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {void* type; struct netlbl_domaddr_map* addrsel; struct cipso_v4_doi* cipso; } ;
struct TYPE_4__ {int addr; int mask; int valid; } ;
struct netlbl_domaddr_map {struct netlbl_domaddr_map* domain; TYPE_1__ def; int list4; TYPE_2__ list; int list6; int family; } ;
struct netlbl_domaddr4_map {struct netlbl_domaddr4_map* domain; TYPE_1__ def; int list4; TYPE_2__ list; int list6; int family; } ;
struct netlbl_dom_map {struct netlbl_dom_map* domain; TYPE_1__ def; int list4; TYPE_2__ list; int list6; int family; } ;
struct netlbl_audit {int dummy; } ;
struct in_addr {int s_addr; } ;
struct cipso_v4_doi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 void* VAR_5 ;
 void* VAR_6 ;
 struct cipso_v4_doi* FUNC_1 (int ) ;
 int FUNC_2 (struct cipso_v4_doi*) ;
 int FUNC_3 (struct netlbl_domaddr_map*) ;
 struct netlbl_domaddr_map* FUNC_4 (char const*,int ) ;
 struct netlbl_domaddr_map* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (struct netlbl_domaddr_map*,struct netlbl_audit*) ;

int FUNC_8(u32 VAR_7,
          const char *VAR_8,
          const struct in_addr *VAR_9,
          const struct in_addr *VAR_10,
          struct netlbl_audit *VAR_11)
{
 int VAR_12 = -VAR_3;
 struct cipso_v4_doi *VAR_13;
 struct netlbl_dom_map *VAR_14;
 struct netlbl_domaddr_map *VAR_15 = ((void*)0);
 struct netlbl_domaddr4_map *VAR_16 = ((void*)0);

 VAR_13 = FUNC_1(VAR_7);
 if (VAR_13 == ((void*)0))
  return -VAR_2;

 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_4);
 if (VAR_14 == ((void*)0))
  goto out_entry;
 VAR_14->family = VAR_0;
 if (VAR_8 != ((void*)0)) {
  VAR_14->domain = FUNC_4(VAR_8, VAR_4);
  if (VAR_14->domain == ((void*)0))
   goto out_domain;
 }

 if (VAR_9 == ((void*)0) && VAR_10 == ((void*)0)) {
  VAR_14->def.cipso = VAR_13;
  VAR_14->def.type = VAR_6;
 } else if (VAR_9 != ((void*)0) && VAR_10 != ((void*)0)) {
  VAR_15 = FUNC_5(sizeof(*VAR_15), VAR_4);
  if (VAR_15 == ((void*)0))
   goto out_addrmap;
  FUNC_0(&VAR_15->list4);
  FUNC_0(&VAR_15->list6);

  VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_4);
  if (VAR_16 == ((void*)0))
   goto out_addrinfo;
  VAR_16->def.cipso = VAR_13;
  VAR_16->def.type = VAR_6;
  VAR_16->list.addr = VAR_9->s_addr & VAR_10->s_addr;
  VAR_16->list.mask = VAR_10->s_addr;
  VAR_16->list.valid = 1;
  VAR_12 = FUNC_6(&VAR_16->list, &VAR_15->list4);
  if (VAR_12 != 0)
   goto cfg_cipsov4_map_add_failure;

  VAR_14->def.addrsel = VAR_15;
  VAR_14->def.type = VAR_5;
 } else {
  VAR_12 = -VAR_1;
  goto out_addrmap;
 }

 VAR_12 = FUNC_7(VAR_14, VAR_11);
 if (VAR_12 != 0)
  goto cfg_cipsov4_map_add_failure;

 return 0;

cfg_cipsov4_map_add_failure:
 FUNC_3(VAR_16);
out_addrinfo:
 FUNC_3(VAR_15);
out_addrmap:
 FUNC_3(VAR_14->domain);
out_domain:
 FUNC_3(VAR_14);
out_entry:
 FUNC_2(VAR_13);
 return VAR_12;
}
