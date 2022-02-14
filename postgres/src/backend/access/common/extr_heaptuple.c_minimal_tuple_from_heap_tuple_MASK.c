
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_7__ {scalar_t__ t_len; scalar_t__ t_data; } ;
struct TYPE_6__ {scalar_t__ t_len; } ;
typedef TYPE_1__* MinimalTuple ;
typedef TYPE_2__* HeapTuple ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

MinimalTuple
FUNC_3(HeapTuple VAR_1)
{
 MinimalTuple VAR_2;
 uint32 VAR_3;

 FUNC_0(VAR_1->t_len > VAR_0);
 VAR_3 = VAR_1->t_len - VAR_0;
 VAR_2 = (MinimalTuple) FUNC_2(VAR_3);
 FUNC_1(VAR_2, (char *) VAR_1->t_data + VAR_0, VAR_3);
 VAR_2->t_len = VAR_3;
 return VAR_2;
}
