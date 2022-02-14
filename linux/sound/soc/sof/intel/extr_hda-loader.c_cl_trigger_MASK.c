
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int code_loading; int waitq; } ;
struct hdac_stream {int index; int running; } ;
struct hdac_ext_stream {struct hdac_stream hstream; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hdac_stream*) ;
 int FUNC_1 (struct snd_sof_dev*,struct hdac_ext_stream*,int) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int,int,int) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_sof_dev *VAR_5,
        struct hdac_ext_stream *VAR_6, int VAR_7)
{
 struct hdac_stream *VAR_8 = &VAR_6->hstream;
 int VAR_9 = FUNC_0(VAR_8);


 switch (VAR_7) {
 case 128:
  FUNC_3(VAR_5->waitq, !VAR_5->code_loading,
       VAR_0);

  FUNC_2(VAR_5, VAR_1, VAR_3,
     1 << VAR_8->index,
     1 << VAR_8->index);

  FUNC_2(VAR_5, VAR_1,
     VAR_9,
     VAR_4 |
     VAR_2,
     VAR_4 |
     VAR_2);

  VAR_8->running = 1;
  return 0;
 default:
  return FUNC_1(VAR_5, VAR_6, VAR_7);
 }
}
