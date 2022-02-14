
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_4;

 VAR_0 = FUNC_3("memory", VAR_2,
     &VAR_1, VAR_3);
 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_0);

 VAR_4 = FUNC_4(&VAR_1.nb);
 if (VAR_4)
  FUNC_2(VAR_0);

 return VAR_4;
}
