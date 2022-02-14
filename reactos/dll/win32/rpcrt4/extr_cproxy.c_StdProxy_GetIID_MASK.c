
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * piid; int name; } ;
typedef TYPE_1__ StdProxyImpl ;
typedef int LPVOID ;
typedef int IID ;


 int FUNC_0 (char*,TYPE_1__*,int const**,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(LPVOID VAR_0,
                               const IID **VAR_1)
{
  StdProxyImpl *VAR_2 = FUNC_1( VAR_0 );
  FUNC_0("(%p)->GetIID(%p) %s\n",VAR_2,VAR_1,VAR_2->name);

  *VAR_1 = VAR_2->piid;
}
