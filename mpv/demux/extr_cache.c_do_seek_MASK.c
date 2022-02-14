
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct demux_cache {scalar_t__ file_pos; int fd; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (struct demux_cache*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_2(struct demux_cache *VAR_1, uint64_t VAR_2)
{
    if (VAR_1->file_pos == VAR_2)
        return 1;

    off_t VAR_3 = FUNC_1(VAR_1->fd, VAR_2, VAR_0);

    if (VAR_3 == (off_t)-1) {
        FUNC_0(VAR_1, "Failed to seek in cache file.\n");
        VAR_1->file_pos = -1;
    } else {
        VAR_1->file_pos = VAR_3;
    }

    return VAR_1->file_pos >= 0;
}
