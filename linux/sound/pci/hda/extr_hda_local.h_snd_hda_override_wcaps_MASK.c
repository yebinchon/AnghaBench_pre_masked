
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ start_nid; scalar_t__ num_nodes; } ;
struct hda_codec {TYPE_1__ core; int * wcaps; } ;
typedef scalar_t__ hda_nid_t ;



__attribute__((used)) static inline void FUNC_0(struct hda_codec *VAR_0,
       hda_nid_t VAR_1, u32 VAR_2)
{
 if (VAR_1 >= VAR_0->core.start_nid &&
     VAR_1 < VAR_0->core.start_nid + VAR_0->core.num_nodes)
  VAR_0->wcaps[VAR_1 - VAR_0->core.start_nid] = VAR_2;
}
