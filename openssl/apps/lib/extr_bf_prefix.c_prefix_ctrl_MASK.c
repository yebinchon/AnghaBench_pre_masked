
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * prefix; } ;
typedef TYPE_1__ PREFIX_CTX ;
typedef int BIO ;


 long FUNC_0 (int *,int,long,void*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*) ;


__attribute__((used)) static long FUNC_5(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
    long VAR_4 = 0;

    switch (VAR_1) {
    case 128:
        {
            PREFIX_CTX *VAR_5 = FUNC_1(VAR_0);

            if (VAR_5 == ((void*)0))
                break;

            FUNC_3(VAR_5->prefix);
            VAR_5->prefix = FUNC_4((const char *)VAR_3);
            VAR_4 = VAR_5->prefix != ((void*)0);
        }
        break;
    default:
        if (FUNC_2(VAR_0) != ((void*)0))
            VAR_4 = FUNC_0(FUNC_2(VAR_0), VAR_1, VAR_2, VAR_3);
        break;
    }
    return VAR_4;
}
