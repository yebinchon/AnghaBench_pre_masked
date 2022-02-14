
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 static int VAR_3;
 int VAR_4 = 0;

 if (VAR_3)
  return 0;

 VAR_4 = FUNC_1(&VAR_2, VAR_1, VAR_0);
 if (VAR_4 < 0) {
  FUNC_0("Regex compilation error.\n");
  return VAR_4;
 }

 VAR_3 = 1;
 return 0;
}
