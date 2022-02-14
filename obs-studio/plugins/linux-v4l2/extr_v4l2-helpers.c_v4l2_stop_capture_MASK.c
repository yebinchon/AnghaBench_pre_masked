
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_fast32_t ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,int*) ;

int_fast32_t FUNC_2(int_fast32_t VAR_3)
{
 enum v4l2_buf_type VAR_4;

 VAR_4 = VAR_1;
 if (FUNC_1(VAR_3, VAR_2, &VAR_4) < 0) {
  FUNC_0(VAR_0, "unable to stop stream");
  return -1;
 }

 return 0;
}
