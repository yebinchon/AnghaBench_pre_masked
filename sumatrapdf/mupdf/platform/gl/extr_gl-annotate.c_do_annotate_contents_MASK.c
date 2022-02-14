
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input {int text; } ;
typedef int pdf_annot ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_2 (struct input*,int ,int) ;
 int FUNC_3 (struct input*,char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
 static pdf_annot *VAR_3 = ((void*)0);
 static struct input VAR_4;
 const char *VAR_5;

 if (VAR_2 != VAR_3)
 {
  VAR_3 = VAR_2;
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  FUNC_3(&VAR_4, VAR_5);
 }

 FUNC_4("Contents:");
 if (FUNC_2(&VAR_4, 0, 5) >= VAR_0)
  FUNC_1(VAR_1, VAR_2, VAR_4.text);
}
