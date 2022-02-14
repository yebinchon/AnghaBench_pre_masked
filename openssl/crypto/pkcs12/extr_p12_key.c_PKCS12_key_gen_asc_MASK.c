
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,unsigned char**,int*) ;
 int FUNC_1 (unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_2 (unsigned char*,int,unsigned char*,int,int,int,int,unsigned char*,int const*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(const char *VAR_2, int VAR_3, unsigned char *VAR_4,
                       int VAR_5, int VAR_6, int VAR_7, int VAR_8,
                       unsigned char *VAR_9, const EVP_MD *VAR_10)
{
    int VAR_11;
    unsigned char *VAR_12;
    int VAR_13;

    if (VAR_2 == ((void*)0)) {
        VAR_12 = ((void*)0);
        VAR_13 = 0;
    } else if (!FUNC_0(VAR_2, VAR_3, &VAR_12, &VAR_13)) {
        FUNC_3(VAR_1, VAR_0);
        return 0;
    }
    VAR_11 = FUNC_2(VAR_12, VAR_13, VAR_4, VAR_5,
                             VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    if (VAR_11 <= 0)
        return 0;
    FUNC_1(VAR_12, VAR_13);
    return VAR_11;
}
