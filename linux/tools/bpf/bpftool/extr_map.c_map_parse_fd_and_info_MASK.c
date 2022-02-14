
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int FUNC_0 (int,void*,int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int*,char***) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(int *VAR_1, char ***VAR_2, void *VAR_3, __u32 *VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2);
 if (VAR_6 < 0)
  return -1;

 VAR_5 = FUNC_0(VAR_6, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_3("can't get map info: %s", FUNC_4(VAR_0));
  FUNC_1(VAR_6);
  return VAR_5;
 }

 return VAR_6;
}
