
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* path; struct TYPE_4__* metadatahdr; int hfile; int hmap; int data; scalar_t__ is_mapped_file; } ;
typedef int HRESULT ;
typedef TYPE_1__ ASSEMBLY ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

HRESULT FUNC_4(ASSEMBLY *VAR_1)
{
    if (!VAR_1)
        return VAR_0;

    if (VAR_1->is_mapped_file)
    {
        FUNC_3(VAR_1->data);
        FUNC_0(VAR_1->hmap);
        FUNC_0(VAR_1->hfile);
    }
    FUNC_2(FUNC_1(), 0, VAR_1->metadatahdr);
    FUNC_2(FUNC_1(), 0, VAR_1->path);
    FUNC_2(FUNC_1(), 0, VAR_1);

    return VAR_0;
}
