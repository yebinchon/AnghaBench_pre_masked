
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_3__ {int UserContext; int (* UserComplete ) (int ,int ,int ) ;} ;
typedef int PVOID ;
typedef TYPE_1__* PDATAGRAM_RECEIVE_REQUEST ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;

VOID FUNC_3(PVOID VAR_2, NTSTATUS VAR_3, ULONG VAR_4) {
    PDATAGRAM_RECEIVE_REQUEST VAR_5 =
 (PDATAGRAM_RECEIVE_REQUEST)VAR_2;
    FUNC_1(VAR_1,("Called (%08x:%08x)\n", VAR_3, VAR_4));
    VAR_5->UserComplete( VAR_5->UserContext, VAR_3, VAR_4 );
    FUNC_0( VAR_5, VAR_0 );
    FUNC_1(VAR_1,("Done\n"));
}
