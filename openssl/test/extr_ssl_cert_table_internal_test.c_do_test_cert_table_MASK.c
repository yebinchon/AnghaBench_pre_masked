
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int nid; scalar_t__ amask; } ;
typedef TYPE_1__ SSL_CERT_LOOKUP ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(int VAR_1, uint32_t VAR_2, size_t VAR_3,
                              const char *VAR_4)
{
    const SSL_CERT_LOOKUP *VAR_5 = &VAR_0[VAR_3];

    if (VAR_5->nid == VAR_1 && VAR_5->amask == VAR_2)
        return 1;

    FUNC_1("Invalid table entry for certificate type %s, index %zu",
               VAR_4, VAR_3);
    if (VAR_5->nid != VAR_1)
        FUNC_2("Expected %s, got %s\n", FUNC_0(VAR_1),
                  FUNC_0(VAR_5->nid));
    if (VAR_5->amask != VAR_2)
        FUNC_2("Expected auth mask 0x%x, got 0x%x\n", VAR_2, VAR_5->amask);
    return 0;
}
