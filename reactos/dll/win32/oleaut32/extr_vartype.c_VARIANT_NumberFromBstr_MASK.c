
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VARTYPE ;
typedef int VARIANTARG ;
typedef int ULONG ;
struct TYPE_4__ {int dwInFlags; int cDig; } ;
typedef int OLECHAR ;
typedef TYPE_1__ NUMPARSE ;
typedef int LCID ;
typedef int HRESULT ;
typedef int BYTE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,void*) ;
 int FUNC_3 (TYPE_1__*,int *,int,int *) ;
 int FUNC_4 (int *,int ,int ,TYPE_1__*,int *) ;

__attribute__((used)) static HRESULT FUNC_5(OLECHAR* VAR_1, LCID VAR_2, ULONG VAR_3,
                                      void* VAR_4, VARTYPE VAR_5)
{
  VARIANTARG VAR_6;
  HRESULT VAR_7;
  NUMPARSE VAR_8;
  BYTE VAR_9[1024];


  VAR_8.cDig = FUNC_0(VAR_9);
  VAR_8.dwInFlags = VAR_0;

  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3, &VAR_8, VAR_9);

  if (FUNC_1(VAR_7))
  {

    VAR_7 = FUNC_3(&VAR_8, VAR_9, 1 << VAR_5, &VAR_6);
    if (FUNC_1(VAR_7))
      FUNC_2(&VAR_6, VAR_5, VAR_4);
  }
  return VAR_7;
}
