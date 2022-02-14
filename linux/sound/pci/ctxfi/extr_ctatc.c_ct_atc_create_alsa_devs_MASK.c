
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ct_atc {TYPE_1__* card; int chip_name; } ;
typedef enum CTALSADEVS { ____Placeholder_CTALSADEVS } CTALSADEVS ;
struct TYPE_4__ {int (* create ) (struct ct_atc*,int,int ) ;int public_name; } ;
struct TYPE_3__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ct_atc*,int,int ) ;

int FUNC_2(struct ct_atc *VAR_3)
{
 enum CTALSADEVS VAR_4;
 int VAR_5;

 VAR_2[VAR_0].public_name = VAR_3->chip_name;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (!VAR_2[VAR_4].create)
   continue;

  VAR_5 = VAR_2[VAR_4].create(VAR_3, VAR_4,
    VAR_2[VAR_4].public_name);
  if (VAR_5) {
   FUNC_0(VAR_3->card->dev,
    "Creating alsa device %d failed!\n", VAR_4);
   return VAR_5;
  }
 }

 return 0;
}
