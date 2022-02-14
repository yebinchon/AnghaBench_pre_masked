
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ type; } ;
struct gstr {unsigned int max_width; char* s; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gstr*,char const*) ;
 int FUNC_1 (struct gstr*,char*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (struct symbol*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, struct symbol *VAR_2, const char *VAR_3)
{
 struct gstr *VAR_4 = (struct gstr*)VAR_1;
 const char *VAR_5 = ((void*)0);

 if (VAR_2)
  VAR_5 = FUNC_4(VAR_2);

 if (VAR_4->max_width) {
  unsigned VAR_6 = FUNC_2(VAR_3);
  const char *VAR_7 = FUNC_3(VAR_4->s, '\n');
  unsigned VAR_8;

  if (VAR_5)
   VAR_6 += 4 + FUNC_2(VAR_5);

  if (!VAR_7)
   VAR_7 = VAR_4->s;

  VAR_8 = FUNC_2(VAR_4->s) - (VAR_7 - VAR_4->s);

  if ((VAR_8 + VAR_6) > VAR_4->max_width)
   FUNC_0(VAR_4, "\\\n");
 }

 FUNC_0(VAR_4, VAR_3);
 if (VAR_2 && VAR_2->type != VAR_0)
  FUNC_1(VAR_4, " [=%s]", VAR_5);
}
