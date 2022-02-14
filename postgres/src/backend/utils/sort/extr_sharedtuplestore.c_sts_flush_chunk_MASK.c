
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * data; } ;
struct TYPE_9__ {size_t participant; TYPE_2__* sts; TYPE_5__* write_chunk; int * write_pointer; int write_file; } ;
struct TYPE_8__ {TYPE_1__* participants; } ;
struct TYPE_7__ {size_t npages; } ;
typedef TYPE_3__ SharedTuplestoreAccessor ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ,TYPE_5__*,size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_5__*,int ,size_t) ;

__attribute__((used)) static void
FUNC_5(SharedTuplestoreAccessor *VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;

 VAR_4 = VAR_2 * VAR_0;
 VAR_5 = FUNC_0(VAR_3->write_file, VAR_3->write_chunk, VAR_4);
 if (VAR_5 != VAR_4)
  FUNC_1(VAR_1,
    (FUNC_2(),
     FUNC_3("could not write to temporary file: %m")));
 FUNC_4(VAR_3->write_chunk, 0, VAR_4);
 VAR_3->write_pointer = &VAR_3->write_chunk->data[0];
 VAR_3->sts->participants[VAR_3->participant].npages +=
  VAR_2;
}
