
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* DeviceName; int * PnpId; } ;
typedef TYPE_1__* PPNP_ID_NAME ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_1)
{
  PPNP_ID_NAME VAR_2;

  VAR_2 = VAR_0;
  while (VAR_2->PnpId != ((void*)0))
    {
      if (!FUNC_0(VAR_2->PnpId, VAR_1))
 return VAR_2->DeviceName;

      VAR_2++;
    }

  return "Unknown Device";
}
