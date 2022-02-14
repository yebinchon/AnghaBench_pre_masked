
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ disable_mdc; } ;
typedef int PushFilter ;
typedef TYPE_1__ PGP_Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(PushFilter **VAR_3, PGP_Context *VAR_4, PushFilter *VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (VAR_4->disable_mdc)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;

 VAR_6 = FUNC_1(VAR_5, VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_3, &VAR_2, VAR_4, VAR_5);
}
