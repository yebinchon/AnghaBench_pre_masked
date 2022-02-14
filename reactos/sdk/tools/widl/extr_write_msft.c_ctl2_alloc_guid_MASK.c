
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int* typelib_guidhash_segment; scalar_t__* typelib_segment_data; } ;
typedef TYPE_1__ msft_typelib_t ;
struct TYPE_11__ {int * Data4; int Data3; int Data2; int Data1; } ;
struct TYPE_10__ {int next_hash; TYPE_3__ guid; } ;
typedef TYPE_2__ MSFT_GuidEntry ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,size_t,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(
 msft_typelib_t *VAR_1,
 MSFT_GuidEntry *VAR_2)
{
    int VAR_3;
    MSFT_GuidEntry *VAR_4;
    int VAR_5;

    FUNC_0("adding uuid {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\n",
         VAR_2->guid.Data1, VAR_2->guid.Data2, VAR_2->guid.Data3,
         VAR_2->guid.Data4[0], VAR_2->guid.Data4[1], VAR_2->guid.Data4[2], VAR_2->guid.Data4[3],
         VAR_2->guid.Data4[4], VAR_2->guid.Data4[5], VAR_2->guid.Data4[6], VAR_2->guid.Data4[7]);

    VAR_5 = FUNC_3(&VAR_2->guid);

    VAR_3 = FUNC_2(VAR_1, VAR_5, &VAR_2->guid);
    if (VAR_3 != -1)
    {
        if (FUNC_4(2368))
            FUNC_5("duplicate uuid {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\n",
                    VAR_2->guid.Data1, VAR_2->guid.Data2, VAR_2->guid.Data3,
                    VAR_2->guid.Data4[0], VAR_2->guid.Data4[1], VAR_2->guid.Data4[2], VAR_2->guid.Data4[3],
                    VAR_2->guid.Data4[4], VAR_2->guid.Data4[5], VAR_2->guid.Data4[6], VAR_2->guid.Data4[7]);
        return -1;
    }

    VAR_3 = FUNC_1(VAR_1, VAR_0, sizeof(MSFT_GuidEntry), 0);

    VAR_4 = (void *)(VAR_1->typelib_segment_data[VAR_0] + VAR_3);
    *VAR_4 = *VAR_2;

    VAR_4->next_hash = VAR_1->typelib_guidhash_segment[VAR_5];
    VAR_1->typelib_guidhash_segment[VAR_5] = VAR_3;

    return VAR_3;
}
