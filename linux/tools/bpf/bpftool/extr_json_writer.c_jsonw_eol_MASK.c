
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int out; int pretty; } ;
typedef TYPE_1__ json_writer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char,int ) ;

__attribute__((used)) static void FUNC_2(json_writer_t *VAR_0)
{
 if (!VAR_0->pretty)
  return;

 FUNC_1('\n', VAR_0->out);
 FUNC_0(VAR_0);
}
