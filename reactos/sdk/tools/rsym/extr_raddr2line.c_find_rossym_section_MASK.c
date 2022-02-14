
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t NumberOfSections; } ;
struct TYPE_6__ {scalar_t__ Name; } ;
typedef TYPE_1__* PIMAGE_SECTION_HEADER ;
typedef TYPE_2__* PIMAGE_FILE_HEADER ;


 scalar_t__ FUNC_0 (char*,char*) ;

PIMAGE_SECTION_HEADER
FUNC_1 ( PIMAGE_FILE_HEADER VAR_0,
 PIMAGE_SECTION_HEADER VAR_1 )
{
 size_t VAR_2;
 for ( VAR_2 = 0; VAR_2 < VAR_0->NumberOfSections; VAR_2++ )
 {
  if ( 0 == FUNC_0 ( (char*)VAR_1[VAR_2].Name, ".rossym" ) )
   return &VAR_1[VAR_2];
 }
 return ((void*)0);
}
