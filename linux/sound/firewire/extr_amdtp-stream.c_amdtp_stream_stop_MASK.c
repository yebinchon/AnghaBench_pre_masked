
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int callbacked; int mutex; int pkt_descs; int unit; int buffer; int context; int period_tasklet; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct amdtp_stream*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct amdtp_stream *VAR_0)
{
 FUNC_6(&VAR_0->mutex);

 if (!FUNC_1(VAR_0)) {
  FUNC_7(&VAR_0->mutex);
  return;
 }

 FUNC_8(&VAR_0->period_tasklet);
 FUNC_3(VAR_0->context);
 FUNC_2(VAR_0->context);
 VAR_0->context = FUNC_0(-1);
 FUNC_4(&VAR_0->buffer, VAR_0->unit);
 FUNC_5(VAR_0->pkt_descs);

 VAR_0->callbacked = 0;

 FUNC_7(&VAR_0->mutex);
}
