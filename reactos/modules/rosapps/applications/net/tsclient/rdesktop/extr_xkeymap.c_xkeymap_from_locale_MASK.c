
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keymapname; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int FILE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,char) ;
 char FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*) ;
 char* FUNC_6 (char const*) ;

BOOL
FUNC_7(RDPCLIENT * VAR_2, const char *VAR_3)
{
 char *VAR_4, *VAR_5;
 FILE *VAR_6;


 VAR_4 = FUNC_6(VAR_3);


 VAR_5 = FUNC_2(VAR_4, '.');
 if (VAR_5)
  *VAR_5 = '\0';
 VAR_5 = FUNC_2(VAR_4, '@');
 if (VAR_5)
  *VAR_5 = '\0';


 VAR_5 = FUNC_2(VAR_4, '_');
 if (VAR_5)
  *VAR_5 = '-';


 VAR_5 = VAR_4;
 while (*VAR_5)
 {
  *VAR_5 = FUNC_3((int) *VAR_5);
  VAR_5++;
 }


 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 == ((void*)0))
 {

  VAR_5 = FUNC_2(VAR_4, '-');
  if (VAR_5)
   *VAR_5 = '\0';


  VAR_6 = FUNC_5(VAR_4);
 }

 if (VAR_6)
 {
  FUNC_1(VAR_6);
  FUNC_0(VAR_2->keymapname, VAR_4, sizeof(VAR_2->keymapname));
  FUNC_4(VAR_4);
  return VAR_1;
 }

 FUNC_4(VAR_4);
 return VAR_0;
}
