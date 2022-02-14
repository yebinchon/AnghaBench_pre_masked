
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buf; } ;
struct TYPE_5__ {TYPE_3__ ntlmssp; } ;
struct SMBSTUFF {TYPE_2__ spnego; } ;
struct TYPE_4__ {struct SMBSTUFF smb; } ;
struct ProtocolState {TYPE_1__ sub; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(struct ProtocolState *VAR_0)
{
    struct SMBSTUFF *VAR_1 = &VAR_0->sub.smb;
    if (VAR_1->spnego.ntlmssp.buf)
        FUNC_0(&VAR_1->spnego.ntlmssp);
}
