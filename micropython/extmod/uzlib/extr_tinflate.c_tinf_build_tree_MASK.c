
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short* table; unsigned int* trans; } ;
typedef TYPE_1__ TINF_TREE ;


 int FUNC_0 (unsigned short*) ;
 int FUNC_1 (char*,unsigned short*,int ) ;

__attribute__((used)) static void FUNC_2(TINF_TREE *VAR_0, const unsigned char *VAR_1, unsigned int VAR_2)
{
   unsigned short VAR_3[16];
   unsigned int VAR_4, VAR_5;


   for (VAR_4 = 0; VAR_4 < 16; ++VAR_4) VAR_0->table[VAR_4] = 0;


   for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) VAR_0->table[VAR_1[VAR_4]]++;
   VAR_0->table[0] = 0;


   for (VAR_5 = 0, VAR_4 = 0; VAR_4 < 16; ++VAR_4)
   {
      VAR_3[VAR_4] = VAR_5;
      VAR_5 += VAR_0->table[VAR_4];
   }






   for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
   {
      if (VAR_1[VAR_4]) VAR_0->trans[VAR_3[VAR_1[VAR_4]]++] = VAR_4;
   }
}
