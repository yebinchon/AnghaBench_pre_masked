
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prk ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,unsigned char*,size_t,unsigned char const*,size_t,unsigned char*,size_t) ;
 int FUNC_2 (int const*,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(const EVP_MD *VAR_1,
                const unsigned char *VAR_2, size_t VAR_3,
                const unsigned char *VAR_4, size_t VAR_5,
                const unsigned char *VAR_6, size_t VAR_7,
                unsigned char *VAR_8, size_t VAR_9)
{
    unsigned char VAR_10[VAR_0];
    int VAR_11, VAR_12;
    size_t VAR_13;

    VAR_12 = FUNC_0(VAR_1);
    if (VAR_12 < 0)
        return 0;
    VAR_13 = (size_t)VAR_12;


    if (!FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_10, VAR_13))
        return 0;


    VAR_11 = FUNC_1(VAR_1, VAR_10, VAR_13, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_3(VAR_10, sizeof(VAR_10));

    return VAR_11;
}
