
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct mp_chmap*,struct mp_chmap*) ;
 scalar_t__ FUNC_2 (struct mp_chmap*,int ) ;
 int FUNC_3 (struct mp_chmap*) ;
 char* FUNC_4 (char*,size_t,struct mp_chmap*) ;
 scalar_t__** VAR_0 ;

char *FUNC_5(char *VAR_1, size_t VAR_2, const struct mp_chmap *VAR_3)
{
    struct mp_chmap VAR_4 = *VAR_3;
    FUNC_3(&VAR_4);
    for (int VAR_5 = 0; VAR_0[VAR_5][0]; VAR_5++) {
        struct mp_chmap VAR_6;
        if (FUNC_2(&VAR_6, FUNC_0(VAR_0[VAR_5][0])) &&
            FUNC_1(&VAR_6, &VAR_4))
        {
            VAR_4 = VAR_6;
            break;
        }
    }
    return FUNC_4(VAR_1, VAR_2, &VAR_4);
}
