
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct xt_target {int dummy; } ;


 int VAR_0 ;
 struct xt_target* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct xt_target*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int ,char const*) ;
 scalar_t__ FUNC_3 (char const*,scalar_t__) ;
 struct xt_target* FUNC_4 (size_t,char const*,size_t) ;
 int * VAR_2 ;

struct xt_target *FUNC_5(u8 VAR_3, const char *VAR_4, u8 VAR_5)
{
 struct xt_target *VAR_6;

 if (FUNC_3(VAR_4, VAR_1) == VAR_1)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
 if (FUNC_1(VAR_6)) {
  FUNC_2("%st_%s", VAR_2[VAR_3], VAR_4);
  VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
 }

 return VAR_6;
}
