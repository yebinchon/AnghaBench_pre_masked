
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ptr; int * end; } ;
typedef TYPE_2__ xmlbuf_t ;
struct assembly_identity {int dummy; } ;
struct TYPE_4__ {void* info; int type; } ;
struct assembly {TYPE_1__ manifest; void* directory; } ;
struct actctx_loader {int actctx; } ;
typedef int WCHAR ;
typedef int ULONG ;
typedef int SIZE_T ;
typedef int NTSTATUS ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (void const*,int,int*) ;
 int FUNC_7 (int *,int,int*,void const*,int) ;
 int FUNC_8 (int*,void const*,int) ;
 int FUNC_9 (int const) ;
 int VAR_6 ;
 int VAR_7 ;
 struct assembly* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct actctx_loader*,struct assembly*,struct assembly_identity*,TYPE_2__*) ;
 void* FUNC_12 (scalar_t__) ;

__attribute__((used)) static NTSTATUS FUNC_13( struct actctx_loader* VAR_8, struct assembly_identity* VAR_9,
                                LPCWSTR VAR_10, LPCWSTR VAR_11, BOOL VAR_12,
                                const void *VAR_13, SIZE_T VAR_14 )
{
    xmlbuf_t VAR_15;
    NTSTATUS VAR_16;
    struct assembly *VAR_17;
    int VAR_18;

    FUNC_0( "parsing manifest loaded from %S base dir %S\n", VAR_10, VAR_11 );

    if (!(VAR_17 = FUNC_10(VAR_8->actctx, VAR_12 ? VAR_3 : VAR_2)))
        return VAR_7;

    if (VAR_11 && !(VAR_17->directory = FUNC_12(VAR_11)))
        return VAR_6;

    if (VAR_10) VAR_17->manifest.info = FUNC_12( VAR_10 + 4 );
    VAR_17->manifest.type = VAR_17->manifest.info ? VAR_1
                                                      : VAR_0;

    VAR_18 = VAR_5 | VAR_4;
    if (FUNC_6(VAR_13, VAR_14, &VAR_18 ))
    {
        VAR_15.ptr = VAR_13;
        VAR_15.end = VAR_15.ptr + VAR_14 / sizeof(WCHAR);
        VAR_16 = FUNC_11( VAR_8, VAR_17, VAR_9, &VAR_15 );
    }
    else if (VAR_18 & VAR_4)
    {
        const WCHAR *VAR_19 = VAR_13;
        WCHAR *VAR_20;
        unsigned int VAR_21;

        if (!(VAR_20 = FUNC_3( FUNC_5(), 0, VAR_14 )))
            return VAR_6;
        for (VAR_21 = 0; VAR_21 < VAR_14 / sizeof(WCHAR); VAR_21++)
            VAR_20[VAR_21] = FUNC_9( VAR_19[VAR_21] );
        VAR_15.ptr = VAR_20;
        VAR_15.end = VAR_15.ptr + VAR_14 / sizeof(WCHAR);
        VAR_16 = FUNC_11( VAR_8, VAR_17, VAR_9, &VAR_15 );
        FUNC_4( FUNC_5(), 0, VAR_20 );
    }
    else
    {

        WCHAR *VAR_22;
        ULONG VAR_23;

        VAR_16 = FUNC_8(&VAR_23, VAR_13, VAR_14);
        if (!FUNC_2(VAR_16))
        {
            FUNC_1("RtlMultiByteToUnicodeSize failed with %lx\n", VAR_16);
            return VAR_7;
        }

        VAR_22 = FUNC_3(FUNC_5(), 0, VAR_23);
        if (!VAR_22)
            return VAR_6;

        VAR_16 = FUNC_7(VAR_22, VAR_23, &VAR_23, VAR_13, VAR_14);
        if (!FUNC_2(VAR_16))
        {
            FUNC_1("RtlMultiByteToUnicodeN failed with %lx\n", VAR_16);
            return VAR_7;
        }

        VAR_15.ptr = VAR_22;
        VAR_15.end = VAR_15.ptr + VAR_23 / sizeof(WCHAR);
        VAR_16 = FUNC_11(VAR_8, VAR_17, VAR_9, &VAR_15);
        FUNC_4(FUNC_5(), 0, VAR_22);
    }
    return VAR_16;
}
