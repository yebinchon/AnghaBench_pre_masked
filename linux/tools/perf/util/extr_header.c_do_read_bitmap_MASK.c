
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct feat_fd {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 unsigned long* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct feat_fd*,scalar_t__*) ;
 int FUNC_3 (unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct feat_fd *VAR_1, unsigned long **VAR_2, u64 *VAR_3)
{
 unsigned long *VAR_4;
 u64 VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_2(VAR_1, &VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_4 = FUNC_1(VAR_5);
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = (u64 *) VAR_4;

 for (VAR_7 = 0; (u64) VAR_7 < FUNC_0(VAR_5); VAR_7++) {
  VAR_8 = FUNC_2(VAR_1, VAR_6 + VAR_7);
  if (VAR_8 < 0) {
   FUNC_3(VAR_4);
   return VAR_8;
  }
 }

 *VAR_2 = VAR_4;
 *VAR_3 = VAR_5;
 return 0;
}
