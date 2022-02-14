
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct assembly_identity {int public_key; int name; int arch; } ;
struct actctx_loader {int dummy; } ;
typedef int manifest_dirW ;
typedef int attr ;
typedef char WCHAR ;
struct TYPE_11__ {int Length; int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_14__ {char* NtSystemRoot; } ;
struct TYPE_13__ {int Status; } ;
struct TYPE_12__ {int Length; int * SecurityQualityOfService; int * SecurityDescriptor; TYPE_1__* ObjectName; int Attributes; scalar_t__ RootDirectory; } ;
typedef TYPE_2__ OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef TYPE_3__ IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,TYPE_2__*,TYPE_3__*,int,int) ;
 int VAR_5 ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,char*) ;
 char* FUNC_8 (int ,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct actctx_loader*,struct assembly_identity*,int ,char*,int ,int ) ;
 char* FUNC_10 (int ,struct assembly_identity*) ;
 int FUNC_11 (char*,char const*,int) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 scalar_t__* FUNC_15 (char*,char) ;

__attribute__((used)) static NTSTATUS FUNC_16(struct actctx_loader* VAR_11, struct assembly_identity* VAR_12)
{
    struct assembly_identity VAR_13;
    UNICODE_STRING VAR_14;
    OBJECT_ATTRIBUTES VAR_15;
    IO_STATUS_BLOCK VAR_16;
    WCHAR *VAR_17, *VAR_18 = ((void*)0);
    HANDLE VAR_19;

    static const WCHAR VAR_20[] =
        {'\\','w','i','n','s','x','s','\\','m','a','n','i','f','e','s','t','s',0};

    if (!VAR_12->arch || !VAR_12->name || !VAR_12->public_key) return VAR_7;

    if (!(VAR_17 = FUNC_2( FUNC_6(), 0,
                                  ((FUNC_14(VAR_9->NtSystemRoot) + 1) *sizeof(WCHAR)) + sizeof(VAR_20) )))
        return VAR_6;

    FUNC_11( VAR_17, VAR_9->NtSystemRoot, FUNC_14(VAR_9->NtSystemRoot) * sizeof(WCHAR) );
    FUNC_11( VAR_17 + FUNC_14(VAR_9->NtSystemRoot), VAR_20, sizeof(VAR_20) );

    if (!FUNC_3( VAR_17, &VAR_14, ((void*)0), ((void*)0) ))
    {
        FUNC_4( FUNC_6(), 0, VAR_17 );
        return VAR_7;
    }
    FUNC_4( FUNC_6(), 0, VAR_17 );

    VAR_15.Length = sizeof(VAR_15);
    VAR_15.RootDirectory = 0;
    VAR_15.Attributes = VAR_5;
    VAR_15.ObjectName = &VAR_14;
    VAR_15.SecurityDescriptor = ((void*)0);
    VAR_15.SecurityQualityOfService = ((void*)0);

    if (!FUNC_1( &VAR_19, VAR_4 | VAR_8, &VAR_15, &VAR_16, VAR_1 | VAR_2,
                     VAR_0 | VAR_3 ))
    {
        VAR_13 = *VAR_12;
        VAR_18 = FUNC_10( VAR_19, &VAR_13 );
        FUNC_0( VAR_19 );
    }
    if (!VAR_18)
    {
        FUNC_5( &VAR_14 );
        return VAR_7;
    }


    if (!(VAR_17 = FUNC_8( FUNC_6(), 0, VAR_14.Buffer,
                                    VAR_14.Length + (FUNC_14(VAR_18) + 2) * sizeof(WCHAR) )))
    {
        FUNC_4( FUNC_6(), 0, VAR_18 );
        FUNC_5( &VAR_14 );
        return VAR_6;
    }

    VAR_17[VAR_14.Length/sizeof(WCHAR)] = '\\';
    FUNC_13( VAR_17 + VAR_14.Length/sizeof(WCHAR) + 1, VAR_18 );
    FUNC_7( &VAR_14, VAR_17 );
    *FUNC_15(VAR_18, '.') = 0;

    if (!FUNC_12( &VAR_19, &VAR_14 ))
    {
        VAR_16.Status = FUNC_9(VAR_11, &VAR_13, VAR_14.Buffer, VAR_18, VAR_10, VAR_19);
        FUNC_0( VAR_19 );
    }
    else VAR_16.Status = VAR_7;

    FUNC_4( FUNC_6(), 0, VAR_18 );
    FUNC_5( &VAR_14 );
    return VAR_16.Status;
}
