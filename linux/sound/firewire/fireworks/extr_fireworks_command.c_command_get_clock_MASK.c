
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {int dummy; } ;
struct efc_clock {int index; int sampling_rate; int source; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_efw*,int ,int ,int *,int ,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct snd_efw *VAR_2, struct efc_clock *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0,
         VAR_1,
         ((void*)0), 0,
         (__be32 *)VAR_3, sizeof(struct efc_clock));
 if (VAR_4 >= 0) {
  FUNC_0(&VAR_3->source);
  FUNC_0(&VAR_3->sampling_rate);
  FUNC_0(&VAR_3->index);
 }

 return VAR_4;
}
