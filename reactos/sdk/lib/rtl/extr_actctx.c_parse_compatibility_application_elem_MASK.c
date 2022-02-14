
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct assembly {int dummy; } ;
struct actctx_loader {int dummy; } ;
typedef int UNICODE_STRING ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,struct assembly*,struct actctx_loader*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static BOOL FUNC_8(xmlbuf_t* VAR_3, struct assembly* VAR_4,
                                                 struct actctx_loader* VAR_5)
{
    BOOL VAR_6 = VAR_0;
    xmlstr_t VAR_7;

    while (VAR_6 && (VAR_6 = FUNC_1(VAR_3, &VAR_7)))
    {
        if (FUNC_7(&VAR_7, VAR_1))
        {
            VAR_6 = FUNC_2(VAR_3);
            break;
        }
        else if (FUNC_6(&VAR_7, VAR_2))
        {
            VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
        }
        else
        {
            UNICODE_STRING VAR_8 = FUNC_5(&VAR_7);
            FUNC_0("unknown elem %wZ\n", &VAR_8);
            VAR_6 = FUNC_4(VAR_3, &VAR_7);
        }
    }

    return VAR_6;
}
