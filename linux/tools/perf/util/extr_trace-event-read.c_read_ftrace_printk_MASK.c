
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 scalar_t__ FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct tep_handle*,char*,unsigned int) ;
 unsigned int FUNC_4 (struct tep_handle*) ;

__attribute__((used)) static int FUNC_5(struct tep_handle *VAR_0)
{
 unsigned int VAR_1;
 char *VAR_2;


 VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_2(VAR_1 + 1);
 if (VAR_2 == ((void*)0))
  return -1;

 if (FUNC_0(VAR_2, VAR_1) < 0) {
  FUNC_1(VAR_2);
  return -1;
 }

 VAR_2[VAR_1] = '\0';

 FUNC_3(VAR_0, VAR_2, VAR_1);

 FUNC_1(VAR_2);
 return 0;
}
