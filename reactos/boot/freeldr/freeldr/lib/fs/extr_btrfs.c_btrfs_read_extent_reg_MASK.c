
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct btrfs_path {int dummy; } ;
struct btrfs_file_extent_item {scalar_t__ num_bytes; scalar_t__ disk_bytenr; scalar_t__ disk_num_bytes; scalar_t__ compression; scalar_t__ offset; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static u64 FUNC_8(struct btrfs_path *VAR_5, struct btrfs_file_extent_item *VAR_6,
                                 u64 VAR_7, u64 VAR_8, char *VAR_9)
{
    u64 VAR_10, VAR_11;
    char *VAR_12;
    VAR_11 = VAR_6->num_bytes;

    if (VAR_7 > VAR_11)
    {
        FUNC_1("Tried to read offset (%llu) beyond extent length (%lu)\n", VAR_7, VAR_11);
        return VAR_2;
    }

    if (VAR_8 > VAR_11 - VAR_7)
        VAR_8 = VAR_11 - VAR_7;


    if (VAR_6->disk_bytenr == 0 && VAR_6->disk_num_bytes == 0)
    {
        FUNC_4(VAR_9, VAR_8);
        return VAR_8;
    }

    VAR_10 = FUNC_6(VAR_6->disk_bytenr);
    if (VAR_10 == VAR_1)
    {
        FUNC_1("Unable to convert logical address to physical: %llu\n", VAR_6->disk_bytenr);
        return VAR_2;
    }

    if (VAR_6->compression == VAR_0)
    {
        VAR_10 += VAR_6->offset + VAR_7;


        if (VAR_10 & (VAR_3 - 1))
        {
            u32 VAR_13;

            VAR_12 = FUNC_2(VAR_3, VAR_4);

            if (!FUNC_5(FUNC_0(VAR_10, VAR_3), VAR_12, VAR_3))
            {
                FUNC_3(VAR_12, VAR_4);
                return VAR_2;
            }

            VAR_13 = (u32)(VAR_10 & (VAR_3 - 1));

            if (VAR_8 <= VAR_3 - VAR_13)
            {
                FUNC_7(VAR_9, VAR_12 + VAR_13, VAR_8);
                FUNC_3(VAR_12, VAR_4);
                return VAR_8;
            }

            FUNC_7(VAR_9, VAR_12 + VAR_13, VAR_3 - VAR_13);
            FUNC_3(VAR_12, VAR_4);

            if (!FUNC_5(VAR_10 + VAR_3 - VAR_13, VAR_9 + VAR_3 - VAR_13, VAR_8 - VAR_3 + VAR_13))
                return VAR_2;
        } else
        {
            if (!FUNC_5(VAR_10, VAR_9, VAR_8))
                return VAR_2;
        }

        return VAR_8;
    }

    FUNC_1("No compression supported right now\n");
    return VAR_2;
}
