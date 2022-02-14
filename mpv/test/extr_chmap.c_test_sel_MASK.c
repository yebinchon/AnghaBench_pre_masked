
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap_sel {int num_chmaps; int member_0; } ;
struct mp_chmap {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct mp_chmap*,int ) ;
 int FUNC_4 (struct mp_chmap_sel*,struct mp_chmap*) ;
 int FUNC_5 (struct mp_chmap_sel*,struct mp_chmap*) ;
 int FUNC_6 (struct mp_chmap*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_0, const char *VAR_1,
                     char **VAR_2)
{
    struct mp_chmap_sel VAR_3 = {0};
    struct mp_chmap VAR_4;
    struct mp_chmap VAR_5;

    FUNC_1(FUNC_3(&VAR_4, FUNC_2(VAR_0)));
    FUNC_1(FUNC_3(&VAR_5, FUNC_2(VAR_1)));

    for (int VAR_6 = 0; VAR_2[VAR_6]; VAR_6++) {
        struct mp_chmap VAR_7;
        FUNC_1(FUNC_3(&VAR_7, FUNC_2(VAR_2[VAR_6])));
        int VAR_8 = VAR_3.num_chmaps;
        FUNC_4(&VAR_3, &VAR_7);
        FUNC_1(VAR_3.num_chmaps > VAR_8);
    }

    FUNC_1(FUNC_5(&VAR_3, &VAR_4));


    FUNC_0(FUNC_6(&VAR_4),
                        FUNC_6(&VAR_5));
}
