
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_len; int * t_data; int t_tableOid; int t_self; } ;
typedef int * HeapTupleHeader ;
typedef TYPE_1__* HeapTuple ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(HeapTuple VAR_0, HeapTuple VAR_1)
{
 if (!FUNC_0(VAR_0) || VAR_0->t_data == ((void*)0))
 {
  VAR_1->t_data = ((void*)0);
  return;
 }

 VAR_1->t_len = VAR_0->t_len;
 VAR_1->t_self = VAR_0->t_self;
 VAR_1->t_tableOid = VAR_0->t_tableOid;
 VAR_1->t_data = (HeapTupleHeader) FUNC_2(VAR_0->t_len);
 FUNC_1((char *) VAR_1->t_data, (char *) VAR_0->t_data, VAR_0->t_len);
}
