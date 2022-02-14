
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char const*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, off_t VAR_3)
{
 int VAR_4;
 off_t VAR_5;
 static const char VAR_6 = 0;


 if ((VAR_4 = FUNC_0(VAR_2, VAR_3)) != -1)
 {
  return VAR_4;
 }







 if ((VAR_5 = FUNC_1(VAR_2, 0, VAR_0)) == -1)
 {
  FUNC_2("lseek");
  return -1;
 }


 if (FUNC_1(VAR_2, VAR_3, VAR_1) == -1)
 {
  FUNC_2("lseek");
  return -1;
 }


 if (FUNC_3(VAR_2, &VAR_6, 1) == -1)
 {
  FUNC_2("write");
  return -1;
 }


 if (FUNC_0(VAR_2, VAR_3) == -1)
 {
  FUNC_2("ftruncate");
  return -1;
 }


 if (FUNC_1(VAR_2, VAR_5, VAR_1) == -1)
 {
  FUNC_2("lseek");
  return -1;
 }

 return 0;
}
