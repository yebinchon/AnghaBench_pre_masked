
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ afg; } ;
struct hda_codec {TYPE_1__ core; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,scalar_t__,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct hda_codec *VAR_2,
            hda_nid_t VAR_3,
            unsigned int VAR_4)
{
 if (VAR_3 == VAR_2->core.afg && VAR_4 == VAR_1)
  return VAR_0;
 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
