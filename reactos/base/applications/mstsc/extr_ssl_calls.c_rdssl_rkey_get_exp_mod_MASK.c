
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8 ;
typedef int uint32 ;
struct TYPE_2__ {char pubexp; } ;
typedef TYPE_1__ RSAPUBKEY ;
typedef int PUBLICKEYSTRUC ;


 int FUNC_0 (char*,char*,char*,int ,char*,int ) ;
 int FUNC_1 (char*,char*,int ) ;

int FUNC_2(uint8 * VAR_0, uint8 * VAR_1, uint32 VAR_2, uint8 * VAR_3,
    uint32 VAR_4)
{
    RSAPUBKEY *VAR_5 = (RSAPUBKEY *)(VAR_0 + sizeof(PUBLICKEYSTRUC));
    if (!VAR_0 || !VAR_1 || !VAR_2 || !VAR_3 || !VAR_4)
    {
        FUNC_0("rdssl_rkey_get_exp_mod %p %p %ld %p %ld\n", VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
        return -1;
    }
    FUNC_1 (VAR_1, &VAR_5->pubexp, VAR_2);
    FUNC_1 (VAR_3, VAR_0 + sizeof(PUBLICKEYSTRUC) + sizeof(RSAPUBKEY), VAR_4);
    return 0;
}
