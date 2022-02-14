
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_KEY ;


 int VAR_0 ;
 size_t FUNC_0 (int const*,unsigned char*,size_t) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;

size_t FUNC_4(const EC_KEY *VAR_2, unsigned char **VAR_3)
{
    size_t VAR_4;
    unsigned char *VAR_5;

    VAR_4 = FUNC_0(VAR_2, ((void*)0), 0);
    if (VAR_4 == 0)
        return 0;
    if ((VAR_5 = FUNC_3(VAR_4)) == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }
    VAR_4 = FUNC_0(VAR_2, VAR_5, VAR_4);
    if (VAR_4 == 0) {
        FUNC_2(VAR_5);
        return 0;
    }
    *VAR_3 = VAR_5;
    return VAR_4;
}
