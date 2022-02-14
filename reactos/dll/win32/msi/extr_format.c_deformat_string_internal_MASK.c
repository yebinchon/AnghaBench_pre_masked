
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_11__ {scalar_t__ len; int * deformatted; int groups; int n; int propfailed; int * record; int * package; } ;
struct TYPE_10__ {int len; int type; } ;
typedef int STACK ;
typedef int MSIRECORD ;
typedef int MSIPACKAGE ;
typedef int LPCWSTR ;
typedef TYPE_1__ FORMSTR ;
typedef TYPE_2__ FORMAT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static DWORD FUNC_13(MSIPACKAGE *VAR_11, LPCWSTR VAR_12,
                                      WCHAR** VAR_13, DWORD *VAR_14,
                                      MSIRECORD* VAR_15)
{
    FORMAT VAR_16;
    FORMSTR *VAR_17 = ((void*)0);
    STACK *VAR_18, *VAR_19;
    FORMSTR *VAR_20;
    int VAR_21;

    if (!VAR_12)
    {
        *VAR_13 = ((void*)0);
        *VAR_14 = 0;
        return VAR_0;
    }

    *VAR_13 = FUNC_11(VAR_12);
    *VAR_14 = FUNC_5(VAR_12);

    FUNC_0(&VAR_16, sizeof(FORMAT));
    VAR_16.package = VAR_11;
    VAR_16.record = VAR_15;
    VAR_16.deformatted = *VAR_13;
    VAR_16.len = *VAR_14;

    if (!FUNC_12(*VAR_13))
        return VAR_0;

    VAR_18 = FUNC_1();
    VAR_19 = FUNC_1();

    while ((VAR_21 = FUNC_2(&VAR_16, &VAR_17)) != VAR_6)
    {
        if (VAR_21 == VAR_4 || VAR_21 == VAR_3 ||
            VAR_21 == VAR_5 || VAR_21 == VAR_7 ||
            VAR_21 == VAR_2 || VAR_21 == VAR_8)
        {
            if (VAR_21 == VAR_3)
            {
                VAR_16.propfailed = VAR_1;
                VAR_16.groups++;
            }
            else if (VAR_21 == VAR_2 &&
                     !FUNC_8(VAR_18, VAR_4))
            {
                VAR_16.n -= VAR_17->len - 1;
                VAR_17->len = 1;
            }

            FUNC_10(VAR_18, VAR_17);
        }
        else if (VAR_21 == VAR_10 || VAR_21 == VAR_9)
        {
            if (VAR_21 == VAR_9)
                VAR_16.groups--;

            FUNC_10(VAR_18, VAR_17);

            if (FUNC_8(VAR_18, FUNC_4(VAR_21)))
            {
                do
                {
                    VAR_20 = FUNC_9(VAR_18);
                    FUNC_10(VAR_19, VAR_20);
                } while (VAR_20->type != FUNC_4(VAR_21));

                FUNC_7(&VAR_16, VAR_18, VAR_19);
            }
        }
    }

    *VAR_13 = VAR_16.deformatted;
    *VAR_14 = VAR_16.len;

    FUNC_6(VAR_17);
    FUNC_3(VAR_18);
    FUNC_3(VAR_19);

    return VAR_0;
}
