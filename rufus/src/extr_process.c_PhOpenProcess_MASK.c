
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * UniqueThread; scalar_t__ UniqueProcess; } ;
typedef int * PHANDLE ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef scalar_t__ LONG_PTR ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ CLIENT_ID ;
typedef int ACCESS_MASK ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int *,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int *,TYPE_1__*) ;

NTSTATUS FUNC_6(PHANDLE VAR_3, ACCESS_MASK VAR_4, HANDLE VAR_5)
{
 NTSTATUS VAR_6 = VAR_2;
 OBJECT_ATTRIBUTES VAR_7;
 CLIENT_ID VAR_8;

 if ((LONG_PTR)VAR_5 == (LONG_PTR)FUNC_0()) {
  *VAR_3 = FUNC_3();
  return 0;
 }

 FUNC_4(VAR_0, VAR_1);
 if (!FUNC_2(VAR_6))
  return VAR_6;

 VAR_8.UniqueProcess = VAR_5;
 VAR_8.UniqueThread = ((void*)0);

 FUNC_1(&VAR_7, ((void*)0), 0, ((void*)0), ((void*)0));
 VAR_6 = FUNC_5(VAR_3, VAR_4, &VAR_7, &VAR_8);

 return VAR_6;
}
