
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct process {int handle; scalar_t__ dbg_hdr_addr; } ;
struct module {int dummy; } ;
typedef int WCHAR ;
struct TYPE_5__ {int CheckSum; scalar_t__ SizeOfImage; } ;
struct TYPE_6__ {int TimeDateStamp; } ;
struct TYPE_7__ {TYPE_1__ OptionalHeader; TYPE_2__ FileHeader; } ;
typedef TYPE_3__ IMAGE_NT_HEADERS ;
typedef scalar_t__ DWORD64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct module* FUNC_0 (struct process*,int const*,int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,TYPE_3__*) ;

struct module* FUNC_2(struct process* VAR_2, const WCHAR* VAR_3,
                                      DWORD64 VAR_4, DWORD64 VAR_5)
{
    struct module* VAR_6 = ((void*)0);

    if (VAR_4 && VAR_2->dbg_hdr_addr)
    {
        IMAGE_NT_HEADERS VAR_7;

        if (FUNC_1(VAR_2->handle, VAR_4, &VAR_7))
        {
            if (!VAR_5) VAR_5 = VAR_7.OptionalHeader.SizeOfImage;
            VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_0, VAR_1, VAR_4, VAR_5,
                                VAR_7.FileHeader.TimeDateStamp,
                                VAR_7.OptionalHeader.CheckSum);
        }
    }
    return VAR_6;
}
