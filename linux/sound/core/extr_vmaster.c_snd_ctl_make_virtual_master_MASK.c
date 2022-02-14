
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol_new {char* name; void* info; int iface; } ;
struct TYPE_4__ {int p; } ;
struct snd_kcontrol {TYPE_2__ tlv; TYPE_1__* vd; int private_free; int put; int get; void* info; } ;
struct link_master {int tlv; int slaves; } ;
typedef int knew ;
struct TYPE_3__ {int access; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct link_master*) ;
 struct link_master* FUNC_2 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,unsigned int const*,int) ;
 int FUNC_4 (struct snd_kcontrol_new*,int ,int) ;
 struct snd_kcontrol* FUNC_5 (struct snd_kcontrol_new*,struct link_master*) ;

struct snd_kcontrol *FUNC_6(char *VAR_11,
       const unsigned int *VAR_12)
{
 struct link_master *VAR_13;
 struct snd_kcontrol *VAR_14;
 struct snd_kcontrol_new VAR_15;

 FUNC_4(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.iface = VAR_2;
 VAR_15.name = VAR_11;
 VAR_15.info = VAR_9;

 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_0);
 if (!VAR_13)
  return ((void*)0);
 FUNC_0(&VAR_13->slaves);

 VAR_14 = FUNC_5(&VAR_15, VAR_13);
 if (!VAR_14) {
  FUNC_1(VAR_13);
  return ((void*)0);
 }

 VAR_14->info = VAR_9;
 VAR_14->get = VAR_8;
 VAR_14->put = VAR_10;
 VAR_14->private_free = VAR_7;


 if (VAR_12) {
  unsigned int VAR_16 = VAR_12[VAR_3];
  if (VAR_16 == VAR_6 ||
      VAR_16 == VAR_4 ||
      VAR_16 == VAR_5) {
   VAR_14->vd[0].access |= VAR_1;
   FUNC_3(VAR_13->tlv, VAR_12, sizeof(VAR_13->tlv));
   VAR_14->tlv.p = VAR_13->tlv;
  }
 }

 return VAR_14;
}
