
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int dsa_pointer ;
struct TYPE_11__ {scalar_t__ nallocatable; scalar_t__ nmax; int nextspan; } ;
typedef TYPE_2__ dsa_area_span ;
struct TYPE_12__ {int * spans; } ;
typedef TYPE_3__ dsa_area_pool ;
struct TYPE_13__ {TYPE_1__* control; } ;
typedef TYPE_4__ dsa_area ;
struct TYPE_10__ {TYPE_3__* pools; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_4__*,int ) ;
 TYPE_2__* FUNC_5 (TYPE_4__*,int ) ;

void
FUNC_6(dsa_area *VAR_3)
{
 int VAR_4;





 for (VAR_4 = VAR_0 - 1; VAR_4 >= 0; --VAR_4)
 {
  dsa_area_pool *VAR_5 = &VAR_3->control->pools[VAR_4];
  dsa_pointer VAR_6;

  if (VAR_4 == VAR_1)
  {

   continue;
  }






  FUNC_2(FUNC_0(VAR_3, VAR_4), VAR_2);
  VAR_6 = VAR_5->spans[1];
  while (FUNC_1(VAR_6))
  {
   dsa_area_span *VAR_7 = FUNC_5(VAR_3, VAR_6);
   dsa_pointer VAR_8 = VAR_7->nextspan;

   if (VAR_7->nallocatable == VAR_7->nmax)
    FUNC_4(VAR_3, VAR_6);

   VAR_6 = VAR_8;
  }
  FUNC_3(FUNC_0(VAR_3, VAR_4));
 }
}
