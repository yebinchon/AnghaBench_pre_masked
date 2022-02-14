
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_x264 {int params; } ;


 int FUNC_0 (struct obs_x264*,char const*,char*,int ) ;
 int FUNC_1 (struct obs_x264*,char const*) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_3(struct obs_x264 *VAR_1, const char *VAR_2,
         const char *VAR_3)
{
 int VAR_4 = FUNC_2(
  &VAR_1->params, FUNC_1(VAR_1, VAR_2),
  FUNC_0(VAR_1, VAR_3, "tune", VAR_0));
 return VAR_4 == 0;
}
