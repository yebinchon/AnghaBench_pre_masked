
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int io_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int,unsigned int*) ;
 int FUNC_3 (struct snd_soc_component*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(
 struct snd_soc_component *VAR_0, unsigned int VAR_1,
 unsigned int VAR_2, unsigned int VAR_3, bool *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 FUNC_0(&VAR_0->io_mutex);

 VAR_7 = FUNC_2(VAR_0, VAR_1, &VAR_5);
 if (VAR_7 < 0)
  goto out_unlock;

 VAR_6 = (VAR_5 & ~VAR_2) | (VAR_3 & VAR_2);
 *VAR_4 = VAR_5 != VAR_6;
 if (*VAR_4)
  VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_6);
out_unlock:
 FUNC_1(&VAR_0->io_mutex);

 return VAR_7;
}
