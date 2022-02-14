
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct feat_fd {int dummy; } ;
typedef int len ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct feat_fd*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (struct feat_fd*,char const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct feat_fd *VAR_1, const char *VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2) + 1;
 VAR_3 = FUNC_0(VAR_4, VAR_0);


 VAR_5 = FUNC_1(VAR_1, &VAR_3, sizeof(VAR_3));
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_3(VAR_1, VAR_2, VAR_4, VAR_3);
}
