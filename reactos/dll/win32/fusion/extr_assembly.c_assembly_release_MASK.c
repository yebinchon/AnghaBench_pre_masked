
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hfile; int hmap; int data; struct TYPE_4__* path; struct TYPE_4__* metadatahdr; } ;
typedef int HRESULT ;
typedef TYPE_1__ ASSEMBLY ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

HRESULT FUNC_3(ASSEMBLY *VAR_1)
{
    if (!VAR_1)
        return VAR_0;

    FUNC_2(VAR_1->metadatahdr);
    FUNC_2(VAR_1->path);
    FUNC_1(VAR_1->data);
    FUNC_0(VAR_1->hmap);
    FUNC_0(VAR_1->hfile);
    FUNC_2(VAR_1);

    return VAR_0;
}
