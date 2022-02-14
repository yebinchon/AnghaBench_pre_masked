
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ case_sensitive; } ;
typedef TYPE_1__ fcb ;
struct TYPE_6__ {int Flags; } ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_2__ FILE_CASE_SENSITIVE_INFORMATION ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static NTSTATUS FUNC_0(FILE_CASE_SENSITIVE_INFORMATION* VAR_2, fcb* VAR_3, LONG* VAR_4) {
    VAR_2->Flags = VAR_3->case_sensitive ? VAR_0 : 0;

    *VAR_4 -= sizeof(FILE_CASE_SENSITIVE_INFORMATION);

    return VAR_1;
}
