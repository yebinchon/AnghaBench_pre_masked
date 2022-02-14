
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int length; int distance; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ qoperand; } ;
struct TYPE_9__ {int size; } ;
typedef TYPE_2__* TSQuery ;
typedef TYPE_3__ QueryItem ;


 char* FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static char **
FUNC_4(TSQuery VAR_1, int *VAR_2)
{
 QueryItem *VAR_3 = FUNC_1(VAR_1);
 char *VAR_4 = FUNC_0(VAR_1);
 char **VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_5 = (char **) FUNC_3(sizeof(char *) * VAR_1->size);

 for (VAR_7 = 0; VAR_7 < VAR_1->size; VAR_7++)
 {
  if (VAR_3->type == VAR_0)
  {
   int VAR_8 = VAR_3->qoperand.length;
   char *VAR_9;

   VAR_9 = FUNC_3(VAR_8 + 1);
   FUNC_2(VAR_9, VAR_4 + VAR_3->qoperand.distance, VAR_8);
   VAR_9[VAR_8] = '\0';

   VAR_5[VAR_6++] = VAR_9;
  }
  VAR_3++;
 }

 *VAR_2 = VAR_6;
 return VAR_5;
}
