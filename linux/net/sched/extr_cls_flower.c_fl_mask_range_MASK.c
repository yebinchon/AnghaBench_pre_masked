
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short end; unsigned short start; } ;
struct fl_flow_mask {TYPE_1__ range; } ;



__attribute__((used)) static unsigned short int FUNC_0(const struct fl_flow_mask *VAR_0)
{
 return VAR_0->range.end - VAR_0->range.start;
}
