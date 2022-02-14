
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u8 ;
struct TYPE_2__ {int start; } ;
struct fl_flow_mask {TYPE_1__ range; } ;
struct fl_flow_key {int dummy; } ;



__attribute__((used)) static void *FUNC_0(struct fl_flow_key *VAR_0,
         const struct fl_flow_mask *VAR_1)
{
 return (u8 *) VAR_0 + VAR_1->range.start;
}
