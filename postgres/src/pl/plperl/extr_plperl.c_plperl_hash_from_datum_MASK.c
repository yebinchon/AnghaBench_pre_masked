
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
typedef int TupleDesc ;
struct TYPE_3__ {int t_data; int t_len; } ;
typedef int SV ;
typedef int Oid ;
typedef int HeapTupleHeader ;
typedef TYPE_1__ HeapTupleData ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static SV *
FUNC_7(Datum VAR_0)
{
 HeapTupleHeader VAR_1;
 Oid VAR_2;
 int32 VAR_3;
 TupleDesc VAR_4;
 HeapTupleData VAR_5;
 SV *VAR_6;

 VAR_1 = FUNC_0(VAR_0);


 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_5(VAR_2, VAR_3);


 VAR_5.t_len = FUNC_1(VAR_1);
 VAR_5.t_data = VAR_1;

 VAR_6 = FUNC_6(&VAR_5, VAR_4, 1);
 FUNC_4(VAR_4);

 return VAR_6;
}
