
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int start; } ;
struct sw_flow_mask {int key; TYPE_1__ range; } ;
struct sw_flow_key {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct sw_flow_key *VAR_0, const struct sw_flow_key *VAR_1,
         bool VAR_2, const struct sw_flow_mask *VAR_3)
{
 int VAR_4 = VAR_2 ? 0 : VAR_3->range.start;
 int VAR_5 = VAR_2 ? sizeof *VAR_0 : FUNC_0(&VAR_3->range);
 const long *VAR_6 = (const long *)((const u8 *)&VAR_3->key + VAR_4);
 const long *VAR_7 = (const long *)((const u8 *)VAR_1 + VAR_4);
 long *VAR_8 = (long *)((u8 *)VAR_0 + VAR_4);
 int VAR_9;






 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 += sizeof(long))
  *VAR_8++ = *VAR_7++ & *VAR_6++;
}
