
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct feat_fd {int dummy; } ;
typedef int size ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct feat_fd*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct feat_fd *VAR_0, unsigned long *VAR_1, u64 VAR_2)
{
 u64 *VAR_3 = (u64 *) VAR_1;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_0, &VAR_2, sizeof(VAR_2));
 if (VAR_5 < 0)
  return VAR_5;

 for (VAR_4 = 0; (u64) VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  VAR_5 = FUNC_1(VAR_0, VAR_3 + VAR_4, sizeof(*VAR_3));
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
