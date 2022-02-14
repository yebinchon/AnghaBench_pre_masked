
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int depth; int out; } ;
typedef TYPE_1__ json_writer_t ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(json_writer_t *VAR_0)
{
 unsigned VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->depth; ++VAR_1)
  FUNC_0("    ", VAR_0->out);
}
