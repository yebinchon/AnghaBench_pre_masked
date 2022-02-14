
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct actctx_loader {int dummy; } ;
typedef int UNICODE_STRING ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int *,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,struct actctx_loader*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static BOOL FUNC_10(xmlbuf_t* VAR_6, struct actctx_loader* VAR_7)
{
    xmlstr_t VAR_8, VAR_9, VAR_10;
    UNICODE_STRING VAR_11, VAR_12;
    BOOL VAR_13 = VAR_0, VAR_14 = VAR_1, VAR_15, VAR_16 = VAR_0;

    while (FUNC_1(VAR_6, &VAR_8, &VAR_9, &VAR_15, &VAR_13))
    {
        VAR_11 = FUNC_6(&VAR_8);
        VAR_12 = FUNC_6(&VAR_9);

        if (FUNC_7(&VAR_8, VAR_4))
        {
            VAR_16 = FUNC_9( &VAR_9, VAR_5 );
            FUNC_0("optional=%wZ\n", &VAR_12);
        }
        else
        {
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_11, &VAR_12);
        }
    }

    while (VAR_14 && (VAR_14 = FUNC_2(VAR_6, &VAR_10)))
    {
        if (FUNC_8(&VAR_10, VAR_2))
        {
            VAR_14 = FUNC_4(VAR_6);
            break;
        }
        else if (FUNC_7(&VAR_10, VAR_3))
        {
            VAR_14 = FUNC_3(VAR_6, VAR_7, VAR_16);
        }
        else
        {
            VAR_11 = FUNC_6(&VAR_10);
            FUNC_0("unknown element %wZ\n", &VAR_11);
            VAR_14 = FUNC_5(VAR_6, &VAR_10);
        }
    }

    return VAR_14;
}
