
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmp_connection {scalar_t__ direction; int pcr_index; } ;
struct amdtp_stream {int dummy; } ;
struct snd_oxfw {TYPE_1__* unit; struct cmp_connection in_conn; struct cmp_connection out_conn; struct amdtp_stream tx_stream; } ;
struct TYPE_2__ {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdtp_stream*) ;
 int FUNC_1 (struct cmp_connection*,int*) ;
 int FUNC_2 (int *,char*,char,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_oxfw *VAR_2,
        struct amdtp_stream *VAR_3)
{
 struct cmp_connection *VAR_4;
 bool VAR_5;
 int VAR_6;

 if (VAR_3 == &VAR_2->tx_stream)
  VAR_4 = &VAR_2->out_conn;
 else
  VAR_4 = &VAR_2->in_conn;

 VAR_6 = FUNC_1(VAR_4, &VAR_5);
 if ((VAR_6 >= 0) && VAR_5 && !FUNC_0(VAR_3)) {
  FUNC_2(&VAR_2->unit->device,
   "Connection established by others: %cPCR[%d]\n",
   (VAR_4->direction == VAR_0) ? 'o' : 'i',
   VAR_4->pcr_index);
  VAR_6 = -VAR_1;
 }

 return VAR_6;
}
