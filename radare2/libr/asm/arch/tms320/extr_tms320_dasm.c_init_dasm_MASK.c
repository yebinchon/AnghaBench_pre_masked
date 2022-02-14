
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int * insn; int * head; int f; scalar_t__ length; scalar_t__ status; int stream; int syntax; } ;
typedef TYPE_1__ tms320_dasm_t ;


 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(tms320_dasm_t * VAR_0, const ut8 * VAR_1, int VAR_2)
{
 FUNC_3(VAR_0->syntax, "invalid");
 FUNC_0(VAR_0->stream, VAR_1, FUNC_2(sizeof(VAR_0->stream), VAR_2));

 VAR_0->status = 0;
 VAR_0->length = 0;

 FUNC_1(&VAR_0->f, 0, sizeof(VAR_0->f));

 VAR_0->head = ((void*)0);
 VAR_0->insn = ((void*)0);
}
