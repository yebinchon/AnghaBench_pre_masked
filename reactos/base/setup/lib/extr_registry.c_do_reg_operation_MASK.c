
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char WCHAR ;
typedef int ULONG ;
typedef unsigned char* PWCHAR ;
typedef int PVOID ;
typedef scalar_t__ PUNICODE_STRING ;
typedef unsigned char* PUCHAR ;
typedef int PINFCONTEXT ;
typedef int HANDLE ;
typedef int BOOLEAN ;
typedef int BOOL ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;



 int FUNC_2 (int ,scalar_t__,int ,int,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int *,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,unsigned char*) ;
 int FUNC_8 (int ,int,unsigned char*,int,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,unsigned char*,int,int*) ;
 int FUNC_11 (int ,int,unsigned char*,int,int*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (unsigned char*,int *,int ) ;

__attribute__((used)) static BOOLEAN
FUNC_13(HANDLE VAR_18,
                 PUNICODE_STRING VAR_19,
                 PINFCONTEXT VAR_20,
                 ULONG VAR_21)
{
  WCHAR VAR_22 = 0;
  ULONG VAR_23;
  ULONG VAR_24;

  if (VAR_21 & VAR_3)
    {
      return VAR_15;
    }

  if (VAR_21 & VAR_4)
    return VAR_15;
  switch (VAR_21 & VAR_7)
    {
      case 128:
        VAR_23 = VAR_14;
        break;

      case 130:
        VAR_23 = VAR_12;
        break;

      case 131:
        VAR_23 = VAR_11;
        break;

      case 133:
        VAR_23 = VAR_9;
        break;

      case 132:
        VAR_23 = VAR_10;
        break;

      case 129:
        VAR_23 = VAR_13;
        break;

      default:
        VAR_23 = VAR_21 >> 16;
        break;
    }

  if (!(VAR_21 & VAR_2) ||
      (VAR_23 == VAR_10 && FUNC_9(VAR_20) == 5))
    {
      PWCHAR VAR_25 = ((void*)0);

      if (VAR_23 == VAR_12)
        {
          if (!FUNC_10(VAR_20, 5, ((void*)0), 0, &VAR_24))
            VAR_24 = 0;

          if (VAR_24)
            {
              VAR_25 = (WCHAR*) FUNC_6(VAR_8, 0, VAR_24 * sizeof(WCHAR));
              if (VAR_25 == ((void*)0))
                return VAR_0;

              FUNC_10(VAR_20, 5, VAR_25, VAR_24, ((void*)0));
            }

          if (VAR_21 & VAR_1)
            {
              if (VAR_25 == ((void*)0))
                return VAR_15;

              FUNC_1("append_multi_sz_value '%S' commented out, WHY??\n", VAR_19);


              FUNC_7 (VAR_8, 0, VAR_25);
              return VAR_15;
            }

        }
      else
        {
          if (!FUNC_11(VAR_20, 5, ((void*)0), 0, &VAR_24))
            VAR_24 = 0;

          if (VAR_24)
            {
              VAR_25 = (WCHAR*)FUNC_6(VAR_8, 0, VAR_24 * sizeof(WCHAR));
              if (VAR_25 == ((void*)0))
                return VAR_0;

              FUNC_11(VAR_20, 5, VAR_25, VAR_24, ((void*)0));
            }
        }

      if (VAR_23 == VAR_10)
        {
          ULONG VAR_26 = VAR_25 ? FUNC_12 (VAR_25, ((void*)0), 0) : 0;

          FUNC_0("setting dword %wZ to %lx\n", VAR_19, VAR_26);

          FUNC_2 (VAR_18,
                         VAR_19,
                         0,
                         VAR_23,
                         (PVOID)&VAR_26,
                         sizeof(ULONG));
        }
      else
        {
          FUNC_0("setting value %wZ to %S\n", VAR_19, VAR_25);

          if (VAR_25)
            {
              FUNC_2 (VAR_18,
                             VAR_19,
                             0,
                             VAR_23,
                             (PVOID)VAR_25,
                             VAR_24 * sizeof(WCHAR));
            }
          else
            {
              FUNC_2 (VAR_18,
                             VAR_19,
                             0,
                             VAR_23,
                             (PVOID)&VAR_22,
                             sizeof(WCHAR));
            }
        }
      FUNC_7 (VAR_8, 0, VAR_25);
    }
  else
    {
      PUCHAR VAR_27 = ((void*)0);

      if (!FUNC_8(VAR_20, 5, ((void*)0), 0, &VAR_24))
        VAR_24 = 0;

      if (VAR_24)
        {
          VAR_27 = (unsigned char*) FUNC_6(VAR_8, 0, VAR_24);
          if (VAR_27 == ((void*)0))
            return VAR_0;

          FUNC_0("setting binary data %wZ len %lu\n", VAR_19, VAR_24);
          FUNC_8(VAR_20, 5, VAR_27, VAR_24, ((void*)0));
        }

      FUNC_2 (VAR_18,
                     VAR_19,
                     0,
                     VAR_23,
                     (PVOID)VAR_27,
                     VAR_24);

      FUNC_7 (VAR_8, 0, VAR_27);
    }

  return VAR_15;
}
