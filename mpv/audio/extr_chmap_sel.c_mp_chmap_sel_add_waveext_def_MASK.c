
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap_sel {int dummy; } ;
struct mp_chmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mp_chmap*,int) ;
 int FUNC_1 (struct mp_chmap_sel*,struct mp_chmap*) ;

void FUNC_2(struct mp_chmap_sel *VAR_1)
{
    for (int VAR_2 = 1; VAR_2 <= VAR_0; VAR_2++) {
        struct mp_chmap VAR_3;
        FUNC_0(&VAR_3, VAR_2);
        FUNC_1(VAR_1, &VAR_3);
    }
}
