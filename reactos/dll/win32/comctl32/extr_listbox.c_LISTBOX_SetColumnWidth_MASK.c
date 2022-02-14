
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ column_width; int self; } ;
typedef int LRESULT ;
typedef TYPE_1__ LB_DESCR ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_2( LB_DESCR *VAR_1, INT VAR_2)
{
    if (VAR_2 == VAR_1->column_width) return VAR_0;
    FUNC_1("[%p]: new column width = %d\n", VAR_1->self, VAR_2 );
    VAR_1->column_width = VAR_2;
    FUNC_0( VAR_1 );
    return VAR_0;
}
