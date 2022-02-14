
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used; } ;
typedef int * LPVOID ;
typedef size_t DWORD ;
typedef int BYTE ;


 int * FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_1( LPVOID VAR_5 )
{
  LPVOID VAR_6;
  DWORD VAR_7;


  if( VAR_5 == ((void*)0) )
  {
    return;
  }

  VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_2);
  VAR_7 = ((BYTE*)VAR_6 - (BYTE*)VAR_4)/VAR_3;

  VAR_4[ VAR_7 ].used = VAR_1;
}
