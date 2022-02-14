
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif_saddr_item {char* addr; int name; } ;
struct netif_saddr_data {int addrs; } ;
struct dstr {int array; int member_0; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (int ,struct netif_saddr_item*) ;
 int FUNC_2 (struct dstr*,char const*) ;
 int FUNC_3 (struct dstr*,char*,char const*,char const*) ;

__attribute__((used)) static inline void FUNC_4(struct netif_saddr_data *VAR_0,
           const char *VAR_1,
           const char *VAR_2)
{
 struct netif_saddr_item VAR_3;
 struct dstr VAR_4 = {0};
 char *VAR_5 = FUNC_0(VAR_1);

 if (VAR_2 && *VAR_2)
  FUNC_3(&VAR_4, "[%s] %s", VAR_2, VAR_1);
 else
  FUNC_2(&VAR_4, VAR_1);

 VAR_3.name = VAR_4.array;
 VAR_3.addr = VAR_5;

 FUNC_1(VAR_0->addrs, &VAR_3);
}
