
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fib6_nh {int fib_nh_flags; int fib_nh_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fib6_nh*) ;
 int FUNC_2 (struct fib6_nh*,int ,int,int) ;

__attribute__((used)) static bool FUNC_3(struct fib6_nh *VAR_6, u32 VAR_7,
         int VAR_8, int VAR_9, int *VAR_10, bool *VAR_11)
{
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 int VAR_14;

 if (VAR_6->fib_nh_flags & VAR_4)
  goto out;

 if (FUNC_0(VAR_6->fib_nh_dev) &&
     VAR_6->fib_nh_flags & VAR_5 &&
     !(VAR_9 & VAR_0))
  goto out;

 VAR_14 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_14 == VAR_2) {
  VAR_12 = 1;
  VAR_14 = 0;
 } else if (VAR_14 == VAR_3) {
  goto out;
 }

 if (VAR_9 & VAR_1)
  FUNC_1(VAR_6);


 if (VAR_14 > *VAR_10) {
  *VAR_11 = VAR_12;
  *VAR_10 = VAR_14;
  VAR_13 = 1;
 }
out:
 return VAR_13;
}
