
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sourceline; scalar_t__ sourcefile; int source; int scontext; int stack; int reset_source; int reset_scontext; } ;
struct config_string {scalar_t__ reset_val; scalar_t__* variable; TYPE_1__ gen; } ;
struct config_generic {char* name; int flags; scalar_t__ vartype; int * stack; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct config_generic*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct config_generic*,int ) ;
 scalar_t__ FUNC_3 (void*,void*,int ,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (struct config_string*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct config_generic*,struct config_string*,int ,scalar_t__,int ,int ) ;
 int FUNC_9 (char const*,scalar_t__,int ,int ,int ,int,int ,int) ;
 int FUNC_10 (char const*,scalar_t__,int ) ;
 int FUNC_11 (struct config_string*,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_12(struct config_generic *VAR_9)
{
 const char *VAR_10 = VAR_9->name;
 const char **VAR_11 = &VAR_10;
 struct config_string *VAR_12;
 struct config_generic **VAR_13;




 VAR_13 = (struct config_generic **) FUNC_3((void *) &VAR_11,
            (void *) VAR_7,
            VAR_8,
            sizeof(struct config_generic *),
            VAR_6);
 if (VAR_13 == ((void*)0))
 {




  FUNC_1(VAR_9);
  FUNC_2(VAR_9, VAR_1);
  return;
 }




 if (((*VAR_13)->flags & VAR_3) == 0)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("attempt to redefine parameter \"%s\"", VAR_10)));

 FUNC_0((*VAR_13)->vartype == VAR_4);
 VAR_12 = (struct config_string *) (*VAR_13);






 FUNC_1(VAR_9);





 *VAR_13 = VAR_9;
 if (VAR_12->reset_val)
  (void) FUNC_9(VAR_10, VAR_12->reset_val,
         VAR_12->gen.reset_scontext,
         VAR_12->gen.reset_source,
         VAR_2, 1, VAR_5, 0);

 FUNC_0(VAR_9->stack == ((void*)0));


 FUNC_8(VAR_9, VAR_12, VAR_12->gen.stack,
         *(VAR_12->variable),
         VAR_12->gen.scontext, VAR_12->gen.source);


 if (VAR_12->gen.sourcefile)
  FUNC_10(VAR_10, VAR_12->gen.sourcefile,
         VAR_12->gen.sourceline);







 FUNC_11(VAR_12, VAR_12->variable, ((void*)0));
 FUNC_11(VAR_12, &VAR_12->reset_val, ((void*)0));

 FUNC_7(VAR_12);
}
