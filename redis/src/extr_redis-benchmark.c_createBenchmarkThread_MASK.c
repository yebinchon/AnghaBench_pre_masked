
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; int el; } ;
typedef TYPE_1__ benchmarkThread ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ,int *,int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static benchmarkThread *FUNC_3(int VAR_1) {
    benchmarkThread *VAR_2 = FUNC_2(sizeof(*VAR_2));
    if (VAR_2 == ((void*)0)) return ((void*)0);
    VAR_2->index = VAR_1;
    VAR_2->el = FUNC_0(1024*10);
    FUNC_1(VAR_2->el,1,VAR_0,((void*)0),((void*)0));
    return VAR_2;
}
