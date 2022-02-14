
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int Control; void* Sacl; void* Dacl; void* Group; void* Owner; } ;
typedef TYPE_1__ SECURITY_DESCRIPTOR_RELATIVE ;
typedef int PACL ;
typedef int* LPDWORD ;
typedef char* LPCWSTR ;
typedef void* LPBYTE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int*,int ,int*) ;
 int FUNC_2 (char*,void*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static BOOL FUNC_8(
    LPCWSTR VAR_5,
    SECURITY_DESCRIPTOR_RELATIVE* VAR_6,
    LPDWORD VAR_7)
{
    BOOL VAR_8 = VAR_1;
    WCHAR VAR_9;
    WCHAR *VAR_10;
    LPCWSTR VAR_11;
    LPBYTE VAR_12 = ((void*)0);
    DWORD VAR_13;

    *VAR_7 = sizeof(SECURITY_DESCRIPTOR_RELATIVE);

    VAR_10 = FUNC_4( (FUNC_6(VAR_5) + 1) * sizeof(WCHAR));

    if (VAR_6)
        VAR_12 = (LPBYTE)(VAR_6 + 1);

    while (*VAR_5 == ' ')
        VAR_5++;

    while (*VAR_5)
    {
        VAR_9 = *VAR_5;


 VAR_5++;
        if (*VAR_5 != ':')
        {
            FUNC_3(VAR_0);
            goto lend;
        }
 VAR_5++;


 VAR_11 = VAR_5;
 while (*VAR_11 && *VAR_11 != ':')
            VAR_11++;

 if (*VAR_11)
            VAR_11--;

        VAR_13 = VAR_11 - VAR_5;
        FUNC_7( VAR_10, VAR_5, VAR_13 * sizeof(WCHAR) );
        VAR_10[VAR_13] = 0;

        switch (VAR_9)
 {
            case 'O':
            {
                DWORD VAR_14;

                if (!FUNC_2(VAR_10, VAR_12, &VAR_14))
                    goto lend;

                if (VAR_6)
                {
                    VAR_6->Owner = VAR_12 - (LPBYTE)VAR_6;
                    VAR_12 += VAR_14;
                }

  *VAR_7 += VAR_14;

                break;
            }

            case 'G':
            {
                DWORD VAR_15;

                if (!FUNC_2(VAR_10, VAR_12, &VAR_15))
                    goto lend;

                if (VAR_6)
                {
                    VAR_6->Group = VAR_12 - (LPBYTE)VAR_6;
                    VAR_12 += VAR_15;
                }

  *VAR_7 += VAR_15;

                break;
            }

            case 'D':
     {
                DWORD VAR_16;
                DWORD VAR_17;

                if (!FUNC_1(VAR_10, &VAR_16, (PACL)VAR_12, &VAR_17))
                    goto lend;

                if (VAR_6)
                {
                    VAR_6->Control |= VAR_2 | VAR_16;
                    VAR_6->Dacl = VAR_12 - (LPBYTE)VAR_6;
                    VAR_12 += VAR_17;
  }

  *VAR_7 += VAR_17;

  break;
            }

            case 'S':
            {
                DWORD VAR_18;
                DWORD VAR_19;

                if (!FUNC_1(VAR_10, &VAR_18, (PACL)VAR_12, &VAR_19))
                    goto lend;

                if (VAR_6)
                {
                    VAR_6->Control |= VAR_3 | VAR_18;
                    VAR_6->Sacl = VAR_12 - (LPBYTE)VAR_6;
                    VAR_12 += VAR_19;
  }

  *VAR_7 += VAR_19;

  break;
            }

            default:
                FUNC_0("Unknown token\n");
                FUNC_3(VAR_0);
  goto lend;
 }

        VAR_5 = VAR_11;
    }

    VAR_8 = VAR_4;

lend:
    FUNC_5(VAR_10);
    return VAR_8;
}
