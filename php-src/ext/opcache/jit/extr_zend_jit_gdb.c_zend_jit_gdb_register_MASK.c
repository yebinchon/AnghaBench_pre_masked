
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int line_start; int filename; } ;
typedef TYPE_1__ zend_op_array ;
struct TYPE_6__ {uintptr_t mcaddr; char const* name; char* filename; int objsize; int obj; int lineno; scalar_t__ szmcode; } ;
typedef TYPE_2__ zend_gdbjit_ctx ;
typedef scalar_t__ uint32_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0,
                                 const zend_op_array *VAR_1,
                                 const void *VAR_2,
                                 size_t VAR_3)
{
 zend_gdbjit_ctx VAR_4;

 VAR_4.mcaddr = (uintptr_t)VAR_2;
 VAR_4.szmcode = (uint32_t)VAR_3;
 VAR_4.name = VAR_0;
 VAR_4.filename = VAR_1 ? FUNC_0(VAR_1->filename) : "unknown";
 VAR_4.lineno = VAR_1 ? VAR_1->line_start : 0;

 FUNC_2(&VAR_4);

 return FUNC_1(&VAR_4.obj, VAR_4.objsize);
}
