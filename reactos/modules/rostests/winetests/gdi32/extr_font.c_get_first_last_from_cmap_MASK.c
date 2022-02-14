
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmap_type ;
struct TYPE_6__ {int version; } ;
typedef TYPE_1__ cmap_header ;
typedef int WORD ;
typedef scalar_t__ LONG ;
typedef int HDC ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,TYPE_1__*,scalar_t__) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (void*,int *,int *) ;
 int FUNC_7 (void*,int *,int *,scalar_t__) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static BOOL FUNC_10(HDC VAR_6, DWORD *VAR_7, DWORD *VAR_8, cmap_type *VAR_9)
{
    LONG VAR_10, VAR_11;
    cmap_header *VAR_12;
    void *VAR_13;
    BOOL VAR_14 = VAR_0;
    WORD VAR_15;

    VAR_10 = FUNC_1(VAR_6, VAR_2, 0, ((void*)0), 0);
    FUNC_8(VAR_10 != VAR_1, "no cmap table found\n");
    if(VAR_10 == VAR_1) return VAR_0;

    VAR_12 = FUNC_3(FUNC_2(), 0, VAR_10);
    VAR_11 = FUNC_1(VAR_6, VAR_2, 0, VAR_12, VAR_10);
    FUNC_8(VAR_11 == VAR_10, "GetFontData should return %u not %u\n", VAR_10, VAR_11);
    FUNC_8(FUNC_0(VAR_12->version) == 0, "got cmap version %d\n", FUNC_0(VAR_12->version));

    VAR_13 = FUNC_5(VAR_12, 3, 1);
    if(VAR_13)
        *VAR_9 = VAR_4;
    else
    {
        VAR_13 = FUNC_5(VAR_12, 3, 0);
        if(VAR_13) *VAR_9 = VAR_3;
    }
    if(!VAR_13)
    {
        *VAR_9 = VAR_5;
        goto end;
    }

    VAR_15 = FUNC_0(*(WORD *)VAR_13);
    switch(VAR_15)
    {
    case 0:
        VAR_14 = FUNC_6(VAR_13, VAR_7, VAR_8);
        break;
    case 4:
        VAR_14 = FUNC_7(VAR_13, VAR_7, VAR_8, VAR_10);
        break;
    default:
        FUNC_9("unhandled cmap format %d\n", VAR_15);
        break;
    }

end:
    FUNC_4(FUNC_2(), 0, VAR_12);
    return VAR_14;
}
