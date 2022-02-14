
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

 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (int *,char*) ;
 TYPE_2__* FUNC_3 (int ,int,char*,char*,char*,int*) ;
 int FUNC_4 () ;

bool
FUNC_5(char *VAR_3, char *VAR_4, char *VAR_5,
        PLwdatum *VAR_6, PLcword *VAR_7)
{
 PLpgSQL_nsitem *VAR_8;
 List *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(FUNC_1(VAR_3),
      FUNC_1(VAR_4),
      FUNC_1(VAR_5));






 if (VAR_2 != VAR_0)
 {




  VAR_8 = FUNC_3(FUNC_4(), 0,
          VAR_3, VAR_4, VAR_5,
          &VAR_10);
  if (VAR_8 != ((void*)0) && VAR_10 == 2)
  {
   switch (VAR_8->itemtype)
   {
    case 128:
     {




      PLpgSQL_rec *VAR_11;
      PLpgSQL_recfield *VAR_12;

      VAR_11 = (PLpgSQL_rec *) (VAR_1[VAR_8->itemno]);
      VAR_12 = FUNC_2(VAR_11, VAR_5);

      VAR_6->datum = (PLpgSQL_datum *) VAR_12;
      VAR_6->ident = ((void*)0);
      VAR_6->quoted = 0;
      VAR_6->idents = VAR_9;
      return 1;
     }

    default:
     break;
   }
  }
 }


 VAR_7->idents = VAR_9;
 return 0;
}
