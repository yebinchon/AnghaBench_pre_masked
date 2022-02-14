
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 int FUNC_0 (int *,unsigned int*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,size_t) ;

int FUNC_4(PACKET *VAR_0, PACKET *VAR_1)
{
    unsigned int VAR_2;

    if (!FUNC_0(VAR_0, &VAR_2))
        return 0;

    if (VAR_2 < 0x80)
        return FUNC_3(VAR_0, VAR_1, (size_t)VAR_2);
    if (VAR_2 == 0x81)
        return FUNC_1(VAR_0, VAR_1);
    if (VAR_2 == 0x82)
        return FUNC_2(VAR_0, VAR_1);


    return 0;
}
