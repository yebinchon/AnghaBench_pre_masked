
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ len; scalar_t__ ptr; } ;
typedef TYPE_1__ xmlstr_t ;
typedef int xmlbuf_t ;
struct assembly {int dummy; } ;
struct actctx_loader {int dummy; } ;
typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_13__ {int Length; int MaximumLength; scalar_t__ Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
struct TYPE_14__ {int Id; int Type; } ;
typedef scalar_t__ PWSTR ;
typedef int GUID ;
typedef TYPE_3__ COMPATIBILITY_CONTEXT_ELEMENT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_2 (struct assembly*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,TYPE_1__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int VAR_6 ;
 TYPE_2__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static BOOL FUNC_7(xmlbuf_t *VAR_7, struct assembly *VAR_8, struct actctx_loader *VAR_9)
{
    xmlstr_t VAR_10, VAR_11;
    BOOL VAR_12 = VAR_1, VAR_13;

    while (FUNC_3(VAR_7, &VAR_10, &VAR_11, &VAR_13, &VAR_12))
    {
        if (FUNC_6(&VAR_10, VAR_2))
        {
            COMPATIBILITY_CONTEXT_ELEMENT *VAR_14;
            UNICODE_STRING VAR_15;
            GUID VAR_16;

            VAR_15.Buffer = (PWSTR)VAR_11.ptr;
            VAR_15.Length = VAR_15.MaximumLength = (USHORT)VAR_11.len * sizeof(WCHAR);
            if (FUNC_1(&VAR_15, &VAR_16) == VAR_3)
            {
                if (!(VAR_14 = FUNC_2(VAR_8))) return VAR_1;
                VAR_14->Type = VAR_0;
                VAR_14->Id = VAR_16;
            }
            else
            {
                UNICODE_STRING VAR_17 = FUNC_5(&VAR_11);
                FUNC_0("Invalid guid %wZ\n", &VAR_17);
            }
        }
        else
        {
            UNICODE_STRING VAR_18 = FUNC_5(&VAR_10);
            UNICODE_STRING VAR_19 = FUNC_5(&VAR_11);
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_18, &VAR_19);
        }
    }

    if (VAR_13) return VAR_1;
    if (VAR_12) return VAR_4;

    return FUNC_4(VAR_7, VAR_6, VAR_5);
}
