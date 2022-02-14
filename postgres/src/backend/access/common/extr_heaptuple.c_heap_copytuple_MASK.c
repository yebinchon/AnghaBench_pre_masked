
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_len; int * t_data; int t_tableOid; int t_self; } ;
typedef int * HeapTupleHeader ;
typedef TYPE_1__* HeapTuple ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (int) ;

HeapTuple
FUNC_3(HeapTuple VAR_1)
{
 HeapTuple VAR_2;

 if (!FUNC_0(VAR_1) || VAR_1->t_data == ((void*)0))
  return ((void*)0);

 VAR_2 = (HeapTuple) FUNC_2(VAR_0 + VAR_1->t_len);
 VAR_2->t_len = VAR_1->t_len;
 VAR_2->t_self = VAR_1->t_self;
 VAR_2->t_tableOid = VAR_1->t_tableOid;
 VAR_2->t_data = (HeapTupleHeader) ((char *) VAR_2 + VAR_0);
 FUNC_1((char *) VAR_2->t_data, (char *) VAR_1->t_data, VAR_1->t_len);
 return VAR_2;
}
