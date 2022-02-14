
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cmi8330 {scalar_t__ type; int sb; int wss; } ;
struct snd_card {int mixername; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_card *VAR_2, struct snd_cmi8330 *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 FUNC_4(VAR_2->mixername, (VAR_3->type == VAR_0) ? "CMI8329" : "CMI8330/C3D");

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_5 = FUNC_2(VAR_2,
    FUNC_3(&VAR_1[VAR_4],
          VAR_3->wss));
  if (VAR_5 < 0)
   return VAR_5;
 }





 return 0;
}
