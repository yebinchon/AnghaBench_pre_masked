
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;



 long FUNC_0 (int *,int,long,void*) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static long FUNC_2(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
    long VAR_4;
    BIO *VAR_5 = FUNC_1(VAR_0);

    if (VAR_5 == ((void*)0))
        return 0;

    switch (VAR_1) {
    case 128:
        VAR_4 = 0L;
        break;
    default:
        VAR_4 = FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3);
        break;
    }
    return VAR_4;
}
