
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int paddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int,int*,int) ;

paddr_t FUNC_1(paddr_t VAR_2)
{
    if (VAR_1)
    {





        int VAR_3[2];
        VAR_3[0] = VAR_2;
        VAR_3[1] = 1;
        return (paddr_t)FUNC_0("translate", VAR_0, 2, VAR_3, 3);
    }
    else
    {

        return VAR_2;
    }
}
