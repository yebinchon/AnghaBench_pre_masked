
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BUF_MEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (unsigned char const**,long) ;
 int FUNC_2 (long*,int *,int *,char*,char*,unsigned char const**,long,int,int,int ,int *) ;
 int FUNC_3 (int *,unsigned char const**,long) ;

__attribute__((used)) static int FUNC_4(BUF_MEM *VAR_6, const unsigned char **VAR_7, long VAR_8,
                        char VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    const unsigned char *VAR_13, *VAR_14;
    long VAR_15;
    char VAR_16, VAR_17;
    VAR_13 = *VAR_7;
    VAR_9 &= 1;




    if (!VAR_6 && !VAR_9) {
        *VAR_7 += VAR_8;
        return 1;
    }
    while (VAR_8 > 0) {
        VAR_14 = VAR_13;

        if (FUNC_1(&VAR_13, VAR_8)) {



            if (!VAR_9) {
                FUNC_0(VAR_0, VAR_4);
                return 0;
            }
            VAR_9 = 0;
            break;
        }

        if (!FUNC_2(&VAR_15, ((void*)0), ((void*)0), &VAR_17, &VAR_16, &VAR_13,
                             VAR_8, VAR_10, VAR_11, 0, ((void*)0))) {
            FUNC_0(VAR_0, VAR_5);
            return 0;
        }


        if (VAR_16) {
            if (VAR_12 >= VAR_1) {
                FUNC_0(VAR_0, VAR_3);
                return 0;
            }
            if (!FUNC_4(VAR_6, &VAR_13, VAR_15, VAR_17, VAR_10, VAR_11, VAR_12 + 1))
                return 0;
        } else if (VAR_15 && !FUNC_3(VAR_6, &VAR_13, VAR_15))
            return 0;
        VAR_8 -= VAR_13 - VAR_14;
    }
    if (VAR_9) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    *VAR_7 = VAR_13;
    return 1;
}
