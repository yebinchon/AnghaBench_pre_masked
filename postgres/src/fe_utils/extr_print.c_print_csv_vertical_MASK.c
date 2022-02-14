
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char** cells; char const* const* headers; int ncolumns; TYPE_1__* opt; } ;
typedef TYPE_2__ printTableContent ;
struct TYPE_4__ {char* csvFieldSep; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const* const,int *,char) ;
 int FUNC_1 (char,int *) ;

__attribute__((used)) static void
FUNC_2(const printTableContent *VAR_1, FILE *VAR_2)
{
 const char *const *VAR_3;
 int VAR_4;


 for (VAR_4 = 0, VAR_3 = VAR_1->cells; *VAR_3; VAR_4++, VAR_3++)
 {
  if (VAR_0)
   return;


  FUNC_0(VAR_1->headers[VAR_4 % VAR_1->ncolumns], VAR_2,
      VAR_1->opt->csvFieldSep[0]);


  FUNC_1(VAR_1->opt->csvFieldSep[0], VAR_2);


  FUNC_0(*VAR_3, VAR_2, VAR_1->opt->csvFieldSep[0]);

  FUNC_1('\n', VAR_2);
 }
}
