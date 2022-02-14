
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int grfMode; int clsid; int * pwcsName; } ;
typedef TYPE_1__ STATSTG ;
typedef int IStorage ;
typedef int ILockBytes ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ,int **) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int,char*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_10(void)
{
    ILockBytes *VAR_7 = ((void*)0);
    IStorage *VAR_8 = ((void*)0);
    HRESULT VAR_9;
    STATSTG VAR_10;
    DWORD VAR_11, VAR_12;

    VAR_9 = FUNC_0( ((void*)0), VAR_5, &VAR_7 );
    FUNC_9( VAR_9 == VAR_4, "CreateILockBytesOnHGlobal failed\n");

    VAR_9 = FUNC_5( VAR_7 );
    FUNC_9( VAR_9 == VAR_3, "StgIsStorageILockBytes should have failed\n");

    VAR_11 = VAR_0|VAR_2|VAR_1;
    VAR_9 = FUNC_4( VAR_7, VAR_11, 0, &VAR_8 );
    FUNC_9( VAR_9 == VAR_4, "StgCreateDocfileOnILockBytes failed\n");

    VAR_9 = FUNC_6( VAR_8, &VAR_6 );
    FUNC_9( VAR_9 == VAR_4, "WriteClassStg failed\n");

    VAR_9 = FUNC_5( VAR_7 );
    FUNC_9( VAR_9 == VAR_4, "StgIsStorageILockBytes failed\n");

    FUNC_8( &VAR_10, 0, sizeof VAR_10 );
    VAR_9 = FUNC_3( VAR_8, &VAR_10, 0 );

    FUNC_9( VAR_10.pwcsName == ((void*)0), "storage name not null\n");
    FUNC_9( VAR_10.type == 1, "type is wrong\n");
    FUNC_9( VAR_10.grfMode == 0x12, "grf mode is incorrect\n");
    FUNC_9( !FUNC_7(&VAR_10.clsid, &VAR_6, sizeof VAR_6), "CLSID is wrong\n");

    VAR_12 = FUNC_2( VAR_8 );
    FUNC_9( VAR_12 == 0, "IStorage refcount is wrong\n");
    VAR_12 = FUNC_1( VAR_7 );
    FUNC_9( VAR_12 == 0, "ILockBytes refcount is wrong\n");
}
