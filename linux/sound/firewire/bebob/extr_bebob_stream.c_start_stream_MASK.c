
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int channel; } ;
struct cmp_connection {int speed; TYPE_1__ resources; } ;
struct amdtp_stream {int dummy; } ;
struct snd_bebob {int domain; int * maudio_special_quirk; struct cmp_connection out_conn; struct cmp_connection in_conn; struct amdtp_stream rx_stream; } ;


 int FUNC_0 (int *,struct amdtp_stream*,int ,int ) ;
 int FUNC_1 (struct snd_bebob*,struct amdtp_stream*) ;

__attribute__((used)) static int
FUNC_2(struct snd_bebob *VAR_0, struct amdtp_stream *VAR_1)
{
 struct cmp_connection *VAR_2;
 int VAR_3 = 0;

 if (VAR_1 == &VAR_0->rx_stream)
  VAR_2 = &VAR_0->in_conn;
 else
  VAR_2 = &VAR_0->out_conn;


 if (VAR_0->maudio_special_quirk == ((void*)0)) {
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  if (VAR_3 < 0)
   goto end;
 }


 VAR_3 = FUNC_0(&VAR_0->domain, VAR_1,
          VAR_2->resources.channel, VAR_2->speed);
end:
 return VAR_3;
}
