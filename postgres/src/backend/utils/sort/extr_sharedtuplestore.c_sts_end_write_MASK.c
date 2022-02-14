
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t participant; TYPE_2__* sts; int * write_file; int * write_chunk; } ;
struct TYPE_7__ {TYPE_1__* participants; } ;
struct TYPE_6__ {int writing; } ;
typedef TYPE_3__ SharedTuplestoreAccessor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

void
FUNC_3(SharedTuplestoreAccessor *VAR_0)
{
 if (VAR_0->write_file != ((void*)0))
 {
  FUNC_2(VAR_0);
  FUNC_0(VAR_0->write_file);
  FUNC_1(VAR_0->write_chunk);
  VAR_0->write_chunk = ((void*)0);
  VAR_0->write_file = ((void*)0);
  VAR_0->sts->participants[VAR_0->participant].writing = 0;
 }
}
