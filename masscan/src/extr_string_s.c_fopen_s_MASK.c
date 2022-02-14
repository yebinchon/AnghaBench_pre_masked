
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errno_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*,char const*) ;

errno_t FUNC_1(FILE **VAR_2, const char *VAR_3, const char *VAR_4)
{
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
        return VAR_0;
    *VAR_2 = FUNC_0(VAR_3, VAR_4);
    if (*VAR_2 != ((void*)0))
        return 0;
    else
        return VAR_1;
}
