
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef enum stubless_phase { ____Placeholder_stubless_phase } stubless_phase ;
struct TYPE_23__ {int ServerAllocSize; scalar_t__ IsReturn; int IsOut; int IsIn; int IsSimpleRef; int MustFree; scalar_t__ IsBasetype; } ;
struct TYPE_22__ {unsigned char* StackTop; int (* pfnFree ) (void*) ;TYPE_1__* StubDesc; } ;
struct TYPE_20__ {size_t type_offset; unsigned char const type_format_char; } ;
struct TYPE_21__ {int stack_offset; TYPE_6__ attr; TYPE_2__ u; } ;
struct TYPE_19__ {unsigned char* pFormatTypes; } ;
typedef scalar_t__ PFORMAT_STRING ;
typedef int NDR_SCONTEXT ;
typedef TYPE_3__ NDR_PARAM_OIF ;
typedef TYPE_4__ MIDL_STUB_MESSAGE ;
typedef int LONG_PTR ;
typedef int DWORD ;


 unsigned char const VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,void*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,unsigned char const*) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;






 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_4__*,unsigned char const*) ;
 int FUNC_9 (TYPE_4__*,unsigned char*,TYPE_3__ const*) ;
 int FUNC_10 (TYPE_4__*,unsigned char*,TYPE_3__ const*) ;
 int FUNC_11 (TYPE_4__*,unsigned char*,TYPE_3__ const*) ;
 int FUNC_12 (TYPE_4__*,unsigned char**,TYPE_3__ const*,int ) ;
 int FUNC_13 (TYPE_6__) ;
 int FUNC_14 (void*,int ,int ) ;
 int FUNC_15 (TYPE_6__) ;
 int FUNC_16 (void*) ;

__attribute__((used)) static LONG_PTR *FUNC_17(MIDL_STUB_MESSAGE *VAR_3,
                              PFORMAT_STRING VAR_4, enum stubless_phase VAR_5,
                              unsigned short VAR_6)
{
    const NDR_PARAM_OIF *VAR_7 = (const NDR_PARAM_OIF *)VAR_4;
    unsigned int VAR_8;
    LONG_PTR *VAR_9 = ((void*)0);

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
    {
        unsigned char *VAR_10 = VAR_3->StackTop + VAR_7[VAR_8].stack_offset;
        const unsigned char *VAR_11 = &VAR_3->StubDesc->pFormatTypes[VAR_7[VAR_8].u.type_offset];

        FUNC_7("param[%d]: %p -> %p type %02x %s\n", VAR_8,
              VAR_10, *(unsigned char **)VAR_10,
              VAR_7[VAR_8].attr.IsBasetype ? VAR_7[VAR_8].u.type_format_char : *VAR_11,
              FUNC_13( VAR_7[VAR_8].attr ));

        switch (VAR_5)
        {
        case 130:
            if (VAR_7[VAR_8].attr.IsOut || VAR_7[VAR_8].attr.IsReturn)
                FUNC_11(VAR_3, VAR_10, &VAR_7[VAR_8]);
            break;
        case 129:
            if (VAR_7[VAR_8].attr.MustFree)
            {
                FUNC_10(VAR_3, VAR_10, &VAR_7[VAR_8]);
            }
            break;
        case 132:
            if (VAR_7[VAR_8].attr.ServerAllocSize)
            {
                FUNC_2(FUNC_0(), 0, *(void **)VAR_10);
            }
            else if (FUNC_15(VAR_7[VAR_8].attr) &&
                     (!VAR_7[VAR_8].attr.MustFree || VAR_7[VAR_8].attr.IsSimpleRef))
            {
                if (*VAR_11 != VAR_0) VAR_3->pfnFree(*(void **)VAR_10);
            }
            break;
        case 131:
            if (FUNC_15(VAR_7[VAR_8].attr) && !VAR_7[VAR_8].attr.ServerAllocSize)
            {
                if (*VAR_11 == VAR_0)
                {
                    NDR_SCONTEXT VAR_12 = FUNC_5(VAR_3, VAR_11);
                    *(void **)VAR_10 = FUNC_3(VAR_12);
                }
                else
                {
                    DWORD VAR_13 = FUNC_8(VAR_3, VAR_11);
                    if (VAR_13)
                    {
                        *(void **)VAR_10 = FUNC_4(VAR_3, VAR_13);
                        FUNC_14(*(void **)VAR_10, 0, VAR_13);
                    }
                }
            }
            break;
        case 128:
            if (VAR_7[VAR_8].attr.ServerAllocSize)
                *(void **)VAR_10 = FUNC_1(FUNC_0(), VAR_1,
                                           VAR_7[VAR_8].attr.ServerAllocSize * 8);

            if (VAR_7[VAR_8].attr.IsIn)
                FUNC_12(VAR_3, &VAR_10, &VAR_7[VAR_8], 0);
            break;
        case 133:
            if (VAR_7[VAR_8].attr.IsOut || VAR_7[VAR_8].attr.IsReturn)
                FUNC_9(VAR_3, VAR_10, &VAR_7[VAR_8]);
            break;
        default:
            FUNC_6(VAR_2);
        }
        FUNC_7("\tmemory addr (after): %p -> %p\n", VAR_10, *(unsigned char **)VAR_10);


        if (VAR_7[VAR_8].attr.IsReturn) VAR_9 = (LONG_PTR *)VAR_10;
    }
    return VAR_9;
}
