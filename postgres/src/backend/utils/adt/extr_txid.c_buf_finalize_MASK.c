
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TxidSnapshot ;
struct TYPE_4__ {int * data; int len; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static TxidSnapshot *
FUNC_2(StringInfo VAR_0)
{
 TxidSnapshot *VAR_1 = (TxidSnapshot *) VAR_0->data;

 FUNC_0(VAR_1, VAR_0->len);


 VAR_0->data = ((void*)0);
 FUNC_1(VAR_0);

 return VAR_1;
}
