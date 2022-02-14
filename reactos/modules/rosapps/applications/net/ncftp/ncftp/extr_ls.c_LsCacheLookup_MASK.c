
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ expiration; int hits; int * itempath; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const* const,int *) ;
 int FUNC_2 (scalar_t__*) ;

int
FUNC_3(const char *const VAR_3)
{
 int VAR_4, VAR_5;
 time_t VAR_6;

 (void) FUNC_2(&VAR_6);
 for (VAR_4=0, VAR_5=VAR_1; VAR_4<VAR_2; VAR_4++) {
  if (--VAR_5 < 0)
   VAR_5 = VAR_2 - 1;
  if ((VAR_0[VAR_5].expiration != (time_t) 0) && (VAR_0[VAR_5].itempath != ((void*)0))) {
   if (FUNC_1(VAR_3, VAR_0[VAR_5].itempath) == 0) {
    if (VAR_6 > VAR_0[VAR_5].expiration) {

     FUNC_0(VAR_5);
     return (-1);
    }
    VAR_0[VAR_5].hits++;
    return (VAR_5);
   }
  }
 }
 return (-1);
}
