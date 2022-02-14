
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xmlstr_t ;
struct TYPE_8__ {scalar_t__ ptr; scalar_t__ end; } ;
typedef TYPE_2__ xmlbuf_t ;
struct assembly_identity {int dummy; } ;
struct TYPE_7__ {int info; } ;
struct assembly {TYPE_1__ manifest; } ;
struct actctx_loader {int dummy; } ;
typedef int UNICODE_STRING ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,struct actctx_loader*,struct assembly*,struct assembly_identity*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static NTSTATUS FUNC_7( struct actctx_loader* VAR_5, struct assembly *VAR_6,
                                       struct assembly_identity* VAR_7, xmlbuf_t *VAR_8 )
{
    xmlstr_t VAR_9;
    UNICODE_STRING VAR_10;

    if (!FUNC_1(VAR_8, &VAR_9)) return VAR_1;

    if (FUNC_6(&VAR_9, VAR_4) &&
        (!FUNC_3(VAR_8) || !FUNC_1(VAR_8, &VAR_9)))
        return VAR_1;

    if (!FUNC_4(&VAR_9, VAR_3, VAR_2))
    {
        VAR_10 = FUNC_5(&VAR_9);
        FUNC_0("root element is %wZ, not <assembly>\n", &VAR_10);
        return VAR_1;
    }

    if (!FUNC_2(VAR_8, VAR_5, VAR_6, VAR_7))
    {
        FUNC_0("failed to parse manifest %S\n", VAR_6->manifest.info );
        return VAR_1;
    }

    if (FUNC_1(VAR_8, &VAR_9))
    {
        VAR_10 = FUNC_5(&VAR_9);
        FUNC_0("unexpected element %wZ\n", &VAR_10);
        return VAR_1;
    }

    if (VAR_8->ptr != VAR_8->end)
    {
        FUNC_0("parse error\n");
        return VAR_1;
    }
    return VAR_0;
}
