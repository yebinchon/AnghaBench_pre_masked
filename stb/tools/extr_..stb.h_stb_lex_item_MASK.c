
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ stb_uint16 ;
struct TYPE_7__ {TYPE_1__* nodes; int start_node; } ;
typedef TYPE_2__ stb_matcher ;
struct TYPE_6__ {int goal; } ;


 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (TYPE_2__*,int ,char*,scalar_t__*) ;

int FUNC_2(stb_matcher *VAR_0, const char *VAR_1, int VAR_2)
{
   char *VAR_3;
   stb_uint16 VAR_4;

   VAR_3 = FUNC_1(VAR_0, VAR_0->start_node, (char*) VAR_1, &VAR_4);

   if (VAR_3 == ((void*)0))
      return 0;

   FUNC_0(VAR_0);

   VAR_0->nodes[(int) VAR_4].goal = VAR_2;
   return 1;
}
