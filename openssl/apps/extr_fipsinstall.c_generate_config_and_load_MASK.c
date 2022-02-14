
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char const*,unsigned char*,size_t,int *,int ) ;
 int FUNC_7 (int *,char const*,char const*) ;

__attribute__((used)) static CONF *FUNC_8(const char *VAR_0,
                                      const char *VAR_1,
                                      unsigned char *VAR_2,
                                      size_t VAR_3)
{
    BIO *VAR_4 = ((void*)0);
    CONF *VAR_5 = ((void*)0);

    VAR_4 = FUNC_1(FUNC_2());
    if (VAR_4 == ((void*)0))
        return 0;
    if (!FUNC_7(VAR_4, VAR_0, VAR_1)
         || !FUNC_6(VAR_4, VAR_1, VAR_2,
                                       VAR_3, ((void*)0), 0))
        goto end;

    VAR_5 = FUNC_5(VAR_4, ((void*)0));
    if (VAR_5 == ((void*)0))
        goto end;

    if (!FUNC_3(VAR_5, ((void*)0), 0))
        goto end;
    FUNC_0(VAR_4);
    return VAR_5;
end:
    FUNC_4(VAR_5);
    FUNC_0(VAR_4);
    return ((void*)0);
}
