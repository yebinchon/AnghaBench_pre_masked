
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
typedef int TupleDesc ;
struct TYPE_3__ {int t_data; int t_tableOid; int t_self; int t_len; } ;
typedef int Oid ;
typedef int HeapTupleHeader ;
typedef TYPE_1__ HeapTupleData ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static TupleDesc
FUNC_6(Datum VAR_1, HeapTupleData *VAR_2)
{
 HeapTupleHeader VAR_3;
 Oid VAR_4;
 int32 VAR_5;


 VAR_3 = FUNC_0(VAR_1);


 VAR_2->t_len = FUNC_1(VAR_3);
 FUNC_4(&(VAR_2->t_self));
 VAR_2->t_tableOid = VAR_0;
 VAR_2->t_data = VAR_3;


 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_2(VAR_3);
 return FUNC_5(VAR_4, VAR_5);
}
