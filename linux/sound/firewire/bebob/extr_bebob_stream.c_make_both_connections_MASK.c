
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bebob {int out_conn; int in_conn; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_bebob *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_1(&VAR_0->out_conn);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_1(&VAR_0->in_conn);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->out_conn);
  return VAR_1;
 }

 return 0;
}
