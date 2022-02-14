
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int deskey; int remotekey; int remotename; } ;
typedef TYPE_1__ cryptkeyarg2 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

bool_t
FUNC_3(register XDR *VAR_2, cryptkeyarg2 *VAR_3)
{

 if (!FUNC_1(VAR_2, &VAR_3->remotename))
  return (VAR_0);
 if (!FUNC_2(VAR_2, &VAR_3->remotekey))
  return (VAR_0);
 if (!FUNC_0(VAR_2, &VAR_3->deskey))
  return (VAR_0);
 return (VAR_1);
}
