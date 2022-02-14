
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UNICODE_STRING ;
struct TYPE_4__ {TYPE_1__* Peb; } ;
struct TYPE_3__ {int SessionId; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int *,int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int ,int ,int *) ;
 TYPE_2__* FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,char const*) ;
 int FUNC_5 (int,char*,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__*,int ,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static HANDLE FUNC_11(void)
{
    static const char VAR_3[] = "om.c_get_base_dir_obj";
    NTSTATUS VAR_4;
    UNICODE_STRING VAR_5;
    OBJECT_ATTRIBUTES VAR_6;
    HANDLE VAR_7, VAR_8;
    char VAR_9[40];

    VAR_8 = FUNC_0(((void*)0), VAR_1, VAR_3);
    FUNC_5(VAR_8 != 0, "CreateMutexA failed got ret=%p (%d)\n", VAR_8, FUNC_1());
    FUNC_2(&VAR_6, &VAR_5, VAR_2, 0, ((void*)0));

    FUNC_10( VAR_9, "\\BaseNamedObjects\\Session\\%u", FUNC_3()->Peb->SessionId );
    FUNC_8(&VAR_5, VAR_9 );
    VAR_4 = FUNC_7(&VAR_7, VAR_0, &VAR_6);
    FUNC_9(&VAR_5);
    if (!VAR_4 && FUNC_4( VAR_7, VAR_3 )) goto done;
    if (!VAR_4) FUNC_6( VAR_7 );

    FUNC_8(&VAR_5, "\\BaseNamedObjects");
    VAR_4 = FUNC_7(&VAR_7, VAR_0, &VAR_6);
    FUNC_9(&VAR_5);
    if (!VAR_4 && FUNC_4( VAR_7, VAR_3 )) goto done;
    if (!VAR_4) FUNC_6( VAR_7 );

    VAR_7 = 0;

done:
    FUNC_6( VAR_8 );
    return VAR_7;
}
