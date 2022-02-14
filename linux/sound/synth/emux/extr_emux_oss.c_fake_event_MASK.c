
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channel; int param; int value; } ;
struct TYPE_3__ {TYPE_2__ control; } ;
struct snd_seq_event {TYPE_1__ data; int type; } ;
struct snd_emux_port {int dummy; } ;
struct snd_emux {int dummy; } ;
typedef int ev ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_event*,int ,int) ;
 int FUNC_1 (struct snd_seq_event*,int ,struct snd_emux_port*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct snd_emux *VAR_1, struct snd_emux_port *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct snd_seq_event VAR_8;
 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.type = VAR_0;
 VAR_8.data.control.channel = VAR_3;
 VAR_8.data.control.param = VAR_4;
 VAR_8.data.control.value = VAR_5;
 FUNC_1(&VAR_8, 0, VAR_2, VAR_6, VAR_7);
}
