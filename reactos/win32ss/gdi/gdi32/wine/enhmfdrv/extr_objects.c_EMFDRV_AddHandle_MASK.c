
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t handles_size; scalar_t__* handles; scalar_t__ cur_handles; TYPE_1__* emh; } ;
struct TYPE_4__ {scalar_t__ nHandles; } ;
typedef int PHYSDEV ;
typedef int HGDIOBJ ;
typedef TYPE_2__ EMFDRV_PDEVICE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_1 (int ,int ,scalar_t__*,int) ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static UINT FUNC_4( PHYSDEV VAR_2, HGDIOBJ VAR_3 )
{
    EMFDRV_PDEVICE *VAR_4 = FUNC_2( VAR_2 );
    UINT VAR_5;

    for(VAR_5 = 0; VAR_5 < VAR_4->handles_size; VAR_5++)
        if(VAR_4->handles[VAR_5] == 0) break;
    if(VAR_5 == VAR_4->handles_size) {
        VAR_4->handles_size += VAR_0;
 VAR_4->handles = FUNC_1(FUNC_0(), VAR_1,
           VAR_4->handles,
           VAR_4->handles_size * sizeof(VAR_4->handles[0]));
    }
    VAR_4->handles[VAR_5] = FUNC_3( VAR_3 );

    VAR_4->cur_handles++;
    if(VAR_4->cur_handles > VAR_4->emh->nHandles)
        VAR_4->emh->nHandles++;

    return VAR_5 + 1;
}
