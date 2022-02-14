
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dev_stream_map {int dev_num; int direction; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2, int VAR_3,
 struct sst_dev_stream_map *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_4 == ((void*)0))
  return -VAR_0;



 for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++) {
  if ((VAR_4[VAR_6].dev_num == VAR_1) && (VAR_4[VAR_6].direction == VAR_3))
   return VAR_6;
 }
 return 0;
}
