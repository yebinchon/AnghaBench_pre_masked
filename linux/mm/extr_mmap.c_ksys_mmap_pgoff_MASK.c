
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int dummy; } ;
struct hstate {int dummy; } ;
struct file {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct file*) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long FUNC_2 (struct file*) ;
 int VAR_10 ;
 int FUNC_3 (unsigned long,unsigned long) ;
 struct file* FUNC_4 (unsigned long) ;
 int FUNC_5 (struct file*) ;
 struct hstate* FUNC_6 (struct file*) ;
 struct hstate* FUNC_7 (unsigned long) ;
 int FUNC_8 (struct hstate*) ;
 struct file* FUNC_9 (int ,unsigned long,int ,struct user_struct**,int ,unsigned long) ;
 scalar_t__ FUNC_10 (struct file*) ;
 scalar_t__ FUNC_11 (int) ;
 unsigned long FUNC_12 (unsigned long) ;
 unsigned long FUNC_13 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

unsigned long FUNC_14(unsigned long VAR_11, unsigned long VAR_12,
         unsigned long VAR_13, unsigned long VAR_14,
         unsigned long VAR_15, unsigned long VAR_16)
{
 struct file *VAR_17 = ((void*)0);
 unsigned long VAR_18;

 VAR_11 = FUNC_12(VAR_11);

 if (!(VAR_14 & VAR_4)) {
  FUNC_3(VAR_15, VAR_14);
  VAR_17 = FUNC_4(VAR_15);
  if (!VAR_17)
   return -VAR_0;
  if (FUNC_10(VAR_17))
   VAR_12 = FUNC_0(VAR_12, FUNC_8(FUNC_6(VAR_17)));
  VAR_18 = -VAR_1;
  if (FUNC_11(VAR_14 & VAR_7 && !FUNC_10(VAR_17)))
   goto out_fput;
 } else if (VAR_14 & VAR_7) {
  struct user_struct *VAR_19 = ((void*)0);
  struct hstate *VAR_20;

  VAR_20 = FUNC_7((VAR_14 >> VAR_9) & VAR_8);
  if (!VAR_20)
   return -VAR_1;

  VAR_12 = FUNC_0(VAR_12, FUNC_8(VAR_20));






  VAR_17 = FUNC_9(VAR_3, VAR_12,
    VAR_10,
    &VAR_19, VAR_2,
    (VAR_14 >> VAR_9) & VAR_8);
  if (FUNC_1(VAR_17))
   return FUNC_2(VAR_17);
 }

 VAR_14 &= ~(VAR_6 | VAR_5);

 VAR_18 = FUNC_13(VAR_17, VAR_11, VAR_12, VAR_13, VAR_14, VAR_16);
out_fput:
 if (VAR_17)
  FUNC_5(VAR_17);
 return VAR_18;
}
