
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
typedef int UCHAR ;
struct TYPE_8__ {size_t HighPart; size_t LowPart; } ;
struct TYPE_11__ {TYPE_1__ u; } ;
struct TYPE_10__ {size_t LowPart; size_t HighPart; } ;
struct TYPE_9__ {int dwLength; size_t dwMemoryLoad; size_t dwTotalPhys; size_t dwTotalPageFile; size_t dwAvailPhys; size_t dwTotalVirtual; size_t dwAvailPageFile; size_t dwAvailVirtual; } ;
typedef size_t* PDWORD ;
typedef int MemoryStatus ;
typedef TYPE_2__ MEMORYSTATUS ;
typedef TYPE_3__ LUID ;
typedef TYPE_4__ LARGE_INTEGER ;
typedef size_t DWORD ;
typedef int CHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int*,size_t*) ;
 scalar_t__ FUNC_2 (char*,size_t*,size_t*,size_t*,size_t*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static VOID
FUNC_6(UCHAR * VAR_3)
{
    CHAR VAR_4[VAR_1 + 1];
    CHAR * VAR_5;
    DWORD VAR_6;
    LARGE_INTEGER VAR_7;
    PDWORD VAR_8, VAR_9;
    DWORD VAR_10;
    MEMORYSTATUS VAR_11;
    LUID VAR_12;
    DWORD VAR_13, VAR_14, VAR_15, VAR_16;


    FUNC_5(VAR_3, 0x11, VAR_2 * sizeof(UCHAR));


    VAR_6 = VAR_1 + 1;
    if (FUNC_1(VAR_4, &VAR_6))
    {
        VAR_6 = 0;
        VAR_5 = &VAR_4[0];
        while (*VAR_5 != VAR_0)
        {
            VAR_3[VAR_6] ^= *VAR_5;
            ++VAR_5;


            if (++VAR_6 >= VAR_2)
            {
                VAR_6 = 0;
            }
        }
    }


    VAR_8 = (DWORD *)&VAR_3[0];
    VAR_9 = (DWORD *)&VAR_3[2];


    if (FUNC_4(&VAR_7))
    {
        *VAR_9 = *VAR_9 ^ VAR_7.u.HighPart ^ VAR_7.u.LowPart;

        VAR_10 = VAR_7.u.HighPart ^ VAR_7.u.LowPart ^ *VAR_8;
    }
    else
    {
        VAR_10 = *VAR_8;
    }

    *VAR_8 = *VAR_8 ^ VAR_10;
    *VAR_9 = *VAR_9 ^ *VAR_8;


    VAR_11.dwLength = sizeof(VAR_11);
    FUNC_3(&VAR_11);

    *VAR_8 = *VAR_8 ^ VAR_11.dwMemoryLoad;
    *VAR_9 = *VAR_9 ^ VAR_11.dwTotalPhys;
    *VAR_8 = *VAR_8 ^ VAR_11.dwTotalPageFile ^ VAR_11.dwAvailPhys;
    *VAR_9 = *VAR_9 ^ VAR_11.dwTotalVirtual ^ VAR_11.dwAvailPageFile;
    *VAR_8 = *VAR_8 ^ VAR_11.dwAvailVirtual;


    if (FUNC_0(&VAR_12))
    {
        *VAR_8 = *VAR_8 ^ VAR_12.LowPart;
        *VAR_9 = *VAR_9 ^ VAR_12.HighPart;
    }


    if (FUNC_2("c:\\", &VAR_13, &VAR_14, &VAR_15, &VAR_16))
    {
        *VAR_9 = *VAR_9 ^ VAR_16 * VAR_14 * VAR_13;
        *VAR_8 = *VAR_8 ^ VAR_15 * VAR_14 * VAR_13;
    }






    VAR_3[0] |= 0x80u;
}
