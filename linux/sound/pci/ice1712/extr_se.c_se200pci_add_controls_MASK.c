
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p; } ;
struct snd_kcontrol_new {int private_value; int put; int get; int info; TYPE_1__ tlv; int access; int name; int iface; } ;
struct snd_ice1712 {int card; } ;
typedef int cont ;
struct TYPE_5__ {int type; int name; } ;


 int FUNC_0 (TYPE_2__*) ;

 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct snd_kcontrol_new*,int ,int) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct snd_kcontrol_new*,struct snd_ice1712*) ;

__attribute__((used)) static int FUNC_5(struct snd_ice1712 *VAR_16)
{
 int VAR_17;
 struct snd_kcontrol_new VAR_18;
 int VAR_19;

 FUNC_1(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.iface = VAR_3;
 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_6); VAR_17++) {
  VAR_18.private_value = VAR_17;
  VAR_18.name = VAR_6[VAR_17].name;
  VAR_18.access = VAR_1;
  VAR_18.tlv.p = ((void*)0);
  switch (VAR_6[VAR_17].type) {
  case 129:
  case 128:
   VAR_18.info = VAR_14;
   VAR_18.get = VAR_13;
   VAR_18.put = VAR_15;
   VAR_18.access |= VAR_2;
   if (VAR_6[VAR_17].type == 129)
    VAR_18.tlv.p = VAR_4;
   else
    VAR_18.tlv.p = VAR_5;
   break;
  case 131:
   VAR_18.info = VAR_8;
   VAR_18.get = VAR_7;
   VAR_18.put = VAR_9;
   break;
  case 130:
   VAR_18.info = VAR_11;
   VAR_18.get = VAR_10;
   VAR_18.put = VAR_12;
   break;
  default:
   FUNC_2();
   return -VAR_0;
  }
  VAR_19 = FUNC_3(VAR_16->card, FUNC_4(&VAR_18, VAR_16));
  if (VAR_19 < 0)
   return VAR_19;
 }

 return 0;
}
