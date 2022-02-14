
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_5__ {int * rd_support; TYPE_1__* rd_indam; } ;
struct TYPE_4__ {int amsupport; } ;
typedef TYPE_2__* Relation ;
typedef int RegProcedure ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;

RegProcedure
FUNC_1(Relation VAR_0,
    AttrNumber VAR_1,
    uint16 VAR_2)
{
 RegProcedure *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_0->rd_indam->amsupport;

 FUNC_0(VAR_2 > 0 && VAR_2 <= (uint16) VAR_4);

 VAR_5 = (VAR_4 * (VAR_1 - 1)) + (VAR_2 - 1);

 VAR_3 = VAR_0->rd_support;

 FUNC_0(VAR_3 != ((void*)0));

 return VAR_3[VAR_5];
}
