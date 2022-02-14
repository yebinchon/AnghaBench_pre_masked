
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_regstore {int dummy; } ;
struct d3dx_pres_reg {scalar_t__ offset; int table; } ;


 int FUNC_0 (struct d3dx_regstore*,int ,scalar_t__,double) ;

__attribute__((used)) static void FUNC_1(struct d3dx_regstore *VAR_0, const struct d3dx_pres_reg *VAR_1,
        unsigned int VAR_2, double VAR_3)
{
    FUNC_0(VAR_0, VAR_1->table, VAR_1->offset + VAR_2, VAR_3);
}
