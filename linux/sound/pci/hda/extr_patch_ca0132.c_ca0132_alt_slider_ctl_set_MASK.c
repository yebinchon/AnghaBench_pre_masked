
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_2__ {scalar_t__ nid; int * reqs; int mid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct hda_codec*,int ,int,int ,unsigned int const*,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_4, hda_nid_t VAR_5,
     const unsigned int *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9;




 if (VAR_5 == VAR_2)
  VAR_9 = 2;
 else
  VAR_9 = 1;

 FUNC_2(VAR_4);
 if (VAR_5 == VAR_1) {
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   if (VAR_3[VAR_8].nid == VAR_2)
    break;

  FUNC_0(VAR_4, VAR_3[VAR_8].mid, 0x20,
    VAR_3[VAR_8].reqs[1],
    &(VAR_6[VAR_7 - 1]), sizeof(unsigned int));
 } else {

  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   if (VAR_5 == VAR_3[VAR_8].nid)
    break;

  FUNC_0(VAR_4, VAR_3[VAR_8].mid, 0x20,
    VAR_3[VAR_8].reqs[VAR_9],
    &(VAR_6[VAR_7]), sizeof(unsigned int));
 }

 FUNC_1(VAR_4);

 return 0;
}
