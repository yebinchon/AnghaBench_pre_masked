
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int bInheritHandle; int lpSecurityDescriptor; int nLength; } ;
struct TYPE_6__ {int hGlobal; } ;
struct TYPE_7__ {int pUnkForRelease; TYPE_1__ u; int tymed; } ;
struct TYPE_9__ {size_t grfBindInfoF; size_t dwBindVerb; int dwReserved; int pUnk; int iid; TYPE_3__ securityAttributes; int dwCodePage; int dwOptionsFlags; int dwOptions; int cbstgmedData; int szCustomVerb; TYPE_2__ stgmedData; int szExtraInfo; int cbSize; } ;
typedef TYPE_4__ BINDINFO ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,char*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(BINDINFO *VAR_2)
{
    static const char * const VAR_3[] = {
        "#0",
        "BINDINFOF_URLENCODESTGMEDDATA",
        "BINDINFOF_URLENCODEDEXTRAINFO"
    };

    static const char * const VAR_4[] = {
        "BINDVERB_GET",
        "BINDVERB_POST",
        "BINDVERB_PUT",
        "BINDVERB_CUSTOM"
    };

    FUNC_0("\n"
            "BINDINFO = {\n"
            "    %d, %s,\n"
            "    {%d, %p, %p},\n"
            "    %s,\n"
            "    %s,\n"
            "    %s,\n"
            "    %d, %08x, %d, %d\n"
            "    {%d %p %x},\n"
            "    %s\n"
            "    %p, %d\n"
            "}\n",

            VAR_2->cbSize, FUNC_2(VAR_2->szExtraInfo),
            VAR_2->stgmedData.tymed, VAR_2->stgmedData.u.hGlobal, VAR_2->stgmedData.pUnkForRelease,
            VAR_2->grfBindInfoF > VAR_0
                ? "unknown" : VAR_3[VAR_2->grfBindInfoF],
            VAR_2->dwBindVerb > VAR_1
                ? "unknown" : VAR_4[VAR_2->dwBindVerb],
            FUNC_2(VAR_2->szCustomVerb),
            VAR_2->cbstgmedData, VAR_2->dwOptions, VAR_2->dwOptionsFlags, VAR_2->dwCodePage,
            VAR_2->securityAttributes.nLength,
            VAR_2->securityAttributes.lpSecurityDescriptor,
            VAR_2->securityAttributes.bInheritHandle,
            FUNC_1(&VAR_2->iid),
            VAR_2->pUnk, VAR_2->dwReserved
            );
}
