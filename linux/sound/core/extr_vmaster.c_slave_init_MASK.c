
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int max; int min; } ;
struct TYPE_7__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; int id; } ;
struct TYPE_5__ {int count; int max_val; int min_val; int type; } ;
struct TYPE_8__ {int (* info ) (TYPE_4__*,struct snd_ctl_elem_info*) ;int id; } ;
struct link_slave {int flags; TYPE_1__ info; TYPE_4__ slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_ctl_elem_info*) ;
 struct snd_ctl_elem_info* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct link_slave*) ;
 int FUNC_4 (TYPE_4__*,struct snd_ctl_elem_info*) ;

__attribute__((used)) static int FUNC_5(struct link_slave *VAR_6)
{
 struct snd_ctl_elem_info *VAR_7;
 int VAR_8;

 if (VAR_6->info.count) {

  if (VAR_6->flags & VAR_5)
   return FUNC_3(VAR_6);
  return 0;
 }

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_7->id = VAR_6->slave.id;
 VAR_8 = VAR_6->slave.info(&VAR_6->slave, VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7);
  return VAR_8;
 }
 VAR_6->info.type = VAR_7->type;
 VAR_6->info.count = VAR_7->count;
 if (VAR_6->info.count > 2 ||
     (VAR_6->info.type != VAR_4 &&
      VAR_6->info.type != VAR_3)) {
  FUNC_2("ALSA: vmaster: invalid slave element\n");
  FUNC_0(VAR_7);
  return -VAR_0;
 }
 VAR_6->info.min_val = VAR_7->value.integer.min;
 VAR_6->info.max_val = VAR_7->value.integer.max;
 FUNC_0(VAR_7);

 return FUNC_3(VAR_6);
}
