
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int put; int get; int max; } ;
struct wm_coeff_ctl {int type; TYPE_2__ bytes_ext; int len; int flags; scalar_t__ name; } ;
struct wm_adsp {int component; } ;
struct TYPE_3__ {int c; } ;
struct snd_kcontrol_new {unsigned long private_value; int access; int put; int get; TYPE_1__ tlv; int iface; int info; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (struct snd_kcontrol_new*) ;
 struct snd_kcontrol_new* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct snd_kcontrol_new*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct wm_adsp *VAR_13, struct wm_coeff_ctl *VAR_14)
{
 struct snd_kcontrol_new *VAR_15;
 int VAR_16;

 if (!VAR_14 || !VAR_14->name)
  return -VAR_0;

 VAR_15 = FUNC_1(sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->name = VAR_14->name;
 VAR_15->info = VAR_8;
 VAR_15->iface = VAR_4;
 VAR_15->tlv.c = VAR_5;
 VAR_15->private_value = (unsigned long)&VAR_14->bytes_ext;
 VAR_15->access = FUNC_3(VAR_14->flags, VAR_14->len);

 switch (VAR_14->type) {
 case 128:
  VAR_15->get = VAR_7;
  VAR_15->put = VAR_10;
  break;
 default:
  if (VAR_15->access & VAR_3) {
   VAR_14->bytes_ext.max = VAR_14->len;
   VAR_14->bytes_ext.get = VAR_11;
   VAR_14->bytes_ext.put = VAR_12;
  } else {
   VAR_15->get = VAR_6;
   VAR_15->put = VAR_9;
  }
  break;
 }

 VAR_16 = FUNC_2(VAR_13->component, VAR_15, 1);
 if (VAR_16 < 0)
  goto err_kcontrol;

 FUNC_0(VAR_15);

 return 0;

err_kcontrol:
 FUNC_0(VAR_15);
 return VAR_16;
}
