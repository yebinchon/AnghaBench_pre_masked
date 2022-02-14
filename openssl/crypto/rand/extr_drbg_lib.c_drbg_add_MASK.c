
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dummy ;
typedef int RAND_DRBG ;


 int FUNC_0 (int *,unsigned char*,int,int ,void const*,size_t) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void const*,size_t,size_t) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(const void *VAR_0, int VAR_1, double VAR_2)
{
    int VAR_3 = 0;
    RAND_DRBG *VAR_4 = FUNC_1();
    size_t VAR_5;
    size_t VAR_6;

    if (VAR_4 == ((void*)0))
        return 0;

    if (VAR_1 < 0 || VAR_2 < 0.0)
        return 0;

    FUNC_2(VAR_4);
    VAR_6 = FUNC_4(VAR_4);

    VAR_5 = (size_t)VAR_1;
    if (VAR_5 < VAR_6 || VAR_2 < (double) VAR_6) {
        VAR_2 = 0.0;

    }

    if (VAR_2 > (double)VAR_6) {
        VAR_2 = (double)VAR_6;
    }

    VAR_3 = FUNC_3(VAR_4, VAR_0, VAR_5, (size_t)(8 * VAR_2));
    FUNC_5(VAR_4);

    return VAR_3;
}
