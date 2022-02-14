
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int host_offset; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(struct snd_sof_dev *VAR_0,
         loff_t VAR_1, size_t VAR_2)
{
 loff_t VAR_3 = FUNC_0(VAR_0->host_offset);






 if (VAR_3 < VAR_1)
  return VAR_2 - VAR_1;


 if (VAR_3 > VAR_1)
  return VAR_3 - VAR_1;

 return 0;
}
