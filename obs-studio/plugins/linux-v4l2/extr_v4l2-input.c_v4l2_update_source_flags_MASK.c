
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_data {int source; } ;
typedef int obs_data_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct v4l2_data *VAR_0,
         obs_data_t *VAR_1)
{
 FUNC_1(
  VAR_0->source, !FUNC_0(VAR_1, "buffering"));
}
