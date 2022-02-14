
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned char) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned char**,unsigned char*,unsigned char*,size_t,unsigned char const*,unsigned int) ;
 int FUNC_3 () ;
 unsigned char* VAR_3 ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (unsigned char*,unsigned char const*,unsigned char) ;
 unsigned char* FUNC_6 (size_t*,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(SSL *VAR_5, const unsigned char **VAR_6,
                          unsigned char *VAR_7, const unsigned char *VAR_8,
                          unsigned int VAR_9, void *VAR_10)
{
    unsigned char *VAR_11;
    size_t VAR_12;
    char* VAR_13 = VAR_10;

    VAR_11 = FUNC_6(&VAR_12, VAR_13);
    if (VAR_11 == ((void*)0)) {
        FUNC_4(VAR_4, "failed to parser ALPN server protocol string: %s\n",
                VAR_13);
        FUNC_3();
    }

    if (FUNC_2
        ((unsigned char **)VAR_6, VAR_7, VAR_11, VAR_12, VAR_8,
         VAR_9) != VAR_0) {
        FUNC_0(VAR_11);
        return VAR_1;
    }





    VAR_3 = FUNC_1(*VAR_7);
    FUNC_5(VAR_3, *VAR_6, *VAR_7);
    *VAR_6 = VAR_3;

    FUNC_0(VAR_11);
    return VAR_2;
}
