
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long epoch_time_in_ms; char* certificate_file; char* issuer_file; int expected_sct_count; int test_validity; scalar_t__ expected_valid_sct_count; int certs_dir; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
    FUNC_1();
    if (VAR_1 == ((void*)0))
        return 0;
    VAR_1->epoch_time_in_ms = 1365094800000ULL;
    VAR_1->certs_dir = VAR_0;
    VAR_1->certificate_file = "embeddedSCTs1.pem";
    VAR_1->issuer_file = "embeddedSCTs1_issuer.pem";
    VAR_1->expected_sct_count = 1;
    VAR_1->expected_valid_sct_count = 0;
    VAR_1->test_validity = 1;
    FUNC_0();
    return VAR_2;
}
