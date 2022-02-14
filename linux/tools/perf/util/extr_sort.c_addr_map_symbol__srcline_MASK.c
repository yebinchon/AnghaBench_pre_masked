
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addr_map_symbol {int sym; int al_addr; int map; } ;


 char* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static char *FUNC_1(struct addr_map_symbol *VAR_0)
{
 return FUNC_0(VAR_0->map, VAR_0->al_addr, VAR_0->sym);
}
