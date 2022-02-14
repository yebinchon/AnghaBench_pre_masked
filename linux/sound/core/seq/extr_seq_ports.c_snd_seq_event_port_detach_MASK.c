
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; int port; } ;
struct snd_seq_port_info {TYPE_1__ addr; } ;
typedef int portinfo ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_port_info*,int ,int) ;
 int FUNC_1 (int,int ,struct snd_seq_port_info*) ;

int FUNC_2(int VAR_1, int VAR_2)
{
 struct snd_seq_port_info VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.addr.client = VAR_1;
 VAR_3.addr.port = VAR_2;
 VAR_4 = FUNC_1(VAR_1,
     VAR_0,
     &VAR_3);

 return VAR_4;
}
