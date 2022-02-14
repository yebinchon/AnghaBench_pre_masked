
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int ASN1_TIME ;


 int * FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (struct tm*,int const*) ;
 int FUNC_2 (struct tm*,int ,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(const ASN1_TIME *VAR_0, struct tm *VAR_1)
{
    if (VAR_0 == ((void*)0)) {
        time_t VAR_2;

        FUNC_3(&VAR_2);
        FUNC_2(VAR_1, 0, sizeof(*VAR_1));
        if (FUNC_0(&VAR_2, VAR_1) != ((void*)0))
            return 1;
        return 0;
    }

    return FUNC_1(VAR_1, VAR_0);
}
