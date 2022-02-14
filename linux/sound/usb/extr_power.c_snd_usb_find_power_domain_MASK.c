
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_interface {int extralen; int extra; } ;
struct uac3_power_domain_descriptor {int bNrEntities; unsigned char* baEntityID; int waRecoveryTime2; int waRecoveryTime1; int bPowerDomainID; } ;
struct snd_usb_power_domain {void* pd_d2d0_rec; void* pd_d1d0_rec; int pd_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_usb_power_domain*) ;
 struct snd_usb_power_domain* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ,void*,int ) ;
 int FUNC_4 (void*,int ) ;

struct snd_usb_power_domain *
FUNC_5(struct usb_host_interface *VAR_3,
     unsigned char VAR_4)
{
 struct snd_usb_power_domain *VAR_5;
 void *VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = ((void*)0);
 while ((VAR_6 = FUNC_3(VAR_3->extra,
         VAR_3->extralen,
         VAR_6, VAR_1)) != ((void*)0)) {
  struct uac3_power_domain_descriptor *VAR_7 = VAR_6;
  int VAR_8;

  if (!FUNC_4(VAR_6, VAR_2))
   continue;
  for (VAR_8 = 0; VAR_8 < VAR_7->bNrEntities; VAR_8++) {
   if (VAR_7->baEntityID[VAR_8] == VAR_4) {
    VAR_5->pd_id = VAR_7->bPowerDomainID;
    VAR_5->pd_d1d0_rec =
     FUNC_2(VAR_7->waRecoveryTime1);
    VAR_5->pd_d2d0_rec =
     FUNC_2(VAR_7->waRecoveryTime2);
    return VAR_5;
   }
  }
 }

 FUNC_0(VAR_5);
 return ((void*)0);
}
