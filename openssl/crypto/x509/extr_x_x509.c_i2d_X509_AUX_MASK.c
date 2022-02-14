
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int const*,unsigned char**) ;

int FUNC_4(const X509 *VAR_2, unsigned char **VAR_3)
{
    int VAR_4;
    unsigned char *VAR_5;


    if (VAR_3 == ((void*)0) || *VAR_3 != ((void*)0))
        return FUNC_3(VAR_2, VAR_3);


    if ((VAR_4 = FUNC_3(VAR_2, ((void*)0))) <= 0)
        return VAR_4;


    *VAR_3 = VAR_5 = FUNC_1(VAR_4);
    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return -1;
    }


    VAR_4 = FUNC_3(VAR_2, &VAR_5);
    if (VAR_4 <= 0) {
        FUNC_0(*VAR_3);
        *VAR_3 = ((void*)0);
    }
    return VAR_4;
}
