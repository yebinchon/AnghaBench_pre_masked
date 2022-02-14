
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sst_dsp {int spinlock; } ;
struct sst_byt_stream {int pdata; int (* notify_position ) (struct sst_byt_stream*,int ) ;int running; } ;
struct sst_byt {struct sst_dsp* dsp; } ;




 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct sst_byt*,int ) ;
 struct sst_byt_stream* FUNC_3 (struct sst_byt*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sst_dsp*,int ) ;
 int FUNC_7 (struct sst_byt_stream*,int ) ;

__attribute__((used)) static int FUNC_8(struct sst_byt *VAR_1,
     unsigned long *VAR_2)
{
 struct sst_dsp *VAR_3 = VAR_1->dsp;
 struct sst_byt_stream *VAR_4;
 u64 VAR_5;
 u8 VAR_6, VAR_7;

 VAR_5 = FUNC_6(VAR_3, VAR_0);
 VAR_6 = FUNC_4(VAR_5);

 switch (VAR_6) {
 case 128:
  VAR_7 = FUNC_5(VAR_5);
  VAR_4 = FUNC_3(VAR_1, VAR_7);
  if (VAR_4 && VAR_4->running && VAR_4->notify_position) {
   FUNC_1(&VAR_3->spinlock, *VAR_2);
   VAR_4->notify_position(VAR_4, VAR_4->pdata);
   FUNC_0(&VAR_3->spinlock, *VAR_2);
  }
  break;
 case 129:
  FUNC_2(VAR_1, VAR_5);
  break;
 }

 return 1;
}
