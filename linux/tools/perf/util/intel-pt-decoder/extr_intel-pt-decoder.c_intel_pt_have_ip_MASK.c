
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct intel_pt_decoder {TYPE_1__ packet; scalar_t__ have_last_ip; } ;



__attribute__((used)) static inline bool FUNC_0(struct intel_pt_decoder *VAR_0)
{
 return VAR_0->packet.count &&
        (VAR_0->have_last_ip || VAR_0->packet.count == 3 ||
  VAR_0->packet.count == 6);
}
