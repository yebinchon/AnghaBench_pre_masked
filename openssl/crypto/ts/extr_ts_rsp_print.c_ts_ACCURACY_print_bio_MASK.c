
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * micros; int * millis; int * seconds; } ;
typedef TYPE_1__ TS_ACCURACY ;
typedef int BIO ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_0, const TS_ACCURACY *VAR_1)
{
    if (VAR_1->seconds != ((void*)0))
        FUNC_1(VAR_0, VAR_1->seconds);
    else
        FUNC_0(VAR_0, "unspecified");
    FUNC_0(VAR_0, " seconds, ");
    if (VAR_1->millis != ((void*)0))
        FUNC_1(VAR_0, VAR_1->millis);
    else
        FUNC_0(VAR_0, "unspecified");
    FUNC_0(VAR_0, " millis, ");
    if (VAR_1->micros != ((void*)0))
        FUNC_1(VAR_0, VAR_1->micros);
    else
        FUNC_0(VAR_0, "unspecified");
    FUNC_0(VAR_0, " micros");

    return 1;
}
