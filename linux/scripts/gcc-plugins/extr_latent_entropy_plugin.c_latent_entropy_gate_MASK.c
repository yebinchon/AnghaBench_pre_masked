
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int preds; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,int ) ;

__attribute__((used)) static bool FUNC_5(void)
{
 tree VAR_3;


 if (FUNC_3(VAR_2))
  return 0;


 if (FUNC_1(FUNC_2(VAR_1)->preds) == 0)
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 return FUNC_4("latent_entropy", VAR_3) != VAR_0;
}
