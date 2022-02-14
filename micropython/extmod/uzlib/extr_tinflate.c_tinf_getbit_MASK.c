
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bitcount; int tag; } ;
typedef TYPE_1__ TINF_DATA ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(TINF_DATA *VAR_0)
{
   unsigned int VAR_1;


   if (!VAR_0->bitcount--)
   {

      VAR_0->tag = FUNC_0(VAR_0);
      VAR_0->bitcount = 7;
   }


   VAR_1 = VAR_0->tag & 0x01;
   VAR_0->tag >>= 1;

   return VAR_1;
}
