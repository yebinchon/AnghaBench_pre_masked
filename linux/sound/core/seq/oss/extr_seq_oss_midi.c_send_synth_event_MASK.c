
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int chn; int val; void* code; int p1; int cmd; } ;
struct TYPE_7__ {int dev; int chn; int parm; int note; int code; int cmd; } ;
union evrec {TYPE_3__ l; TYPE_1__ v; } ;
struct TYPE_12__ {int tick; } ;
struct TYPE_10__ {int channel; int value; int param; } ;
struct TYPE_8__ {int channel; int velocity; int note; } ;
struct TYPE_11__ {TYPE_4__ control; TYPE_2__ note; } ;
struct snd_seq_event {int type; TYPE_6__ time; TYPE_5__ data; } ;
struct seq_oss_devinfo {int readq; int seq_mode; } ;
typedef int ossev ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int FUNC_0 (union evrec*,int ,int) ;
 int FUNC_1 (int ,union evrec*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct seq_oss_devinfo *VAR_9, struct snd_seq_event *VAR_10, int VAR_11)
{
 union evrec VAR_12;

 FUNC_0(&VAR_12, 0, sizeof(VAR_12));

 switch (VAR_10->type) {
 case 130:
  VAR_12.v.cmd = VAR_6; break;
 case 131:
  VAR_12.v.cmd = VAR_5; break;
 case 132:
  VAR_12.v.cmd = VAR_4; break;
 case 133:
  VAR_12.l.cmd = VAR_3; break;
 case 129:
  VAR_12.l.cmd = VAR_7; break;
 case 134:
  VAR_12.l.cmd = VAR_2; break;
 case 128:
  VAR_12.l.cmd = VAR_8; break;
 default:
  return 0;
 }

 VAR_12.v.dev = VAR_11;

 switch (VAR_10->type) {
 case 130:
 case 131:
 case 132:
  VAR_12.v.code = VAR_1;
  VAR_12.v.note = VAR_10->data.note.note;
  VAR_12.v.parm = VAR_10->data.note.velocity;
  VAR_12.v.chn = VAR_10->data.note.channel;
  break;
 case 133:
 case 129:
 case 134:
  VAR_12.l.code = VAR_0;
  VAR_12.l.p1 = VAR_10->data.control.param;
  VAR_12.l.val = VAR_10->data.control.value;
  VAR_12.l.chn = VAR_10->data.control.channel;
  break;
 case 128:
  VAR_12.l.code = VAR_0;
  VAR_12.l.val = VAR_10->data.control.value + 8192;
  VAR_12.l.chn = VAR_10->data.control.channel;
  break;
 }

 FUNC_2(VAR_9->readq, VAR_10->time.tick, VAR_9->seq_mode);
 FUNC_1(VAR_9->readq, &VAR_12);

 return 0;
}
