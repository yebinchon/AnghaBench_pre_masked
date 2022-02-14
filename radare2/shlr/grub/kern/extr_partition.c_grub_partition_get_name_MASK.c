
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* grub_partition_t ;
typedef int buf ;
struct TYPE_5__ {scalar_t__ number; TYPE_1__* partmap; struct TYPE_5__* parent; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,char*,char*,scalar_t__) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

char *
FUNC_7 (const grub_partition_t VAR_0)
{
  char *VAR_1 = 0;
  int VAR_2 = 0;
  grub_partition_t VAR_3;
  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->parent)
    {



   char VAR_4[FUNC_6 (VAR_3->partmap->name) + 25];



   int VAR_5;
      FUNC_4 (VAR_4, sizeof (VAR_4), "%s%d", VAR_3->partmap->name,
       VAR_3->number + 1);
      VAR_5 = FUNC_6 (VAR_4);
      if (VAR_2)
 {
   VAR_1 = FUNC_3 (VAR_1, VAR_2 + VAR_5 + 2);
   FUNC_2 (VAR_1 + VAR_5 + 1, VAR_1, VAR_2);
   VAR_1[VAR_2 + 1 + VAR_5] = 0;
   FUNC_2 (VAR_1, VAR_4, VAR_5);
   VAR_1[VAR_5] = ',';
   VAR_2 = VAR_2 + 1 + VAR_5;
 }
      else
 {
  if (VAR_1){
    FUNC_0(VAR_1);
    VAR_1 = ((void*)0);
  }
   VAR_2 = VAR_5;
   VAR_1 = FUNC_5 (VAR_4);
 }
    }
  return VAR_1;
}
