
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct table {int data; int num_rows; } ;
struct record_process {int get_owner; scalar_t__ workingsetsize; int thread_count; int pprocess_id; int process_id; void* name; void* handle; void* description; int commandline; void* caption; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef int entry ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_4__ {int dwSize; char* szExeFile; int cntThreads; int th32ParentProcessID; int th32ProcessID; } ;
typedef TYPE_1__ PROCESSENTRY32W ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct table*,int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (struct table*,int,struct expr const*,int*) ;
 int VAR_4 ;
 int FUNC_9 (struct table*,int,int) ;
 int FUNC_10 (char*,char const*,int ) ;

__attribute__((used)) static enum fill_status FUNC_11( struct table *VAR_5, const struct expr *VAR_6 )
{
    static const WCHAR VAR_7[] = {'%','u',0};
    WCHAR VAR_8[11];
    struct record_process *VAR_9;
    PROCESSENTRY32W VAR_10;
    HANDLE VAR_11;
    enum fill_status VAR_12 = VAR_0;
    UINT VAR_13 = 0, VAR_14 = 0;

    VAR_11 = FUNC_1( VAR_3, 0 );
    if (VAR_11 == VAR_2) return VAR_0;

    VAR_10.dwSize = sizeof(VAR_10);
    if (!FUNC_2( VAR_11, &VAR_10 )) goto done;
    if (!FUNC_9( VAR_5, 8, sizeof(*VAR_9) )) goto done;

    do
    {
        if (!FUNC_9( VAR_5, VAR_13 + 1, sizeof(*VAR_9) )) goto done;

        VAR_9 = (struct record_process *)(VAR_5->data + VAR_14);
        VAR_9->caption = FUNC_7( VAR_10.szExeFile );
        VAR_9->commandline = FUNC_6( VAR_10.th32ProcessID );
        VAR_9->description = FUNC_7( VAR_10.szExeFile );
        FUNC_10( VAR_8, VAR_7, VAR_10.th32ProcessID );
        VAR_9->handle = FUNC_7( VAR_8 );
        VAR_9->name = FUNC_7( VAR_10.szExeFile );
        VAR_9->process_id = VAR_10.th32ProcessID;
        VAR_9->pprocess_id = VAR_10.th32ParentProcessID;
        VAR_9->thread_count = VAR_10.cntThreads;
        VAR_9->workingsetsize = 0;
        VAR_9->get_owner = VAR_4;
        if (!FUNC_8( VAR_5, VAR_13, VAR_6, &VAR_12 ))
        {
            FUNC_5( VAR_5, VAR_13 );
            continue;
        }
        VAR_14 += sizeof(*VAR_9);
        VAR_13++;
    } while (FUNC_3( VAR_11, &VAR_10 ));

    FUNC_4("created %u rows\n", VAR_13);
    VAR_5->num_rows = VAR_13;
    VAR_12 = VAR_1;

done:
    FUNC_0( VAR_11 );
    return VAR_12;
}
