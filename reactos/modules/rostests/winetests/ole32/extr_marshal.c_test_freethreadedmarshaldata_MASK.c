
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ MSHCTX ;
typedef int IStream ;
typedef int HRESULT ;
typedef int HGLOBAL ;
typedef int GUID ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *,int *) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ,int (*) (int *,int *)) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(IStream *VAR_1, MSHCTX VAR_2, void *VAR_3, DWORD VAR_4)
{
    HGLOBAL VAR_5;
    DWORD VAR_6;
    char *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_0(VAR_1, &VAR_5);
    FUNC_6(VAR_8, FUNC_0);

    VAR_6 = FUNC_2(VAR_5);

    VAR_7 = FUNC_1(VAR_5);

    if (VAR_2 == VAR_0)
    {
        DWORD VAR_9 = FUNC_7(3*sizeof(DWORD) + sizeof(GUID));
        FUNC_5(VAR_6 == VAR_9 ||
           FUNC_4(VAR_6 == (2*sizeof(DWORD))) ,
           "size should have been %d instead of %d\n", VAR_9, VAR_6);

        FUNC_5(*(DWORD *)VAR_7 == VAR_4, "expected 0x%x, but got 0x%x for mshctx\n", VAR_4, *(DWORD *)VAR_7);
        VAR_7 += sizeof(DWORD);
        FUNC_5(*(void **)VAR_7 == VAR_3, "expected %p, but got %p for mshctx\n", VAR_3, *(void **)VAR_7);
        VAR_7 += sizeof(void *);
        if (sizeof(void*) == 4 && VAR_6 >= 3*sizeof(DWORD))
        {
            FUNC_5(*(DWORD *)VAR_7 == 0, "expected 0x0, but got 0x%x\n", *(DWORD *)VAR_7);
            VAR_7 += sizeof(DWORD);
        }
        if (VAR_6 >= 3*sizeof(DWORD) + sizeof(GUID))
        {
            FUNC_8("got guid data: %s\n", FUNC_9((GUID *)VAR_7));
        }
    }
    else
    {
        FUNC_5(VAR_6 > sizeof(DWORD), "size should have been > sizeof(DWORD), not %d\n", VAR_6);
        FUNC_5(*(DWORD *)VAR_7 == 0x574f454d ,
            "marshal data should be filled by standard marshal and start with MEOW signature\n");
    }

    FUNC_3(VAR_5);
}
