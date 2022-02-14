
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct TYPE_6__ {scalar_t__ build; scalar_t__ revision; int minor; int major; } ;
struct assembly_identity {TYPE_3__ version; } ;
struct TYPE_5__ {scalar_t__ build; scalar_t__ revision; int minor; int major; } ;
struct TYPE_4__ {TYPE_2__ version; } ;
struct assembly {scalar_t__ type; TYPE_1__ id; void* no_inherit; } ;
struct actctx_loader {int actctx; } ;
typedef char WCHAR ;
typedef int UNICODE_STRING ;
typedef void* BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,...) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char const* VAR_17 ;
 char const* VAR_18 ;
 char const* VAR_19 ;
 char const* VAR_20 ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (int *,int *,int *,void**,void**) ;
 void* FUNC_4 (int *,int *) ;
 char const* VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;
 void* FUNC_6 (int *,struct assembly*,struct actctx_loader*) ;
 void* FUNC_7 (int *,struct assembly*,struct actctx_loader*) ;
 void* FUNC_8 (int *,struct assembly*,struct actctx_loader*) ;
 void* FUNC_9 (int *,struct assembly*,struct actctx_loader*) ;
 void* FUNC_10 (int *,struct actctx_loader*) ;
 void* FUNC_11 (int *) ;
 void* FUNC_12 (int *) ;
 void* FUNC_13 (int *,struct assembly*,struct actctx_loader*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 void* FUNC_16 (int *,struct assembly*,struct actctx_loader*) ;
 void* FUNC_17 (int *,int *) ;
 int VAR_23 ;
 scalar_t__ FUNC_18 (int *,int ,int ) ;
 scalar_t__ FUNC_19 (int *,int ,int ) ;
 char const* VAR_24 ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,char const*) ;

__attribute__((used)) static BOOL FUNC_22(xmlbuf_t* VAR_25, struct actctx_loader* VAR_26,
                                struct assembly* VAR_27,
                                struct assembly_identity* VAR_28)
{
    xmlstr_t VAR_29, VAR_30, VAR_31;
    UNICODE_STRING VAR_32, VAR_33;
    BOOL VAR_34 = VAR_3, VAR_35, VAR_36 = VAR_3, VAR_37 = VAR_3, VAR_38 = VAR_4;

    FUNC_0("(%p)\n", VAR_25);

    while (FUNC_3(VAR_25, &VAR_29, &VAR_30, &VAR_35, &VAR_34))
    {
        VAR_32 = FUNC_20(&VAR_29);
        VAR_33 = FUNC_20(&VAR_30);

        if (FUNC_21(&VAR_29, VAR_17))
        {
            static const WCHAR VAR_39[] = {'1','.','0',0};
            if (!FUNC_21(&VAR_30, VAR_39))
            {
                FUNC_1("wrong version %wZ\n", &VAR_33);
                return VAR_3;
            }
            VAR_36 = VAR_4;
        }
        else if (FUNC_21(&VAR_29, VAR_24))
        {
            if (!FUNC_21(&VAR_30, VAR_18) &&
                !FUNC_21(&VAR_30, VAR_19) &&
                !FUNC_21(&VAR_30, VAR_20))
            {
                FUNC_1("wrong namespace %wZ\n", &VAR_33);
                return VAR_3;
            }
            VAR_37 = VAR_4;
        }
        else
        {
            FUNC_1("unknown attr %wZ=%wZ\n", &VAR_32, &VAR_33);
        }
    }

    if (VAR_35 || VAR_34 || !VAR_37 || !VAR_36) return VAR_3;
    if (!FUNC_4(VAR_25, &VAR_31)) return VAR_3;

    if (VAR_27->type == VAR_0 && FUNC_21(&VAR_31, VAR_21))
    {
        if (!FUNC_14(VAR_25) || !FUNC_4(VAR_25, &VAR_31))
            return VAR_3;
        VAR_27->no_inherit = VAR_4;
    }

    if (FUNC_18(&VAR_31, VAR_22, VAR_5))
    {
        if (!FUNC_15(VAR_25) || !FUNC_4(VAR_25, &VAR_31))
            return VAR_3;
    }
    else if ((VAR_27->type == VAR_1 || VAR_27->type == VAR_2) &&
             VAR_27->no_inherit)
        return VAR_3;

    while (VAR_38)
    {
        if (FUNC_19(&VAR_31, VAR_8, VAR_5))
        {
            VAR_38 = FUNC_12(VAR_25);
            break;
        }
        else if (FUNC_18(&VAR_31, VAR_15, VAR_5))
        {
            VAR_38 = FUNC_11(VAR_25);
        }
        else if (FUNC_18(&VAR_31, VAR_11, VAR_5))
        {
            VAR_38 = FUNC_8(VAR_25, VAR_27, VAR_26);
        }
        else if (FUNC_18(&VAR_31, VAR_14, VAR_5))
        {
            VAR_38 = FUNC_10(VAR_25, VAR_26);
        }
        else if (FUNC_18(&VAR_31, VAR_16, VAR_5))
        {
            VAR_38 = FUNC_13(VAR_25, VAR_27, VAR_26);
        }
        else if (FUNC_18(&VAR_31, VAR_9, VAR_5))
        {
            VAR_38 = FUNC_6(VAR_25, VAR_27, VAR_26);
        }
        else if (FUNC_18(&VAR_31, VAR_10, VAR_5))
        {
            VAR_38 = FUNC_7(VAR_25, VAR_27, VAR_26);
        }
        else if (FUNC_18(&VAR_31, VAR_23, VAR_6) ||
                 FUNC_18(&VAR_31, VAR_23, VAR_5))
        {
            VAR_38 = FUNC_16(VAR_25, VAR_27, VAR_26);
        }
        else if (FUNC_18(&VAR_31, VAR_7, VAR_5))
        {
            if (!FUNC_5(VAR_25, VAR_26->actctx, &VAR_27->id)) return VAR_3;

            if (VAR_28)
            {

                if (VAR_27->type == VAR_1 &&
                    FUNC_2(&VAR_27->id.version, &VAR_28->version, sizeof(VAR_27->id.version)))
                {
                    FUNC_1("wrong version for assembly manifest: %u.%u.%u.%u / %u.%u.%u.%u\n",
                          VAR_28->version.major, VAR_28->version.minor,
                          VAR_28->version.build, VAR_28->version.revision,
                          VAR_27->id.version.major, VAR_27->id.version.minor,
                          VAR_27->id.version.build, VAR_27->id.version.revision);
                    VAR_38 = VAR_3;
                }
                else if (VAR_27->type == VAR_2 &&
                         (VAR_27->id.version.major != VAR_28->version.major ||
                          VAR_27->id.version.minor != VAR_28->version.minor ||
                          VAR_27->id.version.build < VAR_28->version.build ||
                          (VAR_27->id.version.build == VAR_28->version.build &&
                           VAR_27->id.version.revision < VAR_28->version.revision)))
                {
                    FUNC_1("wrong version for shared assembly manifest\n");
                    VAR_38 = VAR_3;
                }
            }
        }
        else if (FUNC_18(&VAR_31, VAR_13, VAR_12))
        {
            VAR_38 = FUNC_9(VAR_25, VAR_27, VAR_26);
        }
        else
        {
            VAR_32 = FUNC_20(&VAR_31);
            FUNC_1("unknown element %wZ\n", &VAR_32);
            VAR_38 = FUNC_17(VAR_25, &VAR_31);
        }
        if (VAR_38) VAR_38 = FUNC_4(VAR_25, &VAR_31);
    }

    return VAR_38;
}
