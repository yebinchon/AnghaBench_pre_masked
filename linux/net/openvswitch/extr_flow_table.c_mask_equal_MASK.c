
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int start; scalar_t__ end; } ;
struct sw_flow_mask {TYPE_1__ range; int key; } ;


 scalar_t__ FUNC_0 (int const*,int const*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(const struct sw_flow_mask *VAR_0,
         const struct sw_flow_mask *VAR_1)
{
 const u8 *VAR_2 = (const u8 *)&VAR_0->key + VAR_0->range.start;
 const u8 *VAR_3 = (const u8 *)&VAR_1->key + VAR_1->range.start;

 return (VAR_0->range.end == VAR_1->range.end)
  && (VAR_0->range.start == VAR_1->range.start)
  && (FUNC_0(VAR_2, VAR_3, FUNC_1(&VAR_0->range)) == 0);
}
