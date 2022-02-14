
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checksum; int checksum_type; } ;
typedef TYPE_1__ TINF_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (TYPE_1__*) ;

int FUNC_1(TINF_DATA *VAR_2)
{
   unsigned char VAR_3, VAR_4;



   VAR_3 = FUNC_0(VAR_2);
   VAR_4 = FUNC_0(VAR_2);




   if ((256*VAR_3 + VAR_4) % 31) return VAR_1;


   if ((VAR_3 & 0x0f) != 8) return VAR_1;


   if ((VAR_3 >> 4) > 7) return VAR_1;


   if (VAR_4 & 0x20) return VAR_1;


   VAR_2->checksum_type = VAR_0;
   VAR_2->checksum = 1;

   return VAR_3 >> 4;
}
