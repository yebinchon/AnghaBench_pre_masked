
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ sign; } ;
typedef TYPE_1__ const NumericVar ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*,int *,TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*,int ) ;

__attribute__((used)) static void
FUNC_6(const NumericVar *VAR_2, NumericVar *VAR_3)
{
 NumericVar VAR_4;

 FUNC_3(&VAR_4);
 FUNC_4(VAR_2, &VAR_4);

 FUNC_5(&VAR_4, 0);

 if (VAR_2->sign == VAR_0 && FUNC_1(VAR_2, &VAR_4) != 0)
  FUNC_0(&VAR_4, &VAR_1, &VAR_4);

 FUNC_4(&VAR_4, VAR_3);
 FUNC_2(&VAR_4);
}
