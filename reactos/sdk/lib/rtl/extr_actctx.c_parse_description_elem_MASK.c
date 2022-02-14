
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlstr_t ;
typedef int xmlbuf_t ;
typedef int UNICODE_STRING ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int *,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;

__attribute__((used)) static BOOL FUNC_9(xmlbuf_t* VAR_3)
{
    xmlstr_t VAR_4, VAR_5, VAR_6, VAR_7;
    BOOL VAR_8 = VAR_0, VAR_9 = VAR_1, VAR_10 = VAR_0;

    UNICODE_STRING VAR_11, VAR_12;

    while (FUNC_2(VAR_3, &VAR_6, &VAR_7, &VAR_10, &VAR_8))
    {
        VAR_11 = FUNC_7(&VAR_6);
        VAR_12 = FUNC_7(&VAR_7);
        FUNC_1("unknown attr %s=%s\n", &VAR_11, &VAR_12);
    }

    if (VAR_10) return VAR_0;
    if (VAR_8) return VAR_1;

    if (!FUNC_5(VAR_3, &VAR_5))
        return VAR_0;

    VAR_11 = FUNC_7(&VAR_5);
    FUNC_0("Got description %wZ\n", &VAR_11);

    while (VAR_9 && (VAR_9 = FUNC_3(VAR_3, &VAR_4)))
    {
        if (FUNC_8(&VAR_4, VAR_2))
        {
            VAR_9 = FUNC_4(VAR_3);
            break;
        }
        else
        {
            VAR_11 = FUNC_7(&VAR_4);
            FUNC_1("unknown elem %wZ\n", &VAR_11);
            VAR_9 = FUNC_6(VAR_3, &VAR_4);
        }
    }

    return VAR_9;
}
