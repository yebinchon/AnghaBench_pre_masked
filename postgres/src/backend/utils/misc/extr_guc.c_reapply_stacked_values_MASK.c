
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int reset_source; int reset_scontext; } ;
struct config_string {char const* reset_val; TYPE_5__ gen; } ;
struct config_generic {char* name; TYPE_6__* stack; } ;
struct TYPE_10__ {char const* stringval; } ;
struct TYPE_11__ {TYPE_3__ val; } ;
struct TYPE_8__ {char* stringval; } ;
struct TYPE_9__ {TYPE_1__ val; } ;
struct TYPE_13__ {int state; int nest_level; int masked_scontext; TYPE_4__ masked; int source; int scontext; TYPE_2__ prior; struct TYPE_13__* prev; } ;
typedef TYPE_6__ GucStack ;
typedef int GucSource ;
typedef int GucContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char const*,int ,int ,int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct config_generic *VAR_5,
        struct config_string *VAR_6,
        GucStack *VAR_7,
        const char *VAR_8,
        GucContext VAR_9, GucSource VAR_10)
{
 const char *VAR_11 = VAR_5->name;
 GucStack *VAR_12 = VAR_5->stack;

 if (VAR_7 != ((void*)0))
 {

  FUNC_1(VAR_5, VAR_6, VAR_7->prev,
          VAR_7->prior.val.stringval,
          VAR_7->scontext, VAR_7->source);


  switch (VAR_7->state)
  {
   case 130:
    (void) FUNC_0(VAR_11, VAR_8,
           VAR_9, VAR_10,
           VAR_1, 1,
           VAR_4, 0);
    break;

   case 129:
    (void) FUNC_0(VAR_11, VAR_8,
           VAR_9, VAR_10,
           VAR_2, 1,
           VAR_4, 0);
    break;

   case 131:
    (void) FUNC_0(VAR_11, VAR_8,
           VAR_9, VAR_10,
           VAR_0, 1,
           VAR_4, 0);
    break;

   case 128:

    (void) FUNC_0(VAR_11, VAR_7->masked.val.stringval,
           VAR_7->masked_scontext, VAR_3,
           VAR_2, 1,
           VAR_4, 0);

    (void) FUNC_0(VAR_11, VAR_8,
           VAR_9, VAR_10,
           VAR_0, 1,
           VAR_4, 0);
    break;
  }


  if (VAR_5->stack != VAR_12)
   VAR_5->stack->nest_level = VAR_7->nest_level;
 }
 else
 {
  if (VAR_8 != VAR_6->reset_val ||
   VAR_9 != VAR_6->gen.reset_scontext ||
   VAR_10 != VAR_6->gen.reset_source)
  {
   (void) FUNC_0(VAR_11, VAR_8,
          VAR_9, VAR_10,
          VAR_2, 1, VAR_4, 0);
   VAR_5->stack = ((void*)0);
  }
 }
}
