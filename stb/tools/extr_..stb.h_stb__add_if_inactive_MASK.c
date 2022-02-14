
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int stb_uint16 ;
struct TYPE_5__ {TYPE_1__* nodes; } ;
typedef TYPE_2__ stb_matcher ;
struct TYPE_4__ {int active; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static stb_uint16 * FUNC_1(stb_matcher *VAR_0, stb_uint16 *VAR_1, int VAR_2)
{
   if (!VAR_0->nodes[VAR_2].active) {
      FUNC_0(VAR_1, VAR_2);
      VAR_0->nodes[VAR_2].active = 1;
   }
   return VAR_1;
}
