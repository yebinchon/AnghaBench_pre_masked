
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct btrfs_dir_item {scalar_t__ type; int name_len; } ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOLEAN FUNC_1(struct btrfs_dir_item *VAR_5, u32 VAR_6, u32 VAR_7)
{
    u16 VAR_8 = VAR_2;
    u32 VAR_9;

    if (VAR_5->type >= VAR_0)
    {
        FUNC_0("Invalid dir item type: %i\n", VAR_5->type);
        return VAR_4;
    }

    if (VAR_5->type == VAR_1)
        VAR_8 = 255;

    VAR_9 = VAR_6 + sizeof(*VAR_5) + VAR_5->name_len;
    if (VAR_5->name_len > VAR_8 || VAR_9 > VAR_7)
    {
        FUNC_0("Invalid dir item name len: %u\n", VAR_5->name_len);
        return VAR_4;
    }

    return VAR_3;
}
