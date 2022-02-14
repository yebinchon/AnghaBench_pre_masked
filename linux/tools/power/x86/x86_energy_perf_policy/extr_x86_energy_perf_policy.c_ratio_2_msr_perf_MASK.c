
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_2 ;

int FUNC_1(int VAR_3)
{
 int VAR_4;

 if (!VAR_0)
  return VAR_3;

 VAR_4 = VAR_3 * 255 / VAR_0;

 if (VAR_1)
  FUNC_0(VAR_2, "%d = ratio_to_msr_perf(%d)\n", VAR_4, VAR_3);

 return VAR_4;
}
