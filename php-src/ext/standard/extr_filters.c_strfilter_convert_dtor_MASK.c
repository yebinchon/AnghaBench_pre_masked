
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int abstract; } ;
typedef TYPE_1__ php_stream_filter ;
struct TYPE_6__ {int persistent; } ;
typedef TYPE_2__ php_convert_filter ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(php_stream_filter *VAR_0)
{
 FUNC_1(FUNC_0(VAR_0->abstract) != ((void*)0));

 FUNC_3((php_convert_filter *)FUNC_0(VAR_0->abstract));
 FUNC_2(FUNC_0(VAR_0->abstract), ((php_convert_filter *)FUNC_0(VAR_0->abstract))->persistent);
}
