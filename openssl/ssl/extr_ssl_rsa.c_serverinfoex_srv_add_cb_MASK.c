
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned char const*,size_t,unsigned int,unsigned char const**,size_t*) ;
 scalar_t__ FUNC_1 (int *,unsigned char const**,size_t*) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_2, unsigned int VAR_3,
                                   unsigned int VAR_4,
                                   const unsigned char **VAR_5,
                                   size_t *VAR_6, X509 *VAR_7, size_t VAR_8,
                                   int *VAR_9, void *VAR_10)
{
    const unsigned char *VAR_11 = ((void*)0);
    size_t VAR_12 = 0;


    if ((VAR_4 & VAR_1) != 0 && VAR_8 > 0)
        return 0;


    if ((FUNC_1(VAR_2, &VAR_11,
                                        &VAR_12)) != 0) {

        int VAR_13 = FUNC_0(VAR_11, VAR_12,
                                               VAR_3, VAR_5, VAR_6);
        if (VAR_13 == -1) {
            *VAR_9 = VAR_0;
            return -1;
        }
        if (VAR_13 == 0)
            return 0;
        return 1;
    }
    return 0;

}
