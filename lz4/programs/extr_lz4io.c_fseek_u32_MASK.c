
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,long,int) ;

__attribute__((used)) static int FUNC_1(FILE *VAR_1, unsigned VAR_2, int VAR_3)
{
    const unsigned VAR_4 = 1U << 30;
    int VAR_5 = 0;

    if (VAR_3 != VAR_0) return -1;
    while (VAR_2 > 0) {
        unsigned VAR_6 = VAR_2;
        if (VAR_6 > VAR_4) VAR_6 = VAR_4;
        VAR_5 = FUNC_0(VAR_1, (long) VAR_6, VAR_0);
        if (VAR_5 != 0) break;
        VAR_2 -= VAR_6;
    }
    return VAR_5;
}
