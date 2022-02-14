
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WRes ;
struct TYPE_3__ {scalar_t__ handle; int * file; } ;
typedef TYPE_1__ CSzFile ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;

WRes FUNC_3(CSzFile *VAR_1)
{
  if (VAR_1->file != ((void*)0))
  {
    int VAR_2 = FUNC_2(VAR_1->file);
    if (VAR_2 != 0)
      return VAR_2;
    VAR_1->file = ((void*)0);
  }

  return 0;
}
