
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned char const**,long) ;
 int FUNC_2 (long*,int *,int *,char*,int *,unsigned char const**,long,int,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(const unsigned char **VAR_4, long VAR_5, char VAR_6)
{
    uint32_t VAR_7;
    long VAR_8;
    const unsigned char *VAR_9 = *VAR_4, *VAR_10;

    if (VAR_6 == 0) {
        *VAR_4 += VAR_5;
        return 1;
    }
    VAR_7 = 1;






    while (VAR_5 > 0) {
        if (FUNC_1(&VAR_9, VAR_5)) {
            VAR_7--;
            if (VAR_7 == 0)
                break;
            VAR_5 -= 2;
            continue;
        }
        VAR_10 = VAR_9;

        if (!FUNC_2(&VAR_8, ((void*)0), ((void*)0), &VAR_6, ((void*)0), &VAR_9, VAR_5,
                             -1, 0, 0, ((void*)0))) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        if (VAR_6) {
            if (VAR_7 == VAR_3) {
                FUNC_0(VAR_0, VAR_2);
                return 0;
            }
            VAR_7++;
        } else {
            VAR_9 += VAR_8;
        }
        VAR_5 -= VAR_9 - VAR_10;
    }
    if (VAR_7) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    *VAR_4 = VAR_9;
    return 1;
}
