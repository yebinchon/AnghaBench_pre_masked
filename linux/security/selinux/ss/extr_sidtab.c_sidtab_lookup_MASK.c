
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sidtab {int count; } ;
struct context {int dummy; } ;


 struct context* FUNC_0 (struct sidtab*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static struct context *FUNC_2(struct sidtab *VAR_0, u32 VAR_1)
{

 u32 VAR_2 = FUNC_1(&VAR_0->count);

 if (VAR_1 >= VAR_2)
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_1, 0);
}
