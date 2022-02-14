
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int stream_hw_id; } ;
struct sst_hsw_stream {int running; TYPE_1__ reply; } ;
struct sst_hsw {int dummy; } ;
struct TYPE_4__ {int header; } ;
struct ipc_message {TYPE_2__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;





 struct sst_hsw_stream* FUNC_0 (struct sst_hsw*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(struct sst_hsw *VAR_2, struct ipc_message *VAR_3)
{
 struct sst_hsw_stream *VAR_4;
 u32 VAR_5 = VAR_3->tx.header & ~(VAR_1 | VAR_0);
 u32 VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7 = FUNC_2(VAR_5);

 VAR_4 = FUNC_0(VAR_2, VAR_6);
 if (VAR_4 == ((void*)0))
  return;

 switch (VAR_7) {
 case 128:
 case 132:
  break;
 case 130:
  FUNC_3("stream reset", VAR_4->reply.stream_hw_id);
  break;
 case 131:
  VAR_4->running = 0;
  FUNC_3("stream paused",
   VAR_4->reply.stream_hw_id);
  break;
 case 129:
  VAR_4->running = 1;
  FUNC_3("stream running",
   VAR_4->reply.stream_hw_id);
  break;
 }
}
