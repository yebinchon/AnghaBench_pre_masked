
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ optc; scalar_t__ argc; } ;
struct TYPE_10__ {TYPE_1__* opts; } ;
struct TYPE_9__ {int parsed; TYPE_5__* opt_args; TYPE_5__ glb_args; } ;
struct TYPE_8__ {int index; int * p_next; } ;
struct TYPE_7__ {int flags; scalar_t__ max; scalar_t__ min; } ;
typedef TYPE_2__ CMDLINE_ARG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*) ;
 TYPE_4__ VAR_11 ;
 TYPE_3__ VAR_12 ;
 int FUNC_2 (char*) ;

int FUNC_3(int VAR_13, char* VAR_14[])
{
 int VAR_15, VAR_16=0;


 for( VAR_15 = 1; VAR_15 < VAR_13; VAR_15++ )
 {

  if( *VAR_14[VAR_15] == '-' )
  {

   if( FUNC_2(VAR_14[VAR_15]) != 2 )
   {

    return(VAR_0);
   }


   if( ((*(VAR_14[VAR_15] + 1)) < 'a') || ((*(VAR_14[VAR_15] + 1)) > 'z') )
   {

    return(VAR_3);
   }


   VAR_16 = (*(VAR_14[VAR_15] + 1)) - 'a';
   if((VAR_16 < 0) || (VAR_16 > 25)) return(VAR_3);


   if( VAR_11.opts[VAR_16].flags & VAR_8 )
   {

    VAR_12.opt_args[VAR_16].optc++;
    continue;
   }
   else
   {

    return(VAR_2);
   }
  }
  else
  {

   CMDLINE_ARG* VAR_17;


   VAR_17 = (CMDLINE_ARG*)FUNC_0(1,sizeof(CMDLINE_ARG));
   if( VAR_17== ((void*)0) )
   {

    return(VAR_5);
   }


   VAR_17->index = VAR_15;
   VAR_17->p_next = ((void*)0);


   if( (VAR_16 < 0)
    || (VAR_12.opt_args[VAR_16].argc == VAR_11.opts[VAR_16].max)
    )
   {

    FUNC_1(&(VAR_12.glb_args), VAR_17);
    continue;
   }
   else
   {

    if( VAR_12.opt_args[VAR_16].argc == VAR_11.opts[VAR_16].max )
    {

     return(VAR_4);
    }
    else
    {

     FUNC_1(&(VAR_12.opt_args[VAR_16]), VAR_17);
     continue;
    }
   }
  }
 }




 for( VAR_15=0; VAR_15 < 26; VAR_15++ )
 {

  if(VAR_11.opts[VAR_15].flags & VAR_8)
  {

   if(VAR_11.opts[VAR_15].flags & VAR_9)
   {

    if(VAR_12.opt_args[VAR_15].optc == 0)
    {

     return(VAR_7);
    }
    else
    {

     if(VAR_12.opt_args[VAR_15].argc < VAR_11.opts[VAR_15].min)
     {

      return(VAR_1);
     }
     else
     {

      continue;
     }
    }
   }
   else
   {

    if(VAR_12.opt_args[VAR_15].optc == 0)
    {

     continue;
    }
    else
    {

     if(VAR_12.opt_args[VAR_15].argc < VAR_11.opts[VAR_15].min)
     {

      return(VAR_1);
     }
     else
     {

      continue;
     }
    }
   }
  }
  else
  {


  }
 }


 VAR_12.parsed = VAR_10;
 return(VAR_6);
}
