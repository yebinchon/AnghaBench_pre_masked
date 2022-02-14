
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Magic; } ;
struct TYPE_12__ {TYPE_1__ OptionalHeader; } ;
struct TYPE_11__ {int corhdr; TYPE_7__* nthdr; int data; } ;
struct TYPE_10__ {int * DataDirectory; } ;
struct TYPE_9__ {int * DataDirectory; } ;
typedef TYPE_2__ IMAGE_OPTIONAL_HEADER64 ;
typedef TYPE_3__ IMAGE_OPTIONAL_HEADER32 ;
typedef int IMAGE_DATA_DIRECTORY ;
typedef int HRESULT ;
typedef TYPE_4__ ASSEMBLY ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_7__* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int *,void**) ;

__attribute__((used)) static HRESULT FUNC_2(ASSEMBLY *VAR_4)
{
    IMAGE_DATA_DIRECTORY *VAR_5;

    VAR_4->nthdr = FUNC_0(VAR_4->data);
    if (!VAR_4->nthdr)
        return VAR_0;

    if (VAR_4->nthdr->OptionalHeader.Magic == VAR_2)
    {
        IMAGE_OPTIONAL_HEADER64 *VAR_6 =
                (IMAGE_OPTIONAL_HEADER64 *)&VAR_4->nthdr->OptionalHeader;
        VAR_5 = VAR_6->DataDirectory;
    }
    else
    {
        IMAGE_OPTIONAL_HEADER32 *VAR_7 =
                (IMAGE_OPTIONAL_HEADER32 *)&VAR_4->nthdr->OptionalHeader;
        VAR_5 = VAR_7->DataDirectory;
    }

    if (!VAR_5)
        return VAR_0;

    if (!FUNC_1(VAR_4, &VAR_5[VAR_1], (void**)&VAR_4->corhdr))
        return VAR_0;

    return VAR_3;
}
