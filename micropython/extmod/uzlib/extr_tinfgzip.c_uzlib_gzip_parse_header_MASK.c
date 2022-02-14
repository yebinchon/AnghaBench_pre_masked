
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int checksum; int checksum_type; } ;
typedef TYPE_1__ TINF_DATA ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(TINF_DATA *VAR_7)
{
    unsigned char VAR_8;




    if (FUNC_2(VAR_7) != 0x1f || FUNC_2(VAR_7) != 0x8b) return VAR_5;


    if (FUNC_2(VAR_7) != 8) return VAR_5;


    VAR_8 = FUNC_2(VAR_7);


    if (VAR_8 & 0xe0) return VAR_5;




    FUNC_1(VAR_7, 6);


    if (VAR_8 & VAR_1)
    {
       unsigned int VAR_9 = FUNC_0(VAR_7);
       FUNC_1(VAR_7, VAR_9);
    }


    if (VAR_8 & VAR_3) { while (FUNC_2(VAR_7)); }


    if (VAR_8 & VAR_0) { while (FUNC_2(VAR_7)); }


    if (VAR_8 & VAR_2)
    {
                               FUNC_0(VAR_7);




    }


    VAR_7->checksum_type = VAR_4;
    VAR_7->checksum = ~0;

    return VAR_6;
}
