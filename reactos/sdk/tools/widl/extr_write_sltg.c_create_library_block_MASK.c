
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int helpcontext; int version; int uuid; int libflags; int lcid; int syskind; int helpfile; int helpstring; int name; } ;
struct sltg_typelib {int index; TYPE_1__ library; } ;
typedef int GUID ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int ) ;
 short FUNC_2 (int ) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static void *FUNC_4(struct sltg_typelib *VAR_0, int *VAR_1, int *VAR_2)
{
    void *VAR_3;
    short *VAR_4;

    *VAR_1 = sizeof(short) * 9 + sizeof(int) * 3 + sizeof(GUID);
    if (VAR_0->library.helpstring) *VAR_1 += FUNC_2(VAR_0->library.helpstring);
    if (VAR_0->library.helpfile) *VAR_1 += FUNC_2(VAR_0->library.helpfile);

    VAR_3 = FUNC_3(*VAR_1);
    VAR_4 = VAR_3;
    *VAR_4++ = 0x51cc;
    *VAR_4++ = 3;
    *VAR_4++ = VAR_0->library.name;
    *VAR_4++ = 0xffff;
    if (VAR_0->library.helpstring)
    {
        *VAR_4++ = FUNC_2(VAR_0->library.helpstring);
        FUNC_1((char *)VAR_4, VAR_0->library.helpstring);
        VAR_4 = (short *)((char *)VAR_4 + FUNC_2(VAR_0->library.helpstring));
    }
    else
        *VAR_4++ = 0xffff;
    if (VAR_0->library.helpfile)
    {
        *VAR_4++ = FUNC_2(VAR_0->library.helpfile);
        FUNC_1((char *)VAR_4, VAR_0->library.helpfile);
        VAR_4 = (short *)((char *)VAR_4 + FUNC_2(VAR_0->library.helpfile));
    }
    else
        *VAR_4++ = 0xffff;
    *(int *)VAR_4 = VAR_0->library.helpcontext;
    VAR_4 += 2;
    *VAR_4++ = VAR_0->library.syskind;
    *VAR_4++ = VAR_0->library.lcid;
    *(int *)VAR_4 = 0;
    VAR_4 += 2;
    *VAR_4++ = VAR_0->library.libflags;
    *(int *)VAR_4 = VAR_0->library.version;
    VAR_4 += 2;
    *(GUID *)VAR_4 = VAR_0->library.uuid;

    *VAR_2 = FUNC_0(&VAR_0->index, "dir");

    return VAR_3;
}
