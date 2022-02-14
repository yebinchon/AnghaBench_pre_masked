
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_12__ {int hdc; } ;
struct TYPE_11__ {int physDev; } ;
struct TYPE_10__ {int handles_size; TYPE_4__ dev; TYPE_1__* mh; scalar_t__ hFile; scalar_t__ cur_handles; void* handles; } ;
struct TYPE_9__ {int mtHeaderSize; int mtVersion; int mtSize; scalar_t__ mtNoParameters; scalar_t__ mtMaxRecord; scalar_t__ mtNoObjects; } ;
typedef int METAHEADER ;
typedef TYPE_2__ METAFILEDRV_PDEVICE ;
typedef TYPE_3__ DC ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_4__*,int *) ;

__attribute__((used)) static DC *FUNC_7(void)
{
    DC *VAR_4;
    METAFILEDRV_PDEVICE *VAR_5;

    if (!(VAR_4 = FUNC_4( VAR_3 ))) return ((void*)0);

    VAR_5 = FUNC_1(FUNC_0(),0,sizeof(*VAR_5));
    if (!VAR_5)
    {
        FUNC_5( VAR_4 );
        return ((void*)0);
    }
    if (!(VAR_5->mh = FUNC_1( FUNC_0(), 0, sizeof(*VAR_5->mh) )))
    {
        FUNC_2( FUNC_0(), 0, VAR_5 );
        FUNC_5( VAR_4 );
        return ((void*)0);
    }

    FUNC_6( &VAR_4->physDev, &VAR_5->dev, &VAR_2 );

    VAR_5->handles = FUNC_1(FUNC_0(), VAR_1, VAR_0 * sizeof(VAR_5->handles[0]));
    VAR_5->handles_size = VAR_0;
    VAR_5->cur_handles = 0;

    VAR_5->hFile = 0;

    VAR_5->mh->mtHeaderSize = sizeof(METAHEADER) / sizeof(WORD);
    VAR_5->mh->mtVersion = 0x0300;
    VAR_5->mh->mtSize = VAR_5->mh->mtHeaderSize;
    VAR_5->mh->mtNoObjects = 0;
    VAR_5->mh->mtMaxRecord = 0;
    VAR_5->mh->mtNoParameters = 0;

    FUNC_3( VAR_5->dev.hdc, 0, 0, 0, 0);

    return VAR_4;
}
