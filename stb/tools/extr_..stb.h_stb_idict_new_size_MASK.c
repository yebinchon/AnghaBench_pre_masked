
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int alloced; } ;
typedef TYPE_1__ stb_idict ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

stb_idict * FUNC_4(int VAR_0)
{
   stb_idict *VAR_1 = (stb_idict *) FUNC_0(sizeof(*VAR_1));
   if (VAR_1) {
      if (!FUNC_2(VAR_0))
         VAR_0 = 1 << FUNC_3(VAR_0);
      FUNC_1(VAR_1, VAR_0);
      VAR_1->alloced = 1;
   }
   return VAR_1;
}
