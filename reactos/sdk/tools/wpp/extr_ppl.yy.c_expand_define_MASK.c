
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* text; } ;
struct TYPE_7__ {scalar_t__ type; char* ident; TYPE_1__ subst; } ;
typedef TYPE_2__ pp_entry_t ;
struct TYPE_8__ {char* input; int line_number; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int,char*,int,char*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int *,int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(pp_entry_t *VAR_5)
{
 FUNC_0(VAR_5->type == VAR_0);

 if(VAR_2)
  FUNC_1(VAR_4, "expand_define(%d): %s:%d: '%s' -> '%s'\n",
   VAR_1,
   VAR_3.input,
   VAR_3.line_number,
   VAR_5->ident,
   VAR_5->subst.text);
 if(VAR_5->subst.text && VAR_5->subst.text[0])
 {
  FUNC_3(VAR_5, ((void*)0), ((void*)0), 0);
  FUNC_2(VAR_5->subst.text);
 }
}
