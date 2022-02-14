
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * idents; } ;
struct TYPE_8__ {int itemtype; size_t itemno; } ;
struct TYPE_7__ {int quoted; int * idents; int * ident; int * datum; } ;
typedef TYPE_1__ PLwdatum ;
typedef int PLpgSQL_recfield ;
typedef int PLpgSQL_rec ;
typedef TYPE_2__ PLpgSQL_nsitem ;
typedef int PLpgSQL_datum ;
typedef TYPE_3__ PLcword ;
typedef int List ;


 scalar_t__ VAR_0 ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 void** VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (int *,char*) ;
 TYPE_2__* FUNC_3 (int ,int,char*,char*,int *,int*) ;
 int FUNC_4 () ;

bool
FUNC_5(char *VAR_3, char *VAR_4,
       PLwdatum *VAR_5, PLcword *VAR_6)
{
 PLpgSQL_nsitem *VAR_7;
 List *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(FUNC_1(VAR_3),
      FUNC_1(VAR_4));






 if (VAR_2 != VAR_0)
 {



  VAR_7 = FUNC_3(FUNC_4(), 0,
          VAR_3, VAR_4, ((void*)0),
          &VAR_9);
  if (VAR_7 != ((void*)0))
  {
   switch (VAR_7->itemtype)
   {
    case 128:

     VAR_5->datum = VAR_1[VAR_7->itemno];
     VAR_5->ident = ((void*)0);
     VAR_5->quoted = 0;
     VAR_5->idents = VAR_8;
     return 1;

    case 129:
     if (VAR_9 == 1)
     {






      PLpgSQL_rec *VAR_10;
      PLpgSQL_recfield *VAR_11;

      VAR_10 = (PLpgSQL_rec *) (VAR_1[VAR_7->itemno]);
      VAR_11 = FUNC_2(VAR_10, VAR_4);

      VAR_5->datum = (PLpgSQL_datum *) VAR_11;
     }
     else
     {

      VAR_5->datum = VAR_1[VAR_7->itemno];
     }
     VAR_5->ident = ((void*)0);
     VAR_5->quoted = 0;
     VAR_5->idents = VAR_8;
     return 1;

    default:
     break;
   }
  }
 }


 VAR_6->idents = VAR_8;
 return 0;
}
