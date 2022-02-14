
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_tplg {int dev; scalar_t__ pos; } ;
struct TYPE_6__ {int list; } ;
struct soc_bytes_ext {long private_value; struct soc_bytes_ext* name; TYPE_2__ dobj; int max; int access; int iface; } ;
struct snd_soc_tplg_ctl_hdr {int dummy; } ;
struct TYPE_7__ {int name; int access; } ;
struct TYPE_5__ {int size; } ;
struct snd_soc_tplg_bytes_control {TYPE_3__ hdr; int max; TYPE_1__ priv; } ;
struct snd_kcontrol_new {long private_value; struct snd_kcontrol_new* name; TYPE_2__ dobj; int max; int access; int iface; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 struct soc_bytes_ext* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct soc_bytes_ext*) ;
 struct soc_bytes_ext* FUNC_5 (int ,int ) ;
 struct soc_bytes_ext* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct soc_tplg*,TYPE_3__*,int ) ;
 int FUNC_9 (struct soc_tplg*,struct soc_bytes_ext*,struct snd_soc_tplg_ctl_hdr*) ;
 int FUNC_10 (TYPE_3__*,struct soc_bytes_ext*,struct soc_tplg*) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static struct snd_kcontrol_new *FUNC_12(
 struct soc_tplg *VAR_3, int VAR_4)
{
 struct snd_soc_tplg_bytes_control *VAR_5;
 struct soc_bytes_ext *VAR_6;
 struct snd_kcontrol_new *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_3(VAR_4, sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_5 = (struct snd_soc_tplg_bytes_control *)VAR_3->pos;


  if (FUNC_11(VAR_5->hdr.name, VAR_1) ==
   VAR_1)
   goto err_sbe;

  VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_0);
  if (VAR_6 == ((void*)0))
   goto err_sbe;

  VAR_3->pos += (sizeof(struct snd_soc_tplg_bytes_control) +
         FUNC_7(VAR_5->priv.size));

  FUNC_1(VAR_3->dev,
   "ASoC: adding bytes kcontrol %s with access 0x%x\n",
   VAR_5->hdr.name, VAR_5->hdr.access);

  VAR_7[VAR_8].private_value = (long)VAR_6;
  VAR_7[VAR_8].name = FUNC_5(VAR_5->hdr.name, VAR_0);
  if (VAR_7[VAR_8].name == ((void*)0))
   goto err_sbe;
  VAR_7[VAR_8].iface = VAR_2;
  VAR_7[VAR_8].access = VAR_5->hdr.access;

  VAR_6->max = VAR_5->max;
  FUNC_0(&VAR_6->dobj.list);


  VAR_9 = FUNC_10(&VAR_5->hdr, &VAR_7[VAR_8], VAR_3);
  if (VAR_9) {
   FUNC_8(VAR_3, &VAR_5->hdr, VAR_5->hdr.name);
   goto err_sbe;
  }


  VAR_9 = FUNC_9(VAR_3, &VAR_7[VAR_8],
   (struct snd_soc_tplg_ctl_hdr *)VAR_5);
  if (VAR_9 < 0) {
   FUNC_2(VAR_3->dev, "ASoC: failed to init %s\n",
    VAR_5->hdr.name);
   goto err_sbe;
  }
 }

 return VAR_7;

err_sbe:
 for (; VAR_8 >= 0; VAR_8--) {
  VAR_6 = (struct soc_bytes_ext *)VAR_7[VAR_8].private_value;
  FUNC_4(VAR_6);
  FUNC_4(VAR_7[VAR_8].name);
 }
 FUNC_4(VAR_7);

 return ((void*)0);
}
