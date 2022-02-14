
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt_ht {int dummy; } ;
struct module {unsigned int sorttab_size; struct symt_ht** addr_sorttab; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct symt_ht** FUNC_1 (int ,int ,unsigned int) ;
 struct symt_ht** FUNC_2 (int ,int ,struct symt_ht**,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_3(struct module* VAR_2, unsigned VAR_3)
{
    struct symt_ht** VAR_4;
    unsigned int VAR_5;

    if (VAR_3 <= VAR_2->sorttab_size) return VAR_1;
    if (VAR_2->addr_sorttab)
    {
        VAR_5 = VAR_2->sorttab_size * 2;
        VAR_4 = FUNC_2(FUNC_0(), 0, VAR_2->addr_sorttab,
                          VAR_5 * sizeof(struct symt_ht*));
    }
    else
    {
        VAR_5 = 64;
        VAR_4 = FUNC_1(FUNC_0(), 0, VAR_5 * sizeof(struct symt_ht*));
    }
    if (!VAR_4) return VAR_0;
    VAR_2->sorttab_size = VAR_5;
    VAR_2->addr_sorttab = VAR_4;
    return VAR_1;
}
