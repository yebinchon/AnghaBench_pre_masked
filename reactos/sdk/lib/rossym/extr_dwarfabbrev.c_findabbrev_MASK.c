
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_5__ {scalar_t__ num; } ;
typedef TYPE_1__ DwarfAbbrev ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static DwarfAbbrev*
FUNC_1(DwarfAbbrev *VAR_1, int VAR_2, ulong VAR_3)
{
 int VAR_4;

 for(VAR_4=0; VAR_4<VAR_2; VAR_4++)
  if(VAR_1[VAR_4].num == VAR_3)
   return &VAR_1[VAR_4];
 FUNC_0("abbrev not found");
 return VAR_0;
}
