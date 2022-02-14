
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ c; int* p; } ;
struct TYPE_4__ {int name; int index; } ;
struct snd_kcontrol {TYPE_3__ tlv; TYPE_2__* vd; TYPE_1__ id; } ;
struct slave_init_arg {int step; int codec; } ;
struct TYPE_5__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct snd_kcontrol*,int*) ;
 int FUNC_2 (struct snd_kcontrol*,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_8,
     struct snd_kcontrol *VAR_9,
     void *VAR_10)
{
 struct slave_init_arg *VAR_11 = VAR_10;
 int VAR_12[4];
 const int *VAR_13 = ((void*)0);
 int VAR_14;
 int VAR_15;

 if (VAR_9->vd[0].access & VAR_0) {
  if (VAR_9->tlv.c != VAR_7) {
   FUNC_0(VAR_11->codec,
      "Unexpected TLV callback for slave %s:%d\n",
      VAR_9->id.name, VAR_9->id.index);
   return 0;
  }
  FUNC_1(VAR_9, VAR_12);
  VAR_13 = VAR_12;
 } else if (VAR_9->vd[0].access & VAR_1)
  VAR_13 = VAR_9->tlv.p;

 if (!VAR_13 || VAR_13[VAR_4] != VAR_5)
  return 0;

 VAR_14 = VAR_13[VAR_3];
 VAR_14 &= ~VAR_6;
 if (!VAR_14)
  return 0;
 if (VAR_11->step && VAR_11->step != VAR_14) {
  FUNC_0(VAR_11->codec,
     "Mismatching dB step for vmaster slave (%d!=%d)\n",
     VAR_11->step, VAR_14);
  return 0;
 }

 VAR_11->step = VAR_14;
 VAR_15 = -VAR_13[VAR_2] / VAR_14;
 if (VAR_15 > 0) {
  FUNC_2(VAR_8, VAR_15);
  return VAR_15;
 }

 return 0;
}
