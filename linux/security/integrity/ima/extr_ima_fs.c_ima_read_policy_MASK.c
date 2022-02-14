
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,void**,scalar_t__*,int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char**,char*) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static ssize_t FUNC_7(char *VAR_2)
{
 void *VAR_3;
 char *VAR_4;
 loff_t VAR_5;
 int VAR_6, VAR_7 = FUNC_4(VAR_2);

 char *VAR_8;


 VAR_4 = VAR_2;
 FUNC_5(&VAR_4, "\n");

 VAR_6 = FUNC_1(VAR_2, &VAR_3, &VAR_5, 0, VAR_1);
 if (VAR_6 < 0) {
  FUNC_3("Unable to open file: %s (%d)", VAR_2, VAR_6);
  return VAR_6;
 }

 VAR_4 = VAR_3;
 while (VAR_5 > 0 && (VAR_8 = FUNC_5(&VAR_4, "\n"))) {
  FUNC_2("rule: %s\n", VAR_8);
  VAR_6 = FUNC_0(VAR_8);
  if (VAR_6 < 0)
   break;
  VAR_5 -= VAR_6;
 }

 FUNC_6(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;
 else if (VAR_5)
  return -VAR_0;
 else
  return VAR_7;
}
