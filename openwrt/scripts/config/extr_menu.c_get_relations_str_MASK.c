
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct list_head {int dummy; } ;
struct gstr {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct gstr*,struct symbol*,struct list_head*) ;
 int FUNC_2 (struct gstr*,int ) ;
 struct gstr FUNC_3 () ;

struct gstr FUNC_4(struct symbol **VAR_0, struct list_head *VAR_1)
{
 struct symbol *VAR_2;
 struct gstr VAR_3 = FUNC_3();
 int VAR_4;

 for (VAR_4 = 0; VAR_0 && (VAR_2 = VAR_0[VAR_4]); VAR_4++)
  FUNC_1(&VAR_3, VAR_2, VAR_1);
 if (!VAR_4)
  FUNC_2(&VAR_3, FUNC_0("No matches found.\n"));
 return VAR_3;
}
