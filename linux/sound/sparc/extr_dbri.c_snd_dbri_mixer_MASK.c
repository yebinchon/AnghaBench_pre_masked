
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_dbri {TYPE_1__* stream_info; } ;
struct snd_card {int shortname; int mixername; struct snd_dbri* private_data; } ;
struct TYPE_2__ {scalar_t__ right_gain; scalar_t__ left_gain; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (int *,struct snd_dbri*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_card *VAR_4)
{
 int VAR_5, VAR_6;
 struct snd_dbri *VAR_7;

 if (FUNC_1(!VAR_4 || !VAR_4->private_data))
  return -VAR_2;
 VAR_7 = VAR_4->private_data;

 FUNC_4(VAR_4->mixername, VAR_4->shortname);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  VAR_6 = FUNC_2(VAR_4,
    FUNC_3(&VAR_3[VAR_5], VAR_7));
  if (VAR_6 < 0)
   return VAR_6;
 }

 for (VAR_5 = VAR_1; VAR_5 < VAR_0; VAR_5++) {
  VAR_7->stream_info[VAR_5].left_gain = 0;
  VAR_7->stream_info[VAR_5].right_gain = 0;
 }

 return 0;
}
