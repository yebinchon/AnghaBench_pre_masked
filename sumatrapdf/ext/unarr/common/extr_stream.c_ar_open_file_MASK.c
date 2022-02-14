
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ar_stream ;
typedef int FILE ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;

ar_stream *FUNC_2(const char *VAR_0)
{
    FILE *VAR_1 = VAR_0 ? FUNC_1(VAR_0, "rb") : ((void*)0);
    return FUNC_0(VAR_1);
}
