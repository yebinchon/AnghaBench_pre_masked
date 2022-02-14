
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *,unsigned char*) ;

__attribute__((used)) static int FUNC_4(RSA** VAR_0, unsigned char* VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    *VAR_0 = FUNC_0();
    switch (VAR_2) {
    case 0:
        VAR_3 = FUNC_1(*VAR_0, VAR_1);
        break;
    case 1:
        VAR_3 = FUNC_2(*VAR_0, VAR_1);
        break;
    case 2:
        VAR_3 = FUNC_3(*VAR_0, VAR_1);
        break;
    }
    return VAR_3;
}
