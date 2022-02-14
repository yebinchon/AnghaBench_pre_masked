
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* certificate_file; char* issuer_file; int expected_sct_count; char* sct_text_file; void* sct_dir; void* certs_dir; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 void* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
    FUNC_1();
    if (VAR_1 == ((void*)0))
        return 0;
    VAR_1->certs_dir = VAR_0;
    VAR_1->certificate_file = "embeddedSCTs1.pem";
    VAR_1->issuer_file = "embeddedSCTs1_issuer.pem";
    VAR_1->expected_sct_count = 1;
    VAR_1->sct_dir = VAR_0;
    VAR_1->sct_text_file = "embeddedSCTs1.sct";
    FUNC_0();
    return VAR_2;
}
