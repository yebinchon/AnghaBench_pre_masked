
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 unsigned char* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_2, void *VAR_3)
{
    unsigned char *VAR_4;

    VAR_4 = FUNC_0(1);
    if (VAR_4 == ((void*)0))
        return VAR_0;



    *VAR_4 = *(unsigned char *)VAR_3;
    if (!FUNC_1(VAR_2, VAR_4, 1))
        return VAR_0;

    return VAR_1;
}
