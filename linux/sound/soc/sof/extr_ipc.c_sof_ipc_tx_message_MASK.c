
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_ipc {int tx_mutex; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_sof_ipc*,int ,void*,size_t,void*,size_t) ;

int FUNC_3(struct snd_sof_ipc *VAR_2, u32 VAR_3,
         void *VAR_4, size_t VAR_5, void *VAR_6,
         size_t VAR_7)
{
 int VAR_8;

 if (VAR_5 > VAR_1 ||
     VAR_7 > VAR_1)
  return -VAR_0;


 FUNC_0(&VAR_2->tx_mutex);

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_6, VAR_7);

 FUNC_1(&VAR_2->tx_mutex);

 return VAR_8;
}
