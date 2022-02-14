
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sem ;
struct TYPE_9__ {int scalar; int array_element_end; int array_element_start; int array_end; int object_start; void* semstate; } ;
struct TYPE_8__ {scalar_t__ ndims; scalar_t__ dims; } ;
struct TYPE_7__ {int lex; TYPE_2__* ctx; } ;
typedef TYPE_1__ PopulateArrayState ;
typedef TYPE_2__ PopulateArrayContext ;
typedef TYPE_3__ JsonSemAction ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(PopulateArrayContext *VAR_5, char *VAR_6, int VAR_7)
{
 PopulateArrayState VAR_8;
 JsonSemAction VAR_9;

 VAR_8.lex = FUNC_1(VAR_6, VAR_7, 1);
 VAR_8.ctx = VAR_5;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.semstate = (void *) &VAR_8;
 VAR_9.object_start = VAR_3;
 VAR_9.array_end = VAR_0;
 VAR_9.array_element_start = VAR_2;
 VAR_9.array_element_end = VAR_1;
 VAR_9.scalar = VAR_4;

 FUNC_4(VAR_8.lex, &VAR_9);


 FUNC_0(VAR_5->ndims > 0 && VAR_5->dims);

 FUNC_3(VAR_8.lex);
}
