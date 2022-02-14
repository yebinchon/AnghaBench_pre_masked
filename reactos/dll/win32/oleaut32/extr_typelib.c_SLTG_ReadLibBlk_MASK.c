
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int dwHelpContext; int syskind; int libflags; int ver_major; int ver_minor; int guid_list; int guid; int set_lcid; int lcid; int ptr_size; int HelpFile; int DocString; } ;
typedef char* LPVOID ;
typedef TYPE_1__ ITypeLibImpl ;
typedef int GUID ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (char*,int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static DWORD FUNC_8(LPVOID VAR_2, ITypeLibImpl *VAR_3)
{
    char *VAR_4 = VAR_2;
    WORD VAR_5;

    if((VAR_5 = *(WORD*)VAR_4) != VAR_0) {
        FUNC_0("libblk magic = %04x\n", VAR_5);
 return 0;
    }

    VAR_4 += 6;
    if((VAR_5 = *(WORD*)VAR_4) != 0xffff) {
        FUNC_0("LibBlk.res06 = %04x. Assumung string and skipping\n", VAR_5);
        VAR_4 += VAR_5;
    }
    VAR_4 += 2;

    VAR_4 += FUNC_4(VAR_4, &VAR_3->DocString, VAR_3);

    VAR_4 += FUNC_4(VAR_4, &VAR_3->HelpFile, VAR_3);

    VAR_3->dwHelpContext = *(DWORD*)VAR_4;
    VAR_4 += 4;

    VAR_3->syskind = *(WORD*)VAR_4;
    VAR_3->ptr_size = FUNC_7(VAR_3->syskind);
    VAR_4 += 2;

    if(FUNC_5(*(WORD*)VAR_4) == VAR_1)
        VAR_3->lcid = VAR_3->set_lcid = FUNC_2(FUNC_1(FUNC_3(*(WORD*)VAR_4),0),0);
    else
        VAR_3->lcid = VAR_3->set_lcid = 0;
    VAR_4 += 2;

    VAR_4 += 4;

    VAR_3->libflags = *(WORD*)VAR_4;
    VAR_4 += 2;

    VAR_3->ver_major = *(WORD*)VAR_4;
    VAR_4 += 2;

    VAR_3->ver_minor = *(WORD*)VAR_4;
    VAR_4 += 2;

    VAR_3->guid = FUNC_6(&VAR_3->guid_list, (GUID*)VAR_4, -2);
    VAR_4 += sizeof(GUID);

    return VAR_4 - (char*)VAR_2;
}
