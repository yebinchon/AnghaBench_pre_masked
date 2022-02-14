
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memhdr {int size; int block; int block_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct snd_util_memhdr* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct snd_util_memhdr *
FUNC_3(int VAR_1)
{
 struct snd_util_memhdr *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_2->size = VAR_1;
 FUNC_2(&VAR_2->block_mutex);
 FUNC_0(&VAR_2->block);

 return VAR_2;
}
