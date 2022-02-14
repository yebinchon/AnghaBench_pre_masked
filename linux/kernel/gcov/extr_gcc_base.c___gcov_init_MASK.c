
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct gcov_info*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct gcov_info*) ;
 unsigned int FUNC_2 (struct gcov_info*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,unsigned int) ;

void FUNC_6(struct gcov_info *VAR_3)
{
 static unsigned int VAR_4;

 FUNC_3(&VAR_2);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_2(VAR_3);




  FUNC_5("version magic: 0x%x\n", VAR_4);
 }




 FUNC_1(VAR_3);
 if (VAR_1)
  FUNC_0(VAR_0, VAR_3);
 FUNC_4(&VAR_2);
}
