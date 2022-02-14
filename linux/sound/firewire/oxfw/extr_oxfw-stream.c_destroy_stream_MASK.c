
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmp_connection {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct snd_oxfw {struct cmp_connection in_conn; struct cmp_connection out_conn; struct amdtp_stream tx_stream; } ;


 int FUNC_0 (struct amdtp_stream*) ;
 int FUNC_1 (struct cmp_connection*) ;

__attribute__((used)) static void FUNC_2(struct snd_oxfw *VAR_0, struct amdtp_stream *VAR_1)
{
 struct cmp_connection *VAR_2;

 if (VAR_1 == &VAR_0->tx_stream)
  VAR_2 = &VAR_0->out_conn;
 else
  VAR_2 = &VAR_0->in_conn;

 FUNC_0(VAR_1);
 FUNC_1(VAR_2);
}
