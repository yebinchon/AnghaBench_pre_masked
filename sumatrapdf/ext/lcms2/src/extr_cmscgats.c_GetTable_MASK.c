
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nTable; scalar_t__ TablesCount; int * Tab; } ;
typedef TYPE_1__ cmsIT8 ;
typedef int cmsContext ;
typedef int TABLE ;


 int FUNC_0 (int ,TYPE_1__*,char*,scalar_t__) ;

__attribute__((used)) static
TABLE* FUNC_1(cmsContext VAR_0, cmsIT8* VAR_1)
{
   if ((VAR_1 -> nTable >= VAR_1 ->TablesCount)) {

           FUNC_0(VAR_0, VAR_1, "Table %d out of sequence", VAR_1 -> nTable);
           return VAR_1 -> Tab;
   }

   return VAR_1 ->Tab + VAR_1 ->nTable;
}
