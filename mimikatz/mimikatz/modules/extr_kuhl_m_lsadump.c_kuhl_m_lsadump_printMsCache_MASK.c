
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* Buffer; int MaximumLength; int Length; } ;
struct TYPE_7__ {int MaximumLength; int Length; void* Buffer; } ;
struct TYPE_11__ {TYPE_2__ UserName; TYPE_1__ Domain; } ;
struct TYPE_10__ {int mshashdata; } ;
struct TYPE_9__ {scalar_t__ enc_data; int szDomainName; int szUserName; } ;
typedef void* PWSTR ;
typedef TYPE_3__* PMSCACHE_ENTRY ;
typedef TYPE_4__* PMSCACHE_DATA ;
typedef scalar_t__ PBYTE ;
typedef TYPE_5__ MSCACHE_ENTRY_PTR ;
typedef int MSCACHE_DATA ;
typedef int CHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(PMSCACHE_ENTRY VAR_1, CHAR VAR_2)
{

 MSCACHE_ENTRY_PTR VAR_3;
 VAR_3.UserName.Buffer = (PWSTR) ((PBYTE) VAR_1->enc_data + sizeof(MSCACHE_DATA));
 VAR_3.UserName.Length = VAR_3.UserName.MaximumLength = VAR_1->szUserName;
 VAR_3.Domain.Buffer = (PWSTR) ((PBYTE) VAR_3.UserName.Buffer + FUNC_0(VAR_1->szUserName, 4));
 VAR_3.Domain.Length = VAR_3.Domain.MaximumLength = VAR_1->szDomainName;
 FUNC_1(L"User      : %wZ\\%wZ\n", &VAR_3.Domain, &VAR_3.UserName);
 FUNC_1(L"MsCacheV%c : ", VAR_2); FUNC_2(((PMSCACHE_DATA) VAR_1->enc_data)->mshashdata, VAR_0, 0); FUNC_1(L"\n");
}
