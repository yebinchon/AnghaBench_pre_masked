
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edge_face_map {TYPE_1__* entries; int * lists; } ;
struct TYPE_2__ {int v2; int face; int entry; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static HRESULT FUNC_4(struct edge_face_map *VAR_2, const DWORD *VAR_3,
        const DWORD *VAR_4, DWORD VAR_5)
{
    DWORD VAR_6, VAR_7;
    DWORD VAR_8;

    VAR_2->lists = FUNC_1(FUNC_0(), 0, 3 * VAR_5 * sizeof(*VAR_2->lists));
    if (!VAR_2->lists) return VAR_1;

    VAR_2->entries = FUNC_1(FUNC_0(), 0, 3 * VAR_5 * sizeof(*VAR_2->entries));
    if (!VAR_2->entries) return VAR_1;



    for (VAR_8 = 0; VAR_8 < 3 * VAR_5; VAR_8++)
    {
        FUNC_3(&VAR_2->lists[VAR_8]);
    }

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
        {
            DWORD VAR_9 = VAR_3[3*VAR_6 + VAR_7];
            DWORD VAR_10 = VAR_3[3*VAR_6 + (VAR_7+1)%3];
            DWORD VAR_11 = VAR_4[VAR_9];
            DWORD VAR_12 = VAR_4[VAR_10];

            if (VAR_9 != VAR_10)
            {
                VAR_8 = 3*VAR_6 + VAR_7;
                VAR_2->entries[VAR_8].v2 = VAR_12;
                VAR_2->entries[VAR_8].face = VAR_6;
                FUNC_2(&VAR_2->lists[VAR_11], &VAR_2->entries[VAR_8].entry);
            }
        }
    }

    return VAR_0;
}
