
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (unsigned char const**,unsigned int,int) ;
 int * FUNC_2 (unsigned char const**,unsigned int,int) ;
 unsigned int FUNC_3 (unsigned int,int,int) ;
 scalar_t__ FUNC_4 (unsigned char const**,unsigned int,unsigned int*,unsigned int*,int*,int*) ;

__attribute__((used)) static EVP_PKEY *FUNC_5(const unsigned char **VAR_3, unsigned int VAR_4,
                        int VAR_5)
{
    const unsigned char *VAR_6 = *VAR_3;
    unsigned int VAR_7, VAR_8;
    int VAR_9;
    if (FUNC_4(&VAR_6, VAR_4, &VAR_8, &VAR_7, &VAR_9, &VAR_5) <= 0) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_4 -= 16;
    if (VAR_4 < FUNC_3(VAR_7, VAR_9, VAR_5)) {
        FUNC_0(VAR_0, VAR_2);
        return ((void*)0);
    }
    if (VAR_9)
        return FUNC_1(&VAR_6, VAR_7, VAR_5);
    else
        return FUNC_2(&VAR_6, VAR_7, VAR_5);
}
