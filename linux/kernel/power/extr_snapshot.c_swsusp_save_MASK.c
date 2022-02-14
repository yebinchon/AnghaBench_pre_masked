
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int *,unsigned int,unsigned int) ;

int FUNC_9(void)
{
 unsigned int VAR_6, VAR_7;

 FUNC_7("Creating hibernation image:\n");

 FUNC_4(((void*)0));
 VAR_6 = FUNC_2();
 VAR_7 = FUNC_3();
 FUNC_7("Need to copy %u pages\n", VAR_6 + VAR_7);

 if (!FUNC_5(VAR_6, VAR_7)) {
  FUNC_6("Not enough free memory\n");
  return -VAR_0;
 }

 if (FUNC_8(&VAR_2, VAR_6, VAR_7)) {
  FUNC_6("Memory allocation failed\n");
  return -VAR_0;
 }





 FUNC_4(((void*)0));
 FUNC_1(&VAR_2, &VAR_5);







 VAR_6 += VAR_7;
 VAR_3 = VAR_6;
 VAR_4 = FUNC_0(VAR_6 * sizeof(long), VAR_1);

 FUNC_7("Hibernation image created (%d pages copied)\n", VAR_6);

 return 0;
}
