
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; int max; } ;
typedef TYPE_1__ fz_store ;
struct TYPE_10__ {TYPE_1__* store; } ;
typedef TYPE_2__ fz_context ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,char*,size_t,...) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,size_t) ;

int FUNC_8(fz_context *VAR_2, size_t VAR_3, int *VAR_4)
{
 fz_store *VAR_5;
 size_t VAR_6;

 VAR_5 = VAR_2->store;
 if (VAR_5 == ((void*)0))
  return 0;






 do
 {
  size_t VAR_7;


  if (*VAR_4 >= 16)
   VAR_6 = 0;
  else if (VAR_5->max != VAR_0)
   VAR_6 = VAR_5->max / 16 * (16 - *VAR_4);
  else
   VAR_6 = VAR_5->size / (16 - *VAR_4) * (15 - *VAR_4);
  (*VAR_4)++;


  if (VAR_3 > VAR_1 - VAR_5->size)
   VAR_7 = VAR_1 - VAR_6;
  else if (VAR_3 + VAR_5->size > VAR_6)
   continue;
  else
   VAR_7 = VAR_3 + VAR_5->size - VAR_6;

  if (FUNC_7(VAR_2, VAR_7))
  {





   return 1;
  }
 }
 while (VAR_6 > 0);






 return 0;
}
