
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int channel; } ;
struct cmp_connection {int speed; TYPE_1__ resources; } ;
struct amdtp_stream {int dummy; } ;
struct snd_efw {int domain; struct cmp_connection in_conn; struct cmp_connection out_conn; struct amdtp_stream tx_stream; } ;


 int FUNC_0 (int *,struct amdtp_stream*,int ,int ) ;
 int FUNC_1 (struct cmp_connection*) ;
 int FUNC_2 (struct cmp_connection*) ;

__attribute__((used)) static int FUNC_3(struct snd_efw *VAR_0, struct amdtp_stream *VAR_1,
   unsigned int VAR_2)
{
 struct cmp_connection *VAR_3;
 int VAR_4;

 if (VAR_1 == &VAR_0->tx_stream)
  VAR_3 = &VAR_0->out_conn;
 else
  VAR_3 = &VAR_0->in_conn;


 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_0(&VAR_0->domain, VAR_1,
          VAR_3->resources.channel, VAR_3->speed);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3);
  return VAR_4;
 }

 return 0;
}
