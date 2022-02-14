
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ output_to_client; scalar_t__ output_to_server; int assoc_context; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(void)
{
 ErrorData *VAR_3 = &VAR_0[VAR_1];
 MemoryContext VAR_4;

 VAR_2++;
 FUNC_0();
 VAR_4 = FUNC_1(VAR_3->assoc_context);
 if (VAR_3->output_to_server && &FUNC_2)
  FUNC_2) (VAR_3);


 if (VAR_3->output_to_server)
  FUNC_4(VAR_3);


 if (VAR_3->output_to_client)
  FUNC_3(VAR_3);

 FUNC_1(VAR_4);
 VAR_2--;
}
