
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {char* name; struct connection* next; } ;


 struct connection* VAR_0 ;
 int VAR_1 ;
 struct connection* VAR_2 ;
 struct connection* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static struct connection *
FUNC_2(const char *VAR_3)
{
 struct connection *VAR_4 = ((void*)0);

 if ((VAR_3 == ((void*)0)) || (FUNC_1(VAR_3, "CURRENT") == 0))
 {
  VAR_4 = VAR_0;

 }
 else
 {
  struct connection *VAR_5;

  for (VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
  {
   if (FUNC_1(VAR_3, VAR_5->name) == 0)
    break;
  }
  VAR_4 = VAR_5;
 }

 return VAR_4;
}
