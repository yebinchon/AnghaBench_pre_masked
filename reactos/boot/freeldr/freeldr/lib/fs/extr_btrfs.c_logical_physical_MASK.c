
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_chunk_map_item {scalar_t__ logical; } ;
struct btrfs_chunk_map {TYPE_1__* map; int cur_length; } ;
typedef int cmp_func ;
struct TYPE_4__ {struct btrfs_chunk_map ChunkMap; } ;
struct TYPE_3__ {scalar_t__ logical; scalar_t__ length; scalar_t__ physical; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int,struct btrfs_chunk_map_item*,int ,int ,int ,int*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u64 FUNC_2(u64 VAR_3)
{
    struct btrfs_chunk_map *VAR_4 = &VAR_0->ChunkMap;
    struct btrfs_chunk_map_item VAR_5;
    int VAR_6, VAR_7;

    VAR_5.logical = VAR_3;
    VAR_7 = FUNC_1(VAR_4->map, sizeof(VAR_4->map[0]), &VAR_5,
                     (cmp_func) VAR_2, 0,
                     VAR_4->cur_length, &VAR_6);
    if (VAR_7 == 0)
        VAR_6++;
    else if (VAR_6 == 0)
        return VAR_1;
    if (VAR_3 >= VAR_4->map[VAR_6 - 1].logical + VAR_4->map[VAR_6 - 1].length)
        return VAR_1;

    FUNC_0("Address translation: 0x%llx -> 0x%llx\n", VAR_3,
          VAR_4->map[VAR_6 - 1].physical + VAR_3 - VAR_4->map[VAR_6 - 1].logical);

    return VAR_4->map[VAR_6 - 1].physical + VAR_3 - VAR_4->map[VAR_6 - 1].logical;
}
