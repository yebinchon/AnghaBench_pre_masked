
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const*,int) ;
 unsigned char* FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char const*) ;

size_t FUNC_3 (const unsigned char *VAR_0, const unsigned char *VAR_1)
{
    int VAR_2;
    const unsigned char *VAR_3 = VAR_0;

    while ((VAR_2 = FUNC_2 (VAR_0))) {

 if (FUNC_0 (VAR_1, VAR_2))
     break;

 VAR_0 = FUNC_1 ((unsigned char *) VAR_0);

    }

    return VAR_0 - VAR_3;
}
