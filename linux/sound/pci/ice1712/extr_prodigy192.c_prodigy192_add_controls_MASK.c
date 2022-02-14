
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ice1712 {TYPE_2__* pcm; int card; struct prodigy192_spec* spec; } ;
struct prodigy192_spec {scalar_t__ ak4114; } ;
struct TYPE_4__ {TYPE_1__* streams; } ;
struct TYPE_3__ {int substream; } ;


 unsigned int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct snd_ice1712*) ;
 int FUNC_4 (struct snd_ice1712*) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_5(struct snd_ice1712 *VAR_3)
{
 struct prodigy192_spec *VAR_4 = VAR_3->spec;
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  VAR_6 = FUNC_2(VAR_3->card,
      FUNC_3(&VAR_2[VAR_5], VAR_3));
  if (VAR_6 < 0)
   return VAR_6;
 }
 if (VAR_4->ak4114) {

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
   VAR_6 = FUNC_2(VAR_3->card,
       FUNC_3(&VAR_1[VAR_5],
             VAR_3));
   if (VAR_6 < 0)
    return VAR_6;
  }
  VAR_6 = FUNC_1(VAR_4->ak4114,
    ((void*)0),
    VAR_3->pcm->streams[VAR_0].substream);
  if (VAR_6 < 0)
   return VAR_6;
 }
 FUNC_4(VAR_3);
 return 0;
}
