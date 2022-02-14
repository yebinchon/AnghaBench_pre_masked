
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int client; } ;
struct TYPE_4__ {scalar_t__ client; int port; } ;
struct snd_seq_event {scalar_t__ type; TYPE_1__ dest; TYPE_2__ source; } ;
struct snd_seq_dummy_port {int client; int port; int connect; scalar_t__ duplex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct snd_seq_event*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct snd_seq_event *VAR_3, int VAR_4, void *VAR_5,
     int VAR_6, int VAR_7)
{
 struct snd_seq_dummy_port *VAR_8;
 struct snd_seq_event VAR_9;

 VAR_8 = VAR_5;
 if (VAR_3->source.client == VAR_1 ||
     VAR_3->type == VAR_2)
  return 0;
 VAR_9 = *VAR_3;
 if (VAR_8->duplex)
  VAR_9.source.port = VAR_8->connect;
 else
  VAR_9.source.port = VAR_8->port;
 VAR_9.dest.client = VAR_0;
 return FUNC_0(VAR_8->client, &VAR_9, VAR_6, VAR_7);
}
