
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fib6_result {int fib6_type; int fib6_flags; struct fib6_nh* nh; struct fib6_info* f6i; } ;
struct fib6_nh_frl_arg {int oif; int strict; int* mpri; int* do_rr; struct fib6_nh* nh; int flags; } ;
struct fib6_nh {int dummy; } ;
struct fib6_info {scalar_t__ fib6_metric; int fib6_type; int fib6_flags; struct fib6_nh* fib6_nh; int nh; int fib6_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fib6_info*) ;
 scalar_t__ FUNC_1 (struct fib6_nh*,int ,int,int,int*,int*) ;
 struct fib6_nh* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,struct fib6_nh_frl_arg*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct fib6_info* FUNC_5 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct fib6_info *VAR_3,
      struct fib6_info *VAR_4, u32 VAR_5,
      struct fib6_result *VAR_6, struct fib6_info **VAR_7,
      int VAR_8, int VAR_9, bool *VAR_10, int *VAR_11)
{
 struct fib6_info *VAR_12;

 for (VAR_12 = VAR_3;
      VAR_12 && VAR_12 != VAR_4;
      VAR_12 = FUNC_5(VAR_12->fib6_next)) {
  bool VAR_13 = 0;
  struct fib6_nh *VAR_14;

  if (VAR_7 && VAR_12->fib6_metric != VAR_5) {
   *VAR_7 = VAR_12;
   return;
  }

  if (FUNC_0(VAR_12))
   continue;

  if (FUNC_6(VAR_12->nh)) {
   struct fib6_nh_frl_arg VAR_15 = {
    .flags = VAR_12->fib6_flags,
    .oif = VAR_8,
    .strict = VAR_9,
    .mpri = VAR_11,
    .do_rr = VAR_10
   };

   if (FUNC_4(VAR_12->nh)) {
    VAR_6->fib6_flags = VAR_0;
    VAR_6->fib6_type = VAR_1;
    VAR_6->f6i = VAR_12;
    VAR_6->nh = FUNC_2(VAR_12->nh);
    return;
   }
   if (FUNC_3(VAR_12->nh, VAR_2,
           &VAR_15)) {
    VAR_13 = 1;
    VAR_14 = VAR_15.nh;
   }
  } else {
   VAR_14 = VAR_12->fib6_nh;
   if (FUNC_1(VAR_14, VAR_12->fib6_flags, VAR_8, VAR_9,
           VAR_11, VAR_10))
    VAR_13 = 1;
  }
  if (VAR_13) {
   VAR_6->f6i = VAR_12;
   VAR_6->nh = VAR_14;
   VAR_6->fib6_flags = VAR_12->fib6_flags;
   VAR_6->fib6_type = VAR_12->fib6_type;
  }
 }
}
