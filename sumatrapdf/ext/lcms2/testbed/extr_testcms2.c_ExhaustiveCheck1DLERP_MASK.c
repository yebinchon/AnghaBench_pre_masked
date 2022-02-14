
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsInt32Number ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static
cmsInt32Number FUNC_2(void)
{
    cmsUInt32Number VAR_1;

    FUNC_1("\n");
    for (VAR_1=10; VAR_1 <= 4096; VAR_1++) {

        if ((VAR_1 % 10) == 0) FUNC_1("%u    \r", VAR_1);

        if (!FUNC_0(VAR_1, VAR_0, 1)) return 0;
    }

    FUNC_1("\rResult is ");
    return 1;
}
