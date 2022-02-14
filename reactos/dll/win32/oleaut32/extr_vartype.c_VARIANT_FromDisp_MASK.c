
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VARTYPE ;
typedef int VARIANTARG ;
struct TYPE_3__ {int member_3; int member_2; int * member_1; int * member_0; } ;
typedef int LCID ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ DISPPARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *,int ,int ,TYPE_1__*,int *,int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,void*) ;
 int FUNC_3 (int *,int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static HRESULT FUNC_6(IDispatch* VAR_5, LCID VAR_6, void* VAR_7,
                                VARTYPE VAR_8, DWORD VAR_9)
{
  static DISPPARAMS VAR_10 = { ((void*)0), ((void*)0), 0, 0 };
  VARIANTARG VAR_11, VAR_12;
  HRESULT VAR_13;

  if (!VAR_5)
    return VAR_2;


  FUNC_5(&VAR_11);
  VAR_13 = FUNC_0(VAR_5, VAR_1, &VAR_4, VAR_6, VAR_0,
                          &VAR_10, &VAR_11, ((void*)0), ((void*)0));

  if (FUNC_1(VAR_13))
  {

    FUNC_5(&VAR_12);
    VAR_13 = FUNC_3(&VAR_12, &VAR_11, VAR_6, VAR_9, VAR_8);
    FUNC_4(&VAR_11);

    if (FUNC_1(VAR_13))
      FUNC_2(&VAR_12, VAR_8, VAR_7);
  }
  else
    VAR_13 = VAR_3;
  return VAR_13;
}
