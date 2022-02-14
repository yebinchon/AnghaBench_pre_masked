
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int blk_write_time; int blk_read_time; scalar_t__ temp_blks_written; scalar_t__ temp_blks_read; scalar_t__ local_blks_written; scalar_t__ local_blks_dirtied; scalar_t__ local_blks_read; scalar_t__ local_blks_hit; scalar_t__ shared_blks_written; scalar_t__ shared_blks_dirtied; scalar_t__ shared_blks_read; scalar_t__ shared_blks_hit; } ;
typedef TYPE_1__ BufferUsage ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(BufferUsage *VAR_0, const BufferUsage *VAR_1)
{
 VAR_0->shared_blks_hit += VAR_1->shared_blks_hit;
 VAR_0->shared_blks_read += VAR_1->shared_blks_read;
 VAR_0->shared_blks_dirtied += VAR_1->shared_blks_dirtied;
 VAR_0->shared_blks_written += VAR_1->shared_blks_written;
 VAR_0->local_blks_hit += VAR_1->local_blks_hit;
 VAR_0->local_blks_read += VAR_1->local_blks_read;
 VAR_0->local_blks_dirtied += VAR_1->local_blks_dirtied;
 VAR_0->local_blks_written += VAR_1->local_blks_written;
 VAR_0->temp_blks_read += VAR_1->temp_blks_read;
 VAR_0->temp_blks_written += VAR_1->temp_blks_written;
 FUNC_0(VAR_0->blk_read_time, VAR_1->blk_read_time);
 FUNC_0(VAR_0->blk_write_time, VAR_1->blk_write_time);
}
