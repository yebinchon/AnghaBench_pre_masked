
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double table_len; double tuple_len; double dead_tuple_len; double free_space; double tuple_count; double dead_tuple_count; } ;
typedef TYPE_1__ pgstattuple_type ;
typedef int TupleDesc ;
typedef int HeapTuple ;
typedef int FunctionCallInfo ;
typedef int Datum ;
typedef int AttInMetadata ;


 int FUNC_0 (int *,char**) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (char*,int,char*,double) ;

__attribute__((used)) static Datum
FUNC_6(pgstattuple_type *VAR_5, FunctionCallInfo VAR_6)
{



 HeapTuple VAR_7;
 char *VAR_8[9];
 char VAR_9[9][314];
 int VAR_10;
 double VAR_11;
 double VAR_12;
 double VAR_13;
 TupleDesc VAR_14;
 AttInMetadata *VAR_15;


 if (FUNC_4(VAR_6, ((void*)0), &VAR_14) != VAR_4)
  FUNC_3(VAR_0, "return type must be a row type");





 VAR_15 = FUNC_2(VAR_14);

 if (VAR_5->table_len == 0)
 {
  VAR_11 = 0.0;
  VAR_12 = 0.0;
  VAR_13 = 0.0;
 }
 else
 {
  VAR_11 = 100.0 * VAR_5->tuple_len / VAR_5->table_len;
  VAR_12 = 100.0 * VAR_5->dead_tuple_len / VAR_5->table_len;
  VAR_13 = 100.0 * VAR_5->free_space / VAR_5->table_len;
 }






 for (VAR_10 = 0; VAR_10 < 9; VAR_10++)
  VAR_8[VAR_10] = VAR_9[VAR_10];
 VAR_10 = 0;
 FUNC_5(VAR_8[VAR_10++], 314, VAR_1, VAR_5->table_len);
 FUNC_5(VAR_8[VAR_10++], 314, VAR_1, VAR_5->tuple_count);
 FUNC_5(VAR_8[VAR_10++], 314, VAR_1, VAR_5->tuple_len);
 FUNC_5(VAR_8[VAR_10++], 314, "%.2f", VAR_11);
 FUNC_5(VAR_8[VAR_10++], 314, VAR_1, VAR_5->dead_tuple_count);
 FUNC_5(VAR_8[VAR_10++], 314, VAR_1, VAR_5->dead_tuple_len);
 FUNC_5(VAR_8[VAR_10++], 314, "%.2f", VAR_12);
 FUNC_5(VAR_8[VAR_10++], 314, VAR_1, VAR_5->free_space);
 FUNC_5(VAR_8[VAR_10++], 314, "%.2f", VAR_13);


 VAR_7 = FUNC_0(VAR_15, VAR_8);


 return FUNC_1(VAR_7);
}
