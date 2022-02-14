
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ BytesTotal; scalar_t__ BytesTransferred; scalar_t__ Completed; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ BG_FILE_PROGRESS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,...) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_4;
    BG_FILE_PROGRESS VAR_5;

    VAR_4 = FUNC_0(VAR_3, &VAR_5);
    FUNC_1(VAR_4 == VAR_2, "GetProgress failed: %08x\n", VAR_4);
    FUNC_1(VAR_5.BytesTotal == VAR_0, "Got incorrect total size: %s\n",
       FUNC_2(VAR_5.BytesTotal));
    FUNC_1(VAR_5.BytesTransferred == 0, "Got incorrect number of transferred bytes: %s\n",
       FUNC_2(VAR_5.BytesTransferred));
    FUNC_1(VAR_5.Completed == VAR_1, "Got incorrect completion status\n");
}
