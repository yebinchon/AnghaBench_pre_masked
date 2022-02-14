
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int dwPageSize; } ;
struct TYPE_12__ {int listentry; } ;
struct TYPE_9__ {int cbAlign; int cbBuffer; int cbPrefix; int cBuffers; } ;
struct TYPE_10__ {int free_list; TYPE_1__ props; } ;
struct TYPE_11__ {TYPE_2__ base; scalar_t__ pMemory; } ;
typedef TYPE_3__ StdMemAllocator ;
typedef TYPE_4__ StdMediaSample2 ;
typedef TYPE_5__ SYSTEM_INFO ;
typedef int LONG ;
typedef int IMemAllocator ;
typedef int HRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int *,TYPE_4__**) ;
 TYPE_3__* FUNC_2 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static HRESULT FUNC_7(IMemAllocator * VAR_5)
{
    StdMemAllocator *VAR_6 = FUNC_2(VAR_5);
    StdMediaSample2 * VAR_7 = ((void*)0);
    SYSTEM_INFO VAR_8;
    LONG VAR_9;

    FUNC_4(FUNC_6(&VAR_6->base.free_list));


    FUNC_0(&VAR_8);


    if ((VAR_8.dwPageSize % VAR_6->base.props.cbAlign) != 0)
        return VAR_4;





    VAR_6->pMemory = FUNC_3(((void*)0), (VAR_6->base.props.cbBuffer + VAR_6->base.props.cbPrefix) * VAR_6->base.props.cBuffers, VAR_1, VAR_2);

    if (!VAR_6->pMemory)
        return VAR_0;

    for (VAR_9 = VAR_6->base.props.cBuffers - 1; VAR_9 >= 0; VAR_9--)
    {

        BYTE * VAR_10 = (BYTE *)VAR_6->pMemory + VAR_9 * (VAR_6->base.props.cbBuffer + VAR_6->base.props.cbPrefix) + VAR_6->base.props.cbPrefix;

        FUNC_1(VAR_10, VAR_6->base.props.cbBuffer, VAR_5, &VAR_7);

        FUNC_5(&VAR_6->base.free_list, &VAR_7->listentry);
    }

    return VAR_3;
}
