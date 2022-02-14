
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int,int ) ;
 int FUNC_1 (int ,int *,int,int,int,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_0, sizeof(int),
          sizeof(int), 1, 0);
 if (VAR_3 < 0) {
  if (FUNC_4(VAR_0))
   return -1;
  FUNC_3("Failed to create array '%s'!\n", FUNC_5(VAR_2));
  return VAR_3;
 }

 VAR_4 = FUNC_1(VAR_1, ((void*)0),
          sizeof(int), VAR_3, 1, 0);
 if (VAR_4 < 0) {
  if (FUNC_4(VAR_1))
   return -1;
  FUNC_3("Failed to create array of maps '%s'!\n",
         FUNC_5(VAR_2));
 }

 FUNC_2(VAR_3);

 return VAR_4;
}
