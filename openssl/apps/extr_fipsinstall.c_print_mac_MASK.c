
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *,char*,char const*,char*) ;
 char* FUNC_1 (unsigned char const*,long) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0, const char *VAR_1, const unsigned char *VAR_2,
                     size_t VAR_3)
{
    int VAR_4;
    char *VAR_5 = ((void*)0);

    VAR_5 = FUNC_1(VAR_2, (long)VAR_3);
    if (VAR_5 == ((void*)0))
        return 0;
    VAR_4 = FUNC_0(VAR_0, "%s = %s\n", VAR_1, VAR_5);
    FUNC_2(VAR_5);
    return VAR_4;
}
