
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ BytesTotal; scalar_t__ BytesTransferred; scalar_t__ FilesTotal; scalar_t__ FilesTransferred; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ BG_JOB_PROGRESS ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
    HRESULT VAR_2;
    BG_JOB_PROGRESS VAR_3;

    VAR_2 = FUNC_0(VAR_1, &VAR_3);
    FUNC_1(VAR_2 == VAR_0, "GetProgress failed: 0x%08x\n", VAR_2);

    FUNC_1(VAR_3.BytesTotal == 0, "Incorrect BytesTotal: %s\n",
       FUNC_2(VAR_3.BytesTotal));
    FUNC_1(VAR_3.BytesTransferred == 0, "Incorrect BytesTransferred: %s\n",
       FUNC_2(VAR_3.BytesTransferred));
    FUNC_1(VAR_3.FilesTotal == 0, "Incorrect FilesTotal: %u\n", VAR_3.FilesTotal);
    FUNC_1(VAR_3.FilesTransferred == 0, "Incorrect FilesTransferred %u\n", VAR_3.FilesTransferred);
}
