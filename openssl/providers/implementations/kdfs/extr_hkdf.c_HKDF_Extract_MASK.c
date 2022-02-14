
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int const*,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(const EVP_MD *VAR_2,
                        const unsigned char *VAR_3, size_t VAR_4,
                        const unsigned char *VAR_5, size_t VAR_6,
                        unsigned char *VAR_7, size_t VAR_8)
{
    int VAR_9 = FUNC_1(VAR_2);

    if (VAR_9 < 0)
        return 0;
    if (VAR_8 != (size_t)VAR_9) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, ((void*)0)) != ((void*)0);
}
