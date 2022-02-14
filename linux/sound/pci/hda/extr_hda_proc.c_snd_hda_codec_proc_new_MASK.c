
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct hda_codec {int card; TYPE_1__ core; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct hda_codec*,int ) ;
 int FUNC_1 (char*,int,char*,int) ;

int FUNC_2(struct hda_codec *VAR_1)
{
 char VAR_2[32];

 FUNC_1(VAR_2, sizeof(VAR_2), "codec#%d", VAR_1->core.addr);
 return FUNC_0(VAR_1->card, VAR_2, VAR_1, VAR_0);
}
