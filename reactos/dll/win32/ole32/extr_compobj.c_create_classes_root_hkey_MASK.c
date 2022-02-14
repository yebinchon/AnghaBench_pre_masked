
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int attr ;
struct TYPE_5__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_6__ {int Length; TYPE_1__* ObjectName; int * SecurityQualityOfService; int * SecurityDescriptor; scalar_t__ Attributes; scalar_t__ RootDirectory; } ;
typedef TYPE_2__ OBJECT_ATTRIBUTES ;
typedef int HKEY ;
typedef int DWORD ;


 int FUNC_0 (void**,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int,TYPE_2__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static HKEY FUNC_6(DWORD VAR_3)
{
    HKEY VAR_4, VAR_5 = 0;
    OBJECT_ATTRIBUTES VAR_6;
    UNICODE_STRING VAR_7;

    VAR_6.Length = sizeof(VAR_6);
    VAR_6.RootDirectory = 0;
    VAR_6.ObjectName = &VAR_7;
    VAR_6.Attributes = 0;
    VAR_6.SecurityDescriptor = ((void*)0);
    VAR_6.SecurityQualityOfService = ((void*)0);
    FUNC_2( &VAR_7, VAR_1 );
    if (FUNC_4( &VAR_4, VAR_3, &VAR_6 )) return 0;
    FUNC_3( "%s -> %p\n", FUNC_5(VAR_6.ObjectName->Buffer), VAR_4 );

    if (!(VAR_3 & VAR_0))
    {
        if (!(VAR_5 = FUNC_0( (void **)&VAR_2, VAR_4, 0 )))
            VAR_5 = VAR_4;
        else
            FUNC_1( VAR_4 );
    }
    else
        VAR_5 = VAR_4;
    return VAR_5;
}
