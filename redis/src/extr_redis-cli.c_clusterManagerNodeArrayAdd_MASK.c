
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; scalar_t__ count; int ** nodes; } ;
typedef TYPE_1__ clusterManagerNodeArray ;
typedef int clusterManagerNode ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(clusterManagerNodeArray *VAR_0,
                                       clusterManagerNode *VAR_1)
{
    FUNC_0(VAR_0->nodes < (VAR_0->nodes + VAR_0->len));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_0->count < VAR_0->len);
    VAR_0->nodes[VAR_0->count++] = VAR_1;
}
