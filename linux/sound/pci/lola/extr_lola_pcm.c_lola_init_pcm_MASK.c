
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lola_pcm {int num_streams; int * streams; } ;
struct lola {struct lola_pcm* pcm; } ;


 int FUNC_0 (struct lola*,int *,int,int,int) ;

int FUNC_1(struct lola *VAR_0, int VAR_1, int *VAR_2)
{
 struct lola_pcm *VAR_3 = &VAR_0->pcm[VAR_1];
 int VAR_4, VAR_5, VAR_6;

 VAR_5 = *VAR_2;
 for (VAR_4 = 0; VAR_4 < VAR_3->num_streams; VAR_4++, VAR_5++) {
  VAR_6 = FUNC_0(VAR_0, &VAR_3->streams[VAR_4], VAR_4, VAR_5, VAR_1);
  if (VAR_6 < 0)
   return VAR_6;
 }
 *VAR_2 = VAR_5;
 return 0;
}
