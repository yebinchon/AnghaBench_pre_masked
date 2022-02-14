
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_3__ {int subtype; int type; } ;
typedef int * LPCWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef TYPE_1__ DMO_PARTIAL_MEDIATYPE ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int *,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *,int *,int ,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,int ,int ,int) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int FUNC_8 (int *,int ,int *) ;

HRESULT FUNC_9(HKEY VAR_8, LPCWSTR VAR_9, ULONG *VAR_10, ULONG VAR_11, DMO_PARTIAL_MEDIATYPE* VAR_12 )
{
    HRESULT VAR_13 = VAR_6;

    if (VAR_4 > 5)
    {
        DWORD VAR_14;
        LONG VAR_15;

        VAR_14 = VAR_11 * sizeof(DMO_PARTIAL_MEDIATYPE);
        VAR_15 = FUNC_5(VAR_8, VAR_9, ((void*)0), ((void*)0), (LPBYTE) VAR_12, &VAR_14);
        VAR_13 = FUNC_1(VAR_15);

        *VAR_10 = VAR_14 / sizeof(DMO_PARTIAL_MEDIATYPE);
    }
    else
    {
        HKEY VAR_16;
        WCHAR VAR_17[64];

        *VAR_10 = 0;
        if (VAR_1 == FUNC_4(VAR_8, VAR_9, 0, VAR_2, &VAR_16))
        {
          int VAR_18 = 0;
          WCHAR VAR_19[VAR_3];
          DWORD VAR_20;
          LONG VAR_21 = VAR_1;

          while (VAR_21 == VAR_1)
          {
            VAR_20 = VAR_3;
            VAR_21 = FUNC_3(VAR_16, VAR_18, VAR_19, &VAR_20, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
            if (VAR_21 == VAR_1)
            {
              HKEY VAR_22;
              int VAR_23 = 0;
              LONG VAR_24 = VAR_1;
              WCHAR VAR_25[VAR_3];

              FUNC_4(VAR_16, VAR_19, 0, VAR_2, &VAR_22);
              while (VAR_24 == VAR_1)
              {
                VAR_20 = VAR_3;
                VAR_24 = FUNC_3(VAR_22, VAR_23, VAR_25, &VAR_20, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
                if (VAR_24 == VAR_1)
                {
                  if (*VAR_10 >= VAR_11)
                  {

                    VAR_13 = VAR_5;
                    VAR_21 = VAR_0;
                    VAR_24 = VAR_0;
                    break;
                  }

                  FUNC_8(VAR_17,VAR_7,VAR_19);
                  FUNC_0(VAR_17, &VAR_12[*VAR_10].type);
                  FUNC_8(VAR_17,VAR_7,VAR_25);
                  FUNC_0(VAR_17, &VAR_12[*VAR_10].subtype);
                  FUNC_6("Adding type %s subtype %s at index %i\n",
                    FUNC_7(&VAR_12[*VAR_10].type),
                    FUNC_7(&VAR_12[*VAR_10].subtype),
                    *VAR_10);
                  (*VAR_10)++;
                }
                VAR_23++;
              }
              VAR_18++;
            }
          }
          FUNC_2(VAR_16);
        }
    }
    return VAR_13;
}
