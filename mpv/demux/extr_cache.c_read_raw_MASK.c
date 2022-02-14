
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_cache {size_t file_pos; int fd; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct demux_cache*,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ,void*,size_t) ;

__attribute__((used)) static bool FUNC_3(struct demux_cache *VAR_1, void *VAR_2, size_t VAR_3)
{
    ssize_t VAR_4 = FUNC_2(VAR_1->fd, VAR_2, VAR_3);

    if (VAR_4 < 0) {
        FUNC_0(VAR_1, "Failed to read cache file: %s\n", FUNC_1(VAR_0));
        return 0;
    }

    VAR_1->file_pos += VAR_4;



    if (VAR_4 != VAR_3) {
        FUNC_0(VAR_1, "Could not read all data.\n");
        return 0;
    }

    return 1;
}
