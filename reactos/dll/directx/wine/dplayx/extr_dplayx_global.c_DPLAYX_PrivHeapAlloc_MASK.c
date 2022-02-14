
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_2__ {int * data; scalar_t__ used; } ;
typedef int * LPVOID ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static LPVOID FUNC_3( DWORD VAR_5, DWORD VAR_6 )
{
  LPVOID VAR_7 = ((void*)0);
  UINT VAR_8;

  if( VAR_6 > (VAR_2 - sizeof(BOOL)) )
  {
    FUNC_1( "Size exceeded. Request of 0x%08x\n", VAR_6 );
    VAR_6 = VAR_2 - sizeof(BOOL);
  }


  VAR_8 = 0;
  while( VAR_8 < VAR_3 && VAR_4[ VAR_8 ].used ) { VAR_8++; }

  if( VAR_8 < VAR_3 )
  {

    VAR_4[ VAR_8 ].used = VAR_1;
    VAR_7 = VAR_4[ VAR_8 ].data;
  }
  else
  {
    FUNC_0( "No free block found\n" );
    return ((void*)0);
  }

  if( VAR_5 & VAR_0 )
  {
    FUNC_2( VAR_7, VAR_6 );
  }

  return VAR_7;
}
