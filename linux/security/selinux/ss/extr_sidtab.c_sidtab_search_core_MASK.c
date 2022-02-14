
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sidtab {int dummy; } ;
struct context {int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct context* FUNC_0 (struct sidtab*,scalar_t__) ;
 struct context* FUNC_1 (struct sidtab*,scalar_t__) ;

__attribute__((used)) static struct context *FUNC_2(struct sidtab *VAR_2, u32 VAR_3, int VAR_4)
{
 struct context *VAR_5;

 if (VAR_3 != 0) {
  if (VAR_3 > VAR_0)
   VAR_5 = FUNC_0(VAR_2, VAR_3 - (VAR_0 + 1));
  else
   VAR_5 = FUNC_1(VAR_2, VAR_3);
  if (VAR_5 && (!VAR_5->len || VAR_4))
   return VAR_5;
 }

 return FUNC_1(VAR_2, VAR_1);
}
