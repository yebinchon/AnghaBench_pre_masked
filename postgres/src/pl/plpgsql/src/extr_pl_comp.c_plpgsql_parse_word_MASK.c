
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int itemtype; size_t itemno; } ;
struct TYPE_8__ {char* ident; int quoted; int idents; int datum; } ;
struct TYPE_7__ {char* ident; int quoted; } ;
typedef TYPE_1__ PLword ;
typedef TYPE_2__ PLwdatum ;
typedef TYPE_3__ PLpgSQL_nsitem ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,char*,int) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_1 (int ,int,char*,int *,int *,int *) ;
 int FUNC_2 () ;

bool
FUNC_3(char *VAR_5, const char *VAR_6, bool VAR_7,
       PLwdatum *VAR_8, PLword *VAR_9)
{
 PLpgSQL_nsitem *VAR_10;






 if (VAR_7 && VAR_4 == VAR_1)
 {



  VAR_10 = FUNC_1(FUNC_2(), 0,
          VAR_5, ((void*)0), ((void*)0),
          ((void*)0));

  if (VAR_10 != ((void*)0))
  {
   switch (VAR_10->itemtype)
   {
    case 128:
    case 129:
     VAR_8->datum = VAR_3[VAR_10->itemno];
     VAR_8->ident = VAR_5;
     VAR_8->quoted = (VAR_6[0] == '"');
     VAR_8->idents = VAR_2;
     return 1;

    default:

     FUNC_0(VAR_0, "unrecognized plpgsql itemtype: %d",
       VAR_10->itemtype);
   }
  }
 }





 VAR_9->ident = VAR_5;
 VAR_9->quoted = (VAR_6[0] == '"');
 return 0;
}
