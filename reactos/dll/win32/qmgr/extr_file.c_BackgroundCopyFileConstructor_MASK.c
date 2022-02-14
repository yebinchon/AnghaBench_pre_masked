
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int Completed; scalar_t__ BytesTransferred; int BytesTotal; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {TYPE_5__* RemoteName; void* LocalName; } ;
struct TYPE_15__ {int ref; scalar_t__* tempFileName; scalar_t__ read_size; TYPE_4__* owner; TYPE_3__ fileProgress; TYPE_2__ IBackgroundCopyFile2_iface; TYPE_1__ info; } ;
struct TYPE_14__ {int IBackgroundCopyJob3_iface; } ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef TYPE_4__ BackgroundCopyJobImpl ;
typedef TYPE_5__ BackgroundCopyFileImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_5__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (char*,int ,int ,TYPE_5__**) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

HRESULT FUNC_7(BackgroundCopyJobImpl *VAR_5,
                                      LPCWSTR VAR_6, LPCWSTR VAR_7,
                                      BackgroundCopyFileImpl **VAR_8)
{
    BackgroundCopyFileImpl *VAR_9;

    FUNC_4("(%s, %s, %p)\n", FUNC_5(VAR_6), FUNC_5(VAR_7), VAR_8);

    VAR_9 = FUNC_1(FUNC_0(), 0, sizeof *VAR_9);
    if (!VAR_9)
        return VAR_2;

    VAR_9->info.RemoteName = FUNC_6(VAR_6);
    if (!VAR_9->info.RemoteName)
    {
        FUNC_2(FUNC_0(), 0, VAR_9);
        return VAR_2;
    }

    VAR_9->info.LocalName = FUNC_6(VAR_7);
    if (!VAR_9->info.LocalName)
    {
        FUNC_2(FUNC_0(), 0, VAR_9->info.RemoteName);
        FUNC_2(FUNC_0(), 0, VAR_9);
        return VAR_2;
    }

    VAR_9->IBackgroundCopyFile2_iface.lpVtbl = &VAR_1;
    VAR_9->ref = 1;

    VAR_9->fileProgress.BytesTotal = VAR_0;
    VAR_9->fileProgress.BytesTransferred = 0;
    VAR_9->fileProgress.Completed = VAR_3;
    VAR_9->owner = VAR_5;
    VAR_9->read_size = 0;
    VAR_9->tempFileName[0] = 0;
    FUNC_3(&VAR_5->IBackgroundCopyJob3_iface);

    *VAR_8 = VAR_9;
    return VAR_4;
}
