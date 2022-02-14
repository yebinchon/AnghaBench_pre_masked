
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ depth; int out; } ;
typedef TYPE_1__ json_writer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(json_writer_t **VAR_0)
{
 json_writer_t *VAR_1 = *VAR_0;

 FUNC_0(VAR_1->depth == 0);
 FUNC_2("\n", VAR_1->out);
 FUNC_1(VAR_1->out);
 FUNC_3(VAR_1);
 *VAR_0 = ((void*)0);
}
