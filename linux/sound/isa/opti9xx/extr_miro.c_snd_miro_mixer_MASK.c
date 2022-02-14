
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_miro {int hardware; TYPE_1__* aci; } ;
struct snd_card {int mixername; } ;
struct TYPE_2__ {char aci_product; int aci_version; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;


 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_card*,int ) ;
 int FUNC_4 (int *,struct snd_miro*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct snd_card *VAR_8,
     struct snd_miro *VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 if (FUNC_2(!VAR_9 || !VAR_8))
  return -VAR_0;

 switch (VAR_9->hardware) {
 case 129:
  FUNC_5(VAR_8->mixername, "ACI & OPTi924");
  break;
 case 128:
  FUNC_5(VAR_8->mixername, "ACI & OPTi929");
  break;
 default:
  FUNC_1();
  break;
 }

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++) {
  if ((VAR_11 = FUNC_3(VAR_8, FUNC_4(&VAR_3[VAR_10], VAR_9))) < 0)
   return VAR_11;
 }

 if ((VAR_9->aci->aci_product == 'A') ||
     (VAR_9->aci->aci_product == 'B')) {

  if ((VAR_11 = FUNC_3(VAR_8, FUNC_4(&VAR_5[0], VAR_9))) < 0)
   return VAR_11;
  if ((VAR_11 = FUNC_3(VAR_8, FUNC_4(&VAR_1[0], VAR_9))) < 0)
   return VAR_11;
 }

 if ((VAR_9->aci->aci_product == 'B') ||
     (VAR_9->aci->aci_product == 'C')) {

  if ((VAR_11 = FUNC_3(VAR_8, FUNC_4(&VAR_6[0], VAR_9))) < 0)
   return VAR_11;
  if (VAR_9->aci->aci_version >= 176)
   if ((VAR_11 = FUNC_3(VAR_8, FUNC_4(&VAR_2[0], VAR_9))) < 0)
    return VAR_11;
 }

 if (VAR_9->aci->aci_product == 'C') {

  if ((VAR_11 = FUNC_3(VAR_8, FUNC_4(&VAR_7[0], VAR_9))) < 0)
   return VAR_11;
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++) {
   if ((VAR_11 = FUNC_3(VAR_8, FUNC_4(&VAR_4[VAR_10], VAR_9))) < 0)
    return VAR_11;
  }
 }

 return 0;
}
