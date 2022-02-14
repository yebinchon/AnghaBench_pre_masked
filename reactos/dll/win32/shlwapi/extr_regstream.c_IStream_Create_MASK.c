
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * keyNameA; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; int bUnicode; TYPE_1__ u; int dwMode; scalar_t__ dwPos; int dwLength; int pbBuffer; int hKey; TYPE_2__ IStream_iface; } ;
typedef int LPBYTE ;
typedef TYPE_3__ ISHRegStream ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,TYPE_3__*) ;
 int VAR_2 ;

__attribute__((used)) static ISHRegStream *FUNC_3(HKEY VAR_3, LPBYTE VAR_4, DWORD VAR_5)
{
 ISHRegStream* VAR_6;

 VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(ISHRegStream));

 if (VAR_6)
 {
   VAR_6->IStream_iface.lpVtbl = &VAR_2;
   VAR_6->ref = 1;
   VAR_6->hKey = VAR_3;
   VAR_6->pbBuffer = VAR_4;
   VAR_6->dwLength = VAR_5;
   VAR_6->dwPos = 0;
   VAR_6->dwMode = VAR_1;
   VAR_6->u.keyNameA = ((void*)0);
   VAR_6->bUnicode = VAR_0;
 }
 FUNC_2 ("Returning %p\n", VAR_6);
 return VAR_6;
}
