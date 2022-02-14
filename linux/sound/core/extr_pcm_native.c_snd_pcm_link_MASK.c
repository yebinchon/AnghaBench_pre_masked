
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_group* group; TYPE_3__* pcm; TYPE_2__* runtime; } ;
struct snd_pcm_group {int refs; } ;
struct snd_pcm_file {struct snd_pcm_substream* substream; } ;
struct fd {TYPE_4__* file; } ;
struct TYPE_8__ {struct snd_pcm_file* private_data; } ;
struct TYPE_7__ {int nonatomic; } ;
struct TYPE_6__ {TYPE_1__* status; } ;
struct TYPE_5__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 struct fd FUNC_1 (int) ;
 int FUNC_2 (struct fd) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct snd_pcm_group*) ;
 struct snd_pcm_group* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct snd_pcm_substream*,struct snd_pcm_group*) ;
 int FUNC_8 (struct snd_pcm_group*) ;
 int FUNC_9 (struct snd_pcm_group*,int) ;
 int FUNC_10 (struct snd_pcm_group*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (struct snd_pcm_substream*) ;
 int FUNC_12 (struct snd_pcm_substream*) ;
 int FUNC_13 (struct snd_pcm_substream*) ;
 int FUNC_14 (struct snd_pcm_substream*) ;
 int FUNC_15 (struct snd_pcm_substream*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct snd_pcm_substream *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 struct snd_pcm_file *VAR_9;
 struct snd_pcm_substream *VAR_10;
 struct snd_pcm_group *VAR_11, *VAR_12;
 bool VAR_13 = VAR_6->pcm->nonatomic;
 struct fd VAR_14 = FUNC_1(VAR_7);

 if (!VAR_14.file)
  return -VAR_1;
 if (!FUNC_3(VAR_14.file)) {
  VAR_8 = -VAR_1;
  goto _badf;
 }
 VAR_9 = VAR_14.file->private_data;
 VAR_10 = VAR_9->substream;
 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_8 = -VAR_2;
  goto _nolock;
 }
 FUNC_8(VAR_11);

 FUNC_0(&VAR_5);
 if (VAR_6->runtime->status->state == VAR_4 ||
     VAR_6->runtime->status->state != VAR_10->runtime->status->state ||
     VAR_6->pcm->nonatomic != VAR_10->pcm->nonatomic) {
  VAR_8 = -VAR_1;
  goto _end;
 }
 if (FUNC_11(VAR_10)) {
  VAR_8 = -VAR_0;
  goto _end;
 }

 FUNC_13(VAR_6);
 if (!FUNC_11(VAR_6)) {
  FUNC_7(VAR_6, VAR_11);
  VAR_11 = ((void*)0);
 }
 VAR_12 = VAR_6->group;
 FUNC_15(VAR_6);

 FUNC_9(VAR_12, VAR_13);
 FUNC_12(VAR_10);
 FUNC_7(VAR_10, VAR_12);
 FUNC_6(&VAR_12->refs);
 FUNC_14(VAR_10);
 FUNC_10(VAR_12, VAR_13);
 _end:
 FUNC_16(&VAR_5);
 _nolock:
 FUNC_4(VAR_11);
 _badf:
 FUNC_2(VAR_14);
 return VAR_8;
}
