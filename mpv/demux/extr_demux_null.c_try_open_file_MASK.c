
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {int seekable; int filename; } ;
typedef enum demux_check { ____Placeholder_demux_check } demux_check ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct demuxer *VAR_1, enum demux_check VAR_2)
{
    if (!FUNC_1(FUNC_0(VAR_1->filename), "null://") &&
        VAR_2 != VAR_0)
        return -1;
    VAR_1->seekable = 1;
    return 0;
}
