
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {scalar_t__ locked_vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct mm_struct *VAR_5,
         unsigned long VAR_6,
         unsigned long VAR_7)
{
 unsigned long VAR_8, VAR_9;


 if (VAR_6 & VAR_4) {
  VAR_8 = VAR_7 >> VAR_2;
  VAR_8 += VAR_5->locked_vm;
  VAR_9 = FUNC_1(VAR_3);
  VAR_9 >>= VAR_2;
  if (VAR_8 > VAR_9 && !FUNC_0(VAR_0))
   return -VAR_1;
 }
 return 0;
}
