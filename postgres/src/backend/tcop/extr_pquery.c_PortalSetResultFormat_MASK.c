
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_5__ {scalar_t__* formats; int portalContext; TYPE_1__* tupDesc; } ;
struct TYPE_4__ {int natts; } ;
typedef TYPE_2__* Portal ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;

void
FUNC_5(Portal VAR_2, int VAR_3, int16 *VAR_4)
{
 int VAR_5;
 int VAR_6;


 if (VAR_2->tupDesc == ((void*)0))
  return;
 VAR_5 = VAR_2->tupDesc->natts;
 VAR_2->formats = (int16 *)
  FUNC_0(VAR_2->portalContext,
         VAR_5 * sizeof(int16));
 if (VAR_3 > 1)
 {

  if (VAR_3 != VAR_5)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("bind message has %d result formats but query has %d columns",
       VAR_3, VAR_5)));
  FUNC_4(VAR_2->formats, VAR_4, VAR_5 * sizeof(int16));
 }
 else if (VAR_3 > 0)
 {

  int16 VAR_7 = VAR_4[0];

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   VAR_2->formats[VAR_6] = VAR_7;
 }
 else
 {

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   VAR_2->formats[VAR_6] = 0;
 }
}
