
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sst_byt_stream {int running; } ;
struct sst_byt {int dummy; } ;
struct TYPE_2__ {int header; } ;
struct ipc_message {TYPE_1__ tx; } ;







 struct sst_byt_stream* FUNC_0 (struct sst_byt*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sst_byt *VAR_0, struct ipc_message *VAR_1)
{
 struct sst_byt_stream *VAR_2;
 u64 VAR_3 = VAR_1->tx.header;
 u8 VAR_4 = FUNC_2(VAR_3);
 u8 VAR_5 = FUNC_1(VAR_3);

 VAR_2 = FUNC_0(VAR_0, VAR_4);
 if (VAR_2 == ((void*)0))
  return;

 switch (VAR_5) {
 case 132:
 case 130:
 case 131:
  VAR_2->running = 0;
  break;
 case 128:
 case 129:
  VAR_2->running = 1;
  break;
 }
}
