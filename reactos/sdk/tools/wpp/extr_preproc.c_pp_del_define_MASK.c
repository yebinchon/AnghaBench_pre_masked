
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int text; } ;
struct TYPE_7__ {int filename; TYPE_1__ subst; int ident; } ;
typedef TYPE_2__ pp_entry_t ;
struct TYPE_8__ {char* input; int line_number; scalar_t__ debug; scalar_t__ pedantic; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_4__ VAR_0 ;
 int FUNC_2 (char const*) ;
 TYPE_2__* FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char*,int,char const*) ;

void FUNC_6(const char *VAR_1)
{
 pp_entry_t *VAR_2;
 int VAR_3 = FUNC_2(VAR_1);

 if((VAR_2 = FUNC_3(VAR_1)) == ((void*)0))
 {
  if(VAR_0.pedantic)
   FUNC_4("%s was not defined", VAR_1);
  return;
 }

 if(VAR_0.debug)
  FUNC_5("Deleting (%s, %d) <%s>\n", VAR_0.input, VAR_0.line_number, VAR_1);

 FUNC_0( VAR_2->ident );
 FUNC_0( VAR_2->subst.text );
 FUNC_0( VAR_2->filename );
 FUNC_1( VAR_2, VAR_3 );
}
