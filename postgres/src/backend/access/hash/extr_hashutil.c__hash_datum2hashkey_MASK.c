
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int * rd_indcollation; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int * FUNC_2 (TYPE_1__*,int,int ) ;

uint32
FUNC_3(Relation VAR_1, Datum VAR_2)
{
 FmgrInfo *VAR_3;
 Oid VAR_4;


 VAR_3 = FUNC_2(VAR_1, 1, VAR_0);
 VAR_4 = VAR_1->rd_indcollation[0];

 return FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_2));
}
