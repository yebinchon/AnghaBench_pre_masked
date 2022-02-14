
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int dummy; } ;
struct gstr {int dummy; } ;
typedef int GtkTextIter ;
typedef int GtkTextBuffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *,char const*,int,int ,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct menu*,struct gstr*) ;
 char* FUNC_9 (struct menu*) ;
 int FUNC_10 (struct gstr*) ;
 char const* FUNC_11 (struct gstr*) ;
 struct gstr FUNC_12 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_13(struct menu *VAR_3)
{
 GtkTextBuffer *VAR_4;
 GtkTextIter VAR_5, VAR_6;
 const char *VAR_7 = FUNC_9(VAR_3);
 struct gstr VAR_8 = FUNC_12();

 FUNC_8(VAR_3, &VAR_8);

 VAR_4 = FUNC_6(FUNC_0(VAR_2));
 FUNC_2(VAR_4, &VAR_5, &VAR_6);
 FUNC_1(VAR_4, &VAR_5, &VAR_6);
 FUNC_7(FUNC_0(VAR_2), 15);

 FUNC_3(VAR_4, &VAR_6);
 FUNC_5(VAR_4, &VAR_6, VAR_7, -1, VAR_0,
      ((void*)0));
 FUNC_4(VAR_4, "\n\n", 2);
 FUNC_3(VAR_4, &VAR_6);
 FUNC_5(VAR_4, &VAR_6, FUNC_11(&VAR_8), -1, VAR_1,
      ((void*)0));
 FUNC_10(&VAR_8);
}
