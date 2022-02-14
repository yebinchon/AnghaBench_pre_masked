
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sink_cookie; scalar_t__ sink_dispatch; int sink_id; int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef int IUnknown ;
typedef int IConnectionPointContainer ;
typedef int IConnectionPoint ;


 int FUNC_0 (int *,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *,void**) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(php_com_dotnet_object *VAR_1, int VAR_2)
{
 if (VAR_1->sink_dispatch) {
  IConnectionPointContainer *VAR_3;
  IConnectionPoint *VAR_4;

  if (FUNC_6(FUNC_5(FUNC_7(&VAR_1->v),
    &VAR_0, (void**)&VAR_3))) {

   if (FUNC_6(FUNC_0(VAR_3,
     &VAR_1->sink_id, &VAR_4))) {

    if (VAR_2) {
     FUNC_2(VAR_4, (IUnknown*)VAR_1->sink_dispatch, &VAR_1->sink_cookie);
    } else {
     FUNC_4(VAR_4, VAR_1->sink_cookie);
    }
    FUNC_3(VAR_4);
   }
   FUNC_1(VAR_3);
  }
 }
}
