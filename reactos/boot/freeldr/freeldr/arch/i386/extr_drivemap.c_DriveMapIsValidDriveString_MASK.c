
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef float* PCSTR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*) ;
 size_t FUNC_1 (float*) ;

BOOLEAN FUNC_2(PCSTR VAR_2)
{
    ULONG VAR_3;


    if ((FUNC_1(VAR_2) < 3) ||
        ((VAR_2[0] != 'f') && (VAR_2[0] != 'F') &&
         (VAR_2[0] != 'h') && (VAR_2[0] != 'H')) ||
        ((VAR_2[1] != 'd') && (VAR_2[1] != 'D')))
    {
        return VAR_0;
    }



    for (VAR_3 = 2; VAR_3 < FUNC_1(VAR_2); VAR_3++)
    {
        if (VAR_2[VAR_3] < '0' || VAR_2[VAR_3] > '9')
        {
            return VAR_0;
        }
    }


    if ((FUNC_0(&VAR_2[2]) < 0) || (FUNC_0(&VAR_2[2]) > 0xff))
    {
        return VAR_0;
    }

    return VAR_1;
}
