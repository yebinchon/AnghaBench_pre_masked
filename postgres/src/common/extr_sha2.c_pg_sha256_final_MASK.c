
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int * state; } ;
typedef TYPE_1__ pg_sha256_ctx ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4(pg_sha256_ctx *VAR_1, uint8 *VAR_2)
{

 if (VAR_2 != ((void*)0))
 {
  FUNC_1(VAR_1);


  {

   int VAR_3;

   for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
   {
    FUNC_0(VAR_1->state[VAR_3], VAR_1->state[VAR_3]);
   }
  }

  FUNC_2(VAR_2, VAR_1->state, VAR_0);
 }


 FUNC_3(VAR_1, 0, sizeof(pg_sha256_ctx));
}
