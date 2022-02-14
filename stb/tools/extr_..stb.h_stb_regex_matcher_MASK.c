
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ stb_uint16 ;
struct TYPE_8__ {int match_start; TYPE_1__* nodes; int start_node; } ;
typedef TYPE_2__ stb_matcher ;
struct TYPE_7__ {int goal; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 char* FUNC_1 (TYPE_2__*,int ,char*,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*) ;

stb_matcher *FUNC_3(char *VAR_1)
{
   char *VAR_2;
   stb_uint16 VAR_3;
   stb_matcher *VAR_4 = FUNC_0();
   if (*VAR_1 == '^') {
      VAR_4->match_start = 1;
      ++VAR_1;
   }

   VAR_2 = FUNC_1(VAR_4, VAR_4->start_node, VAR_1, &VAR_3);

   if (!VAR_2 || *VAR_2) {
      FUNC_2(VAR_4);
      return ((void*)0);
   }

   ((VAR_4->nodes)[(int) VAR_3]).goal = VAR_0;

   return VAR_4;
}
