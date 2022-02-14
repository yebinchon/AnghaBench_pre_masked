
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct table {size_t data; size_t num_rows; } ;
struct record_service {int accept_pause; int accept_stop; int stop_service; int start_service; int resume_service; int pause_service; void* systemname; int state; int startmode; int servicetype; int process_id; void* name; void* displayname; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_9__ {int dwControlsAccepted; int dwCurrentState; int dwServiceType; int dwProcessId; } ;
struct TYPE_10__ {int dwStartType; int * lpServiceName; int * lpDisplayName; TYPE_1__ ServiceStatusProcess; } ;
typedef TYPE_1__ SERVICE_STATUS_PROCESS ;
typedef int SC_HANDLE ;
typedef TYPE_2__ QUERY_SERVICE_CONFIGW ;
typedef TYPE_2__ ENUM_SERVICE_STATUS_PROCESSW ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *,size_t,size_t*,size_t*,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*,size_t) ;
 int FUNC_7 (struct table*,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (size_t) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (TYPE_2__*,size_t) ;
 void* FUNC_14 (int *) ;
 int FUNC_15 (struct table*,size_t,struct expr const*,int*) ;
 TYPE_2__* FUNC_16 (int ,int *) ;
 int FUNC_17 (struct table*,size_t,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static enum fill_status FUNC_18( struct table *VAR_14, const struct expr *VAR_15 )
{
    struct record_service *VAR_16;
    SC_HANDLE VAR_17;
    ENUM_SERVICE_STATUS_PROCESSW *VAR_18, *VAR_19 = ((void*)0);
    SERVICE_STATUS_PROCESS *VAR_20;
    WCHAR VAR_21[VAR_3 + 1];
    DWORD VAR_22 = FUNC_0( VAR_21 );
    UINT VAR_23, VAR_24 = 0, VAR_25 = 0, VAR_26 = 256, VAR_27, VAR_28;
    enum fill_status VAR_29 = VAR_1;
    BOOL VAR_30;

    if (!(VAR_17 = FUNC_5( ((void*)0), ((void*)0), VAR_5 ))) return VAR_1;
    if (!(VAR_19 = FUNC_11( VAR_26 ))) goto done;

    VAR_30 = FUNC_2( VAR_17, VAR_4, VAR_9,
                                 VAR_8, (BYTE *)VAR_19, VAR_26, &VAR_27,
                                 &VAR_28, ((void*)0), ((void*)0) );
    if (!VAR_30)
    {
        if (FUNC_4() != VAR_0) goto done;
        VAR_26 = VAR_27;
        if (!(VAR_18 = FUNC_13( VAR_19, VAR_26 ))) goto done;
        VAR_19 = VAR_18;
        VAR_30 = FUNC_2( VAR_17, VAR_4, VAR_9,
                                     VAR_8, (BYTE *)VAR_19, VAR_26, &VAR_27,
                                     &VAR_28, ((void*)0), ((void*)0) );
        if (!VAR_30) goto done;
    }
    if (!FUNC_17( VAR_14, VAR_28, sizeof(*VAR_16) )) goto done;

    FUNC_3( VAR_21, &VAR_22 );
    VAR_29 = VAR_2;

    for (VAR_23 = 0; VAR_23 < VAR_28; VAR_23++)
    {
        QUERY_SERVICE_CONFIGW *VAR_31;

        if (!(VAR_31 = FUNC_16( VAR_17, VAR_19[VAR_23].lpServiceName ))) continue;

        VAR_20 = &VAR_19[VAR_23].ServiceStatusProcess;
        VAR_16 = (struct record_service *)(VAR_14->data + VAR_25);
        VAR_16->accept_pause = (VAR_20->dwControlsAccepted & VAR_6) ? -1 : 0;
        VAR_16->accept_stop = (VAR_20->dwControlsAccepted & VAR_7) ? -1 : 0;
        VAR_16->displayname = FUNC_14( VAR_19[VAR_23].lpDisplayName );
        VAR_16->name = FUNC_14( VAR_19[VAR_23].lpServiceName );
        VAR_16->process_id = VAR_20->dwProcessId;
        VAR_16->servicetype = FUNC_10( VAR_20->dwServiceType );
        VAR_16->startmode = FUNC_8( VAR_31->dwStartType );
        VAR_16->state = FUNC_9( VAR_20->dwCurrentState );
        VAR_16->systemname = FUNC_14( VAR_21 );
        VAR_16->pause_service = VAR_10;
        VAR_16->resume_service = VAR_11;
        VAR_16->start_service = VAR_12;
        VAR_16->stop_service = VAR_13;
        FUNC_12( VAR_31 );
        if (!FUNC_15( VAR_14, VAR_24, VAR_15, &VAR_29 ))
        {
            FUNC_7( VAR_14, VAR_24 );
            continue;
        }
        VAR_25 += sizeof(*VAR_16);
        VAR_24++;
    }

    FUNC_6("created %u rows\n", VAR_24);
    VAR_14->num_rows = VAR_24;

done:
    FUNC_1( VAR_17 );
    FUNC_12( VAR_19 );
    return VAR_29;
}
