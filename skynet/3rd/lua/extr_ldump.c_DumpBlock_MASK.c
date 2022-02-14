
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; scalar_t__ (* writer ) (int ,void const*,size_t,int ) ;int L; int data; } ;
typedef TYPE_1__ DumpState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,void const*,size_t,int ) ;

__attribute__((used)) static void FUNC_3 (const void *VAR_0, size_t VAR_1, DumpState *VAR_2) {
  if (VAR_2->status == 0 && VAR_1 > 0) {
    FUNC_1(VAR_2->L);
    VAR_2->status = (*VAR_2->writer)(VAR_2->L, VAR_0, VAR_1, VAR_2->data);
    FUNC_0(VAR_2->L);
  }
}
