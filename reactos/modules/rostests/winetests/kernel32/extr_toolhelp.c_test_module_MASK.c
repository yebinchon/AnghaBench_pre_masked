
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int te ;
typedef int pe ;
typedef int me ;
struct TYPE_10__ {int dwSize; scalar_t__ th32ProcessID; int szModule; int szExePath; int modBaseSize; int modBaseAddr; } ;
struct TYPE_9__ {int dwSize; } ;
struct TYPE_8__ {int dwSize; } ;
typedef TYPE_1__ THREADENTRY32 ;
typedef TYPE_2__ PROCESSENTRY32 ;
typedef TYPE_3__ MODULEENTRY32 ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (unsigned int*) ;
 int VAR_0 ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,char*,...) ;
 int * FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (char*,scalar_t__,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(DWORD VAR_1, const char* VAR_2[], unsigned VAR_3)
{
    HANDLE VAR_4;
    PROCESSENTRY32 VAR_5;
    THREADENTRY32 VAR_6;
    MODULEENTRY32 VAR_7;
    unsigned VAR_8[32];
    unsigned VAR_9;
    int VAR_10 = 0;

    FUNC_3(FUNC_1(VAR_8) >= VAR_3, "Internal: bump found[] size\n");

    VAR_4 = FUNC_4( VAR_0, VAR_1 );
    FUNC_3(VAR_4 != ((void*)0), "Cannot create snapshot\n");

    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) VAR_8[VAR_9] = 0;
    VAR_7.dwSize = sizeof(VAR_7);
    if (FUNC_5( VAR_4, &VAR_7 ))
    {
        do
        {
            FUNC_9("PID=%x base=%p size=%x %s %s\n",
                  VAR_7.th32ProcessID, VAR_7.modBaseAddr, VAR_7.modBaseSize, VAR_7.szExePath, VAR_7.szModule);
            FUNC_3(VAR_7.th32ProcessID == VAR_1, "wrong returned process id\n");
            for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
                if (!FUNC_2(VAR_2[VAR_9], VAR_7.szModule)) VAR_8[VAR_9]++;
            VAR_10++;
        } while (FUNC_6( VAR_4, &VAR_7 ));
    }
    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
        FUNC_3(VAR_8[VAR_9] == 1, "Module %s is %s\n",
           VAR_2[VAR_9], VAR_8[VAR_9] ? "listed more than once" : "not listed");


    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) VAR_8[VAR_9] = 0;
    VAR_7.dwSize = sizeof(VAR_7);
    if (FUNC_5( VAR_4, &VAR_7 ))
    {
        do
        {
            FUNC_9("PID=%x base=%p size=%x %s %s\n",
                  VAR_7.th32ProcessID, VAR_7.modBaseAddr, VAR_7.modBaseSize, VAR_7.szExePath, VAR_7.szModule);
            for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
                if (!FUNC_2(VAR_2[VAR_9], VAR_7.szModule)) VAR_8[VAR_9]++;
            VAR_10--;
        } while (FUNC_6( VAR_4, &VAR_7 ));
    }
    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
        FUNC_3(VAR_8[VAR_9] == 1, "Module %s is %s\n",
           VAR_2[VAR_9], VAR_8[VAR_9] ? "listed more than once" : "not listed");
    FUNC_3(!VAR_10, "mismatch in counting\n");

    VAR_5.dwSize = sizeof(VAR_5);
    FUNC_3(!FUNC_7( VAR_4, &VAR_5 ), "shouldn't return a process\n");

    VAR_6.dwSize = sizeof(VAR_6);
    FUNC_3(!FUNC_8( VAR_4, &VAR_6 ), "shouldn't return a thread\n");

    FUNC_0(VAR_4);
    FUNC_3(!FUNC_5( VAR_4, &VAR_7 ), "shouldn't return a module\n");
}
