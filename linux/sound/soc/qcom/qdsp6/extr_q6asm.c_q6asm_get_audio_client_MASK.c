
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6asm {int slock; struct audio_client** session; int dev; } ;
struct audio_client {int session; int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct audio_client *FUNC_4(struct q6asm *VAR_1,
         int VAR_2)
{
 struct audio_client *VAR_3 = ((void*)0);
 unsigned long VAR_4;

 FUNC_2(&VAR_1->slock, VAR_4);
 if ((VAR_2 <= 0) || (VAR_2 > VAR_0)) {
  FUNC_0(VAR_1->dev, "invalid session: %d\n", VAR_2);
  goto err;
 }


 if (!VAR_1->session[VAR_2])
  goto err;
 else if (VAR_1->session[VAR_2]->session != VAR_2)
  goto err;

 VAR_3 = VAR_1->session[VAR_2];
 FUNC_1(&VAR_3->refcount);
err:
 FUNC_3(&VAR_1->slock, VAR_4);
 return VAR_3;
}
