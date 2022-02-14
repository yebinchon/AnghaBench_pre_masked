
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rank; } ;
typedef TYPE_1__ rank_context ;
typedef scalar_t__ int64 ;
typedef int WindowObject ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_5(WindowObject VAR_0)
{
 bool VAR_1 = 0;
 int64 VAR_2 = FUNC_1(VAR_0);
 rank_context *VAR_3;

 VAR_3 = (rank_context *)
  FUNC_2(VAR_0, sizeof(rank_context));

 if (VAR_3->rank == 0)
 {

  FUNC_0(VAR_2 == 0);
  VAR_3->rank = 1;
 }
 else
 {
  FUNC_0(VAR_2 > 0);

  if (!FUNC_3(VAR_0, VAR_2 - 1, VAR_2))
   VAR_1 = 1;
 }


 FUNC_4(VAR_0, VAR_2);

 return VAR_1;
}
