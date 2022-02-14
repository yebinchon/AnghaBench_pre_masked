
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_write_options ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int *,int *,int ) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int *,char*) ;
 int FUNC_10 (int ,int ,char*,int *) ;
 int VAR_6 ;
 int FUNC_11 () ;

int FUNC_12(int VAR_7, char **VAR_8)
{
 pdf_write_options VAR_9 = VAR_5;
 char *VAR_10 = "out.pdf";
 char *VAR_11 = "compress";
 int VAR_12, VAR_13;

 while ((VAR_13 = FUNC_5(VAR_7, VAR_8, "o:O:")) != -1)
 {
  switch (VAR_13)
  {
  case 'o': VAR_10 = VAR_3; break;
  case 'O': VAR_11 = VAR_3; break;
  default: FUNC_11(); break;
  }
 }

 if (VAR_4 == VAR_7)
  FUNC_11();

 VAR_1 = FUNC_6(((void*)0), ((void*)0), VAR_0);
 if (!VAR_1)
 {
  FUNC_2(VAR_6, "cannot initialise context\n");
  FUNC_1(1);
 }

 FUNC_9(VAR_1, &VAR_9, VAR_11);

 VAR_2 = FUNC_7(VAR_1);

 for (VAR_12 = VAR_4; VAR_12 < VAR_7; ++VAR_12)
  FUNC_0(VAR_8[VAR_12]);

 FUNC_10(VAR_1, VAR_2, VAR_10, &VAR_9);

 FUNC_8(VAR_1, VAR_2);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 return 0;
}
