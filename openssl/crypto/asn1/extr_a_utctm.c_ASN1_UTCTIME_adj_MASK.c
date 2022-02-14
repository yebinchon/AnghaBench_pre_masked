
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int ASN1_UTCTIME ;


 struct tm* FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (struct tm*,int,long) ;
 int VAR_0 ;
 int * FUNC_2 (int *,struct tm*,int ) ;

ASN1_UTCTIME *FUNC_3(ASN1_UTCTIME *VAR_1, time_t VAR_2,
                               int VAR_3, long VAR_4)
{
    struct tm *VAR_5;
    struct tm VAR_6;

    VAR_5 = FUNC_0(&VAR_2, &VAR_6);
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    if (VAR_3 || VAR_4) {
        if (!FUNC_1(VAR_5, VAR_3, VAR_4))
            return ((void*)0);
    }

    return FUNC_2(VAR_1, VAR_5, VAR_0);
}
