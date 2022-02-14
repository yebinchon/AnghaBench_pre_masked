
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {unsigned long f_flags; int f_path; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,int *,unsigned long) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, unsigned int VAR_4,
        unsigned long VAR_5)
{
 if (!(VAR_4 == VAR_0 && ((VAR_5 ^ VAR_3->f_flags) & VAR_1)))
  return 0;
 return FUNC_0(FUNC_1(), &VAR_3->f_path,
         VAR_2 | (VAR_5 & VAR_1));
}
