
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t* DES_cblock ;


 unsigned int VAR_0 ;
 size_t* VAR_1 ;

void FUNC_0(DES_cblock *VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        (*VAR_2)[VAR_3] = VAR_1[(*VAR_2)[VAR_3]];
}
