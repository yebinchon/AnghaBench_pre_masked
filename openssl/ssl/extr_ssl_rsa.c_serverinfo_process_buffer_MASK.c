
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int PACKET ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned int*) ;
 int FUNC_3 (int *,unsigned long*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned int,unsigned long,int ,int *,int *,int ,int *) ;
 int FUNC_6 (int *,unsigned int,int ,int *,int *,int ,int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_7,
                                     const unsigned char *VAR_8,
                                     size_t VAR_9, SSL_CTX *VAR_10)
{
    PACKET VAR_11;

    if (VAR_8 == ((void*)0) || VAR_9 == 0)
        return 0;

    if (VAR_7 != VAR_0 && VAR_7 != VAR_1)
        return 0;

    if (!FUNC_0(&VAR_11, VAR_8, VAR_9))
        return 0;

    while (FUNC_4(&VAR_11)) {
        unsigned long VAR_12 = 0;
        unsigned int VAR_13 = 0;
        PACKET VAR_14;

        if ((VAR_7 == VAR_1 && !FUNC_3(&VAR_11, &VAR_12))
                || !FUNC_2(&VAR_11, &VAR_13)
                || !FUNC_1(&VAR_11, &VAR_14))
            return 0;

        if (VAR_10 == ((void*)0))
            continue;
        if (VAR_7 == VAR_0 || VAR_12 == VAR_2) {
            if (!FUNC_6(VAR_10, VAR_13,
                                               VAR_3,
                                               ((void*)0), ((void*)0),
                                               VAR_4,
                                               ((void*)0)))
                return 0;
        } else {
            if (!FUNC_5(VAR_10, VAR_13, VAR_12,
                                        VAR_5,
                                        ((void*)0), ((void*)0),
                                        VAR_6,
                                        ((void*)0)))
                return 0;
        }
    }

    return 1;
}
