
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {int t_len; scalar_t__ t_data; int t_tableOid; int t_self; } ;
struct TYPE_6__ {int t_len; } ;
typedef TYPE_1__* MinimalTuple ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (char*,TYPE_1__*,int) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_4 ;

HeapTuple
FUNC_5(MinimalTuple VAR_5)
{
 HeapTuple VAR_6;
 uint32 VAR_7 = VAR_5->t_len + VAR_3;

 VAR_6 = (HeapTuple) FUNC_4(VAR_0 + VAR_7);
 VAR_6->t_len = VAR_7;
 FUNC_0(&(VAR_6->t_self));
 VAR_6->t_tableOid = VAR_2;
 VAR_6->t_data = (HeapTupleHeader) ((char *) VAR_6 + VAR_0);
 FUNC_1((char *) VAR_6->t_data + VAR_3, VAR_5, VAR_5->t_len);
 FUNC_2(VAR_6->t_data, 0, FUNC_3(VAR_1, VAR_4));
 return VAR_6;
}
