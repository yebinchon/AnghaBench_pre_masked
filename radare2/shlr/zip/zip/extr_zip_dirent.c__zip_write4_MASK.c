
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint32_t ;
typedef int FILE ;


 int FUNC_0 (int,int *) ;

void
FUNC_1(zip_uint32_t VAR_0, FILE *VAR_1)
{
    FUNC_0(VAR_0&0xff, VAR_1);
    FUNC_0((VAR_0>>8)&0xff, VAR_1);
    FUNC_0((VAR_0>>16)&0xff, VAR_1);
    FUNC_0((VAR_0>>24)&0xff, VAR_1);

    return;
}
