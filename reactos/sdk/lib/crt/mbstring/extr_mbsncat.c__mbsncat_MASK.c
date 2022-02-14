
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int) ;
 void* FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char const*) ;

unsigned char *FUNC_3 (unsigned char *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    int VAR_3;
    unsigned char *VAR_4 = VAR_0;

    while ((VAR_3 = FUNC_2 (VAR_0)))
 VAR_0 = FUNC_1 (VAR_0);

    while (VAR_2-- > 0 && (VAR_3 = FUNC_2 (VAR_1))) {

 FUNC_0 (VAR_0, VAR_3);

 VAR_0 = FUNC_1 (VAR_0);

 VAR_1 = FUNC_1 ((unsigned char *) VAR_1);

    }

    *VAR_0 = '\0';

    return VAR_4;
}
