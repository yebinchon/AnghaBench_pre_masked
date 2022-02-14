
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_card {char* driver; char* shortname; struct aaci* private_data; int longname; int private_free; } ;
struct TYPE_2__ {scalar_t__ start; } ;
struct amba_device {int * irq; TYPE_1__ res; int dev; } ;
struct aaci {int maincr; struct amba_device* dev; struct snd_card* card; int irq_lock; int ac97_sem; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct amba_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ,int,struct snd_card**) ;
 int FUNC_4 (int ,int,char*,char*,int,int,unsigned long long,int ) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static struct aaci *FUNC_6(struct amba_device *VAR_10)
{
 struct aaci *VAR_11;
 struct snd_card *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(&VAR_10->dev, VAR_6, VAR_7,
      VAR_8, sizeof(struct aaci), &VAR_12);
 if (VAR_13 < 0)
  return ((void*)0);

 VAR_12->private_free = VAR_9;

 FUNC_5(VAR_12->driver, VAR_0, sizeof(VAR_12->driver));
 FUNC_5(VAR_12->shortname, "ARM AC'97 Interface", sizeof(VAR_12->shortname));
 FUNC_4(VAR_12->longname, sizeof(VAR_12->longname),
   "%s PL%03x rev%u at 0x%08llx, irq %d",
   VAR_12->shortname, FUNC_0(VAR_10), FUNC_1(VAR_10),
   (unsigned long long)VAR_10->res.start, VAR_10->irq[0]);

 VAR_11 = VAR_12->private_data;
 FUNC_2(&VAR_11->ac97_sem);
 FUNC_2(&VAR_11->irq_lock);
 VAR_11->card = VAR_12;
 VAR_11->dev = VAR_10;


 VAR_11->maincr = VAR_1 | VAR_2 | VAR_3 |
         VAR_4 | VAR_5;

 return VAR_11;
}
