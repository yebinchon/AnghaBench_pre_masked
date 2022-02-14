
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * bufptr; int nchars; int * stream; int * bufend; } ;
typedef TYPE_1__ PrintfTarget ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, PrintfTarget *VAR_1)
{
 if (VAR_1->bufend != ((void*)0) && VAR_1->bufptr >= VAR_1->bufend)
 {

  if (VAR_1->stream == ((void*)0))
  {
   VAR_1->nchars++;
   return;
  }
  FUNC_0(VAR_1);
 }
 *(VAR_1->bufptr++) = VAR_0;
}
