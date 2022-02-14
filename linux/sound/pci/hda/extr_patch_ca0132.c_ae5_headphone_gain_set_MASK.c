
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int dummy; } ;
struct TYPE_2__ {int * vals; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_1, long VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  FUNC_0(VAR_1, 0x48, 0x11 + VAR_3,
    VAR_0[VAR_2].vals[VAR_3]);
 return 0;
}
