
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int t_hoff; int t_infomask2; int t_infomask; } ;
typedef TYPE_2__ xl_heap_header ;
struct TYPE_10__ {int t_hoff; int t_infomask2; int t_infomask; } ;
struct TYPE_7__ {int t_len; TYPE_4__* t_data; int t_tableOid; int t_self; } ;
struct TYPE_9__ {TYPE_1__ tuple; } ;
typedef int Size ;
typedef TYPE_3__ ReorderBufferTupleBuf ;
typedef TYPE_4__* HeapTupleHeader ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void
FUNC_4(char *VAR_3, Size VAR_4, ReorderBufferTupleBuf *VAR_5)
{
 xl_heap_header VAR_6;
 int VAR_7 = VAR_4 - VAR_1;
 HeapTupleHeader VAR_8;

 FUNC_0(VAR_7 >= 0);

 VAR_5->tuple.t_len = VAR_7 + VAR_2;
 VAR_8 = VAR_5->tuple.t_data;


 FUNC_1(&VAR_5->tuple.t_self);


 VAR_5->tuple.t_tableOid = VAR_0;


 FUNC_2((char *) &VAR_6,
     VAR_3,
     VAR_1);

 FUNC_3(VAR_8, 0, VAR_2);

 FUNC_2(((char *) VAR_5->tuple.t_data) + VAR_2,
     VAR_3 + VAR_1,
     VAR_7);

 VAR_8->t_infomask = VAR_6.t_infomask;
 VAR_8->t_infomask2 = VAR_6.t_infomask2;
 VAR_8->t_hoff = VAR_6.t_hoff;
}
