
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct file*,int ,int ,int *,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct file *VAR_4, unsigned long VAR_5)
{
 u32 VAR_6;

 if (VAR_4 && (VAR_5 & VAR_2)) {
  FUNC_2(VAR_3, &VAR_6);
  return FUNC_1(VAR_4, FUNC_0(), VAR_6, ((void*)0),
        0, VAR_0, VAR_1);
 }

 return 0;
}
