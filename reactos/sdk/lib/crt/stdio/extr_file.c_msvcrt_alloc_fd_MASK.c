
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ioinfo ;
typedef int HANDLE ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int * FUNC_1 (int*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(HANDLE VAR_1, int VAR_2)
{
    int VAR_3;
    ioinfo *VAR_4 = FUNC_1(&VAR_3);

    FUNC_0(":handle (%p) allocating fd (%d)\n", VAR_1, VAR_3);

    if(VAR_4 == &VAR_0)
        return -1;

    FUNC_2(VAR_4, VAR_1, VAR_2);
    FUNC_3(VAR_4);
    return VAR_3;
}
