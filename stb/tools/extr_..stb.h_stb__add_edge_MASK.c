
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int stb_uint16 ;
struct TYPE_8__ {int member_1; int member_0; } ;
typedef TYPE_2__ stb_nfa_edge ;
struct TYPE_9__ {TYPE_1__* nodes; } ;
typedef TYPE_3__ stb_matcher ;
typedef int stb_int16 ;
struct TYPE_7__ {int * out; } ;


 int FUNC_0 (void**,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_2__) ;

__attribute__((used)) static void FUNC_2(stb_matcher *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    stb_nfa_edge VAR_4 = { (stb_int16)VAR_3, (stb_uint16)VAR_2 };
   if (VAR_0->nodes[VAR_1].out == ((void*)0))
      FUNC_0((void **) &VAR_0->nodes[VAR_1].out, VAR_0);
   FUNC_1(VAR_0->nodes[VAR_1].out, VAR_4);
}
