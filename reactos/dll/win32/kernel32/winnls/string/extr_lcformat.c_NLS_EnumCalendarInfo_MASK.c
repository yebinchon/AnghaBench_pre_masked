
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* callback ) (char*) ;int (* callbackex ) (char*,int) ;int (* callbackexex ) (char*,int,int *,int ) ;} ;
struct enumcalendar_context {int calendar; int caltype; int type; int lParam; TYPE_1__ u; int lcid; scalar_t__ unicode; } ;
typedef char WCHAR ;
typedef int * LPDWORD ;
typedef int CHAR ;
typedef int CALID ;
typedef int BOOL ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int,int,int *,int,int *) ;
 int FUNC_2 (int ,int,int,char*,int,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 () ;
 char* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,char*) ;
 char* FUNC_8 (int ,int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_9 ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,int,int *,int ) ;

__attribute__((used)) static BOOL FUNC_15(const struct enumcalendar_context *VAR_10)
{
  WCHAR *VAR_11, *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
  CALID VAR_14 = VAR_10->calendar;
  BOOL VAR_15 = VAR_6;
  int VAR_16 = 200;

  if (VAR_10->u.callback == ((void*)0))
  {
    FUNC_10(VAR_4);
    return VAR_6;
  }

  VAR_11 = FUNC_6(FUNC_5(), 0, VAR_16);
  if (VAR_11 == ((void*)0))
  {
    FUNC_10(VAR_5);
    return VAR_6;
  }

  if (VAR_14 == VAR_1)
  {
    int VAR_17 = FUNC_4(VAR_10->lcid, VAR_8, ((void*)0), 0);
    if (VAR_17 > 1)
    {
      VAR_12 = FUNC_6(FUNC_5(), 0, VAR_17 * sizeof(WCHAR));
      if (VAR_12 == ((void*)0))
      {
        FUNC_10(VAR_5);
        goto cleanup;
      }
      if (FUNC_4(VAR_10->lcid, VAR_8, VAR_12, VAR_17))
        VAR_13 = VAR_12;
    }
    VAR_14 = FUNC_9(VAR_10->lcid, VAR_7);
  }

  while (VAR_9)
  {
    do
    {
      if (VAR_10->caltype & VAR_0)
        VAR_15 = FUNC_2(VAR_10->lcid, VAR_14, VAR_10->caltype, ((void*)0), VAR_16 / sizeof(WCHAR), (LPDWORD)VAR_11);
      else if (VAR_10->unicode)
        VAR_15 = FUNC_2(VAR_10->lcid, VAR_14, VAR_10->caltype, VAR_11, VAR_16 / sizeof(WCHAR), ((void*)0));
      else VAR_15 = FUNC_1(VAR_10->lcid, VAR_14, VAR_10->caltype, (CHAR*)VAR_11, VAR_16 / sizeof(CHAR), ((void*)0));

      if (!VAR_15)
      {
        if (FUNC_3() == VAR_3)
        {
          int VAR_18;
          if (VAR_10->unicode)
            VAR_18 = FUNC_2(VAR_10->lcid, VAR_14, VAR_10->caltype, ((void*)0), 0, ((void*)0)) * sizeof(WCHAR);
          else VAR_18 = FUNC_1(VAR_10->lcid, VAR_14, VAR_10->caltype, ((void*)0), 0, ((void*)0)) * sizeof(CHAR);
          if (VAR_16 >= VAR_18)
          {
            FUNC_0("Buffer resizing disorder: was %d, requested %d.\n", VAR_16, VAR_18);
            goto cleanup;
          }
          VAR_16 = VAR_18;
          FUNC_11("Buffer too small; resizing to %d bytes.\n", VAR_16);
          VAR_11 = FUNC_8(FUNC_5(), 0, VAR_11, VAR_16);
          if (VAR_11 == ((void*)0))
            goto cleanup;
        } else goto cleanup;
      }
    } while (!VAR_15);






    switch (VAR_10->type)
    {
    case 130:
      VAR_15 = VAR_10->u.callback(VAR_11);
      break;
    case 129:
      VAR_15 = VAR_10->u.callbackex(VAR_11, VAR_14);
      break;
    case 128:
      VAR_15 = VAR_10->u.callbackexex(VAR_11, VAR_14, ((void*)0), VAR_10->lParam);
      break;
    default:
      ;
    }

    if (!VAR_15) {
      VAR_15 = VAR_9;
      break;
    }

    if ((VAR_13 == ((void*)0)) || (*VAR_13 == 0))
      break;

    VAR_14 = 0;
    while ((*VAR_13 >= '0') && (*VAR_13 <= '9'))
      VAR_14 = VAR_14 * 10 + *VAR_13++ - '0';

    if (*VAR_13++ != 0)
    {
      FUNC_10(VAR_2);
      VAR_15 = VAR_6;
      break;
    }
  }

cleanup:
  FUNC_7(FUNC_5(), 0, VAR_12);
  FUNC_7(FUNC_5(), 0, VAR_11);
  return VAR_15;
}
