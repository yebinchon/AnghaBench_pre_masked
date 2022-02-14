
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * planes; } ;
struct buffer {int size; TYPE_1__ mpi; int pool; int buffer; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct buffer *VAR_1 = VAR_0;
    FUNC_1(VAR_1->buffer);
    FUNC_2(VAR_1->pool);
    FUNC_0(VAR_1->mpi.planes[0], VAR_1->size);
}
