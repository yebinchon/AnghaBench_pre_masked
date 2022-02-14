
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {void* extra; int name; } ;
struct config_string {char** variable; char* reset_val; void* reset_extra; TYPE_4__ gen; int (* assign_hook ) (char*,void*) ;int * boot_val; } ;
struct TYPE_8__ {void* extra; int name; } ;
struct config_real {double boot_val; double min; double max; double* variable; double reset_val; void* reset_extra; TYPE_3__ gen; int (* assign_hook ) (double,void*) ;} ;
struct TYPE_7__ {void* extra; int name; } ;
struct config_int {int boot_val; int min; int max; int* variable; int reset_val; void* reset_extra; TYPE_2__ gen; int (* assign_hook ) (int,void*) ;} ;
struct config_generic {int vartype; scalar_t__ sourceline; int * sourcefile; int * extra; int * stack; void* reset_scontext; void* scontext; void* reset_source; void* source; scalar_t__ status; } ;
struct TYPE_10__ {void* extra; int name; } ;
struct config_enum {int boot_val; int* variable; int reset_val; void* reset_extra; TYPE_5__ gen; int (* assign_hook ) (int,void*) ;} ;
struct TYPE_6__ {void* extra; int name; } ;
struct config_bool {int boot_val; int* variable; int reset_val; void* reset_extra; TYPE_1__ gen; int (* assign_hook ) (int,void*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 void* VAR_2 ;


 void* VAR_3 ;
 int FUNC_1 (struct config_bool*,int*,void**,void*,int ) ;
 int FUNC_2 (struct config_enum*,int*,void**,void*,int ) ;
 int FUNC_3 (struct config_int*,int*,void**,void*,int ) ;
 int FUNC_4 (struct config_real*,double*,void**,void*,int ) ;
 int FUNC_5 (struct config_string*,char**,void**,void*,int ) ;
 int FUNC_6 (int ,char*,int ,...) ;
 char* FUNC_7 (int ,int *) ;
 int FUNC_8 (int,void*) ;
 int FUNC_9 (int,void*) ;
 int FUNC_10 (double,void*) ;
 int FUNC_11 (char*,void*) ;
 int FUNC_12 (int,void*) ;

__attribute__((used)) static void
FUNC_13(struct config_generic *VAR_4)
{
 VAR_4->status = 0;
 VAR_4->source = VAR_3;
 VAR_4->reset_source = VAR_3;
 VAR_4->scontext = VAR_2;
 VAR_4->reset_scontext = VAR_2;
 VAR_4->stack = ((void*)0);
 VAR_4->extra = ((void*)0);
 VAR_4->sourcefile = ((void*)0);
 VAR_4->sourceline = 0;

 switch (VAR_4->vartype)
 {
  case 132:
   {
    struct config_bool *VAR_5 = (struct config_bool *) VAR_4;
    bool VAR_6 = VAR_5->boot_val;
    void *VAR_7 = ((void*)0);

    if (!FUNC_1(VAR_5, &VAR_6, &VAR_7,
            VAR_3, VAR_1))
     FUNC_6(VAR_0, "failed to initialize %s to %d",
       VAR_5->gen.name, (int) VAR_6);
    if (VAR_5->assign_hook)
     VAR_5->assign_hook(VAR_6, VAR_7);
    *VAR_5->variable = VAR_5->reset_val = VAR_6;
    VAR_5->gen.extra = VAR_5->reset_extra = VAR_7;
    break;
   }
  case 130:
   {
    struct config_int *VAR_8 = (struct config_int *) VAR_4;
    int VAR_9 = VAR_8->boot_val;
    void *VAR_10 = ((void*)0);

    FUNC_0(VAR_9 >= VAR_8->min);
    FUNC_0(VAR_9 <= VAR_8->max);
    if (!FUNC_3(VAR_8, &VAR_9, &VAR_10,
           VAR_3, VAR_1))
     FUNC_6(VAR_0, "failed to initialize %s to %d",
       VAR_8->gen.name, VAR_9);
    if (VAR_8->assign_hook)
     VAR_8->assign_hook(VAR_9, VAR_10);
    *VAR_8->variable = VAR_8->reset_val = VAR_9;
    VAR_8->gen.extra = VAR_8->reset_extra = VAR_10;
    break;
   }
  case 129:
   {
    struct config_real *VAR_11 = (struct config_real *) VAR_4;
    double VAR_12 = VAR_11->boot_val;
    void *VAR_13 = ((void*)0);

    FUNC_0(VAR_12 >= VAR_11->min);
    FUNC_0(VAR_12 <= VAR_11->max);
    if (!FUNC_4(VAR_11, &VAR_12, &VAR_13,
            VAR_3, VAR_1))
     FUNC_6(VAR_0, "failed to initialize %s to %g",
       VAR_11->gen.name, VAR_12);
    if (VAR_11->assign_hook)
     VAR_11->assign_hook(VAR_12, VAR_13);
    *VAR_11->variable = VAR_11->reset_val = VAR_12;
    VAR_11->gen.extra = VAR_11->reset_extra = VAR_13;
    break;
   }
  case 128:
   {
    struct config_string *VAR_14 = (struct config_string *) VAR_4;
    char *VAR_15;
    void *VAR_16 = ((void*)0);


    if (VAR_14->boot_val != ((void*)0))
     VAR_15 = FUNC_7(VAR_0, VAR_14->boot_val);
    else
     VAR_15 = ((void*)0);

    if (!FUNC_5(VAR_14, &VAR_15, &VAR_16,
           VAR_3, VAR_1))
     FUNC_6(VAR_0, "failed to initialize %s to \"%s\"",
       VAR_14->gen.name, VAR_15 ? VAR_15 : "");
    if (VAR_14->assign_hook)
     VAR_14->assign_hook(VAR_15, VAR_16);
    *VAR_14->variable = VAR_14->reset_val = VAR_15;
    VAR_14->gen.extra = VAR_14->reset_extra = VAR_16;
    break;
   }
  case 131:
   {
    struct config_enum *VAR_17 = (struct config_enum *) VAR_4;
    int VAR_18 = VAR_17->boot_val;
    void *VAR_19 = ((void*)0);

    if (!FUNC_2(VAR_17, &VAR_18, &VAR_19,
            VAR_3, VAR_1))
     FUNC_6(VAR_0, "failed to initialize %s to %d",
       VAR_17->gen.name, VAR_18);
    if (VAR_17->assign_hook)
     VAR_17->assign_hook(VAR_18, VAR_19);
    *VAR_17->variable = VAR_17->reset_val = VAR_18;
    VAR_17->gen.extra = VAR_17->reset_extra = VAR_19;
    break;
   }
 }
}
