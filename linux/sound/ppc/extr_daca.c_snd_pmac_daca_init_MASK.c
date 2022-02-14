
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {int resume; TYPE_2__* card; int mixer_free; struct pmac_daca* mixer_data; } ;
struct TYPE_3__ {char* name; int init_client; int addr; } ;
struct pmac_daca {int amp_on; TYPE_1__ i2c; } ;
struct TYPE_4__ {int mixername; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 struct pmac_daca* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,struct snd_pmac*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(struct snd_pmac *VAR_7)
{
 int VAR_8, VAR_9;
 struct pmac_daca *VAR_10;

 FUNC_2("i2c-powermac");

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (! VAR_10)
  return -VAR_1;
 VAR_7->mixer_data = VAR_10;
 VAR_7->mixer_free = VAR_3;
 VAR_10->amp_on = 1;

 VAR_10->i2c.addr = VAR_0;
 VAR_10->i2c.init_client = VAR_4;
 VAR_10->i2c.name = "DACA";
 if ((VAR_9 = FUNC_5(&VAR_10->i2c)) < 0)
  return VAR_9;




 FUNC_6(VAR_7->card->mixername, "PowerMac DACA");

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  if ((VAR_9 = FUNC_3(VAR_7->card, FUNC_4(&VAR_5[VAR_8], VAR_7))) < 0)
   return VAR_9;
 }





 return 0;
}
