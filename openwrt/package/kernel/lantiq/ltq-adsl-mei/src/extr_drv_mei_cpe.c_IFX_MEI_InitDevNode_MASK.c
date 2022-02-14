
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2 (int VAR_4)
{
 if (VAR_4 == 0) {
  if ((VAR_3 = FUNC_1 (VAR_3, VAR_1, &VAR_2)) < 0) {
   FUNC_0 ("register_chrdev(%d %s) failed!\n", VAR_3, VAR_1);
   return -VAR_0;
  }
 }
 return 0;
}
