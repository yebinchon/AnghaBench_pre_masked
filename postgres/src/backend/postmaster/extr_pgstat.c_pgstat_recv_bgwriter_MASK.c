
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int buf_alloc; int buf_fsync_backend; int buf_written_backend; int maxwritten_clean; int buf_written_clean; int buf_written_checkpoints; int checkpoint_sync_time; int checkpoint_write_time; int requested_checkpoints; int timed_checkpoints; } ;
struct TYPE_4__ {scalar_t__ m_buf_alloc; scalar_t__ m_buf_fsync_backend; scalar_t__ m_buf_written_backend; scalar_t__ m_maxwritten_clean; scalar_t__ m_buf_written_clean; scalar_t__ m_buf_written_checkpoints; scalar_t__ m_checkpoint_sync_time; scalar_t__ m_checkpoint_write_time; scalar_t__ m_requested_checkpoints; scalar_t__ m_timed_checkpoints; } ;
typedef TYPE_1__ PgStat_MsgBgWriter ;


 TYPE_3__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(PgStat_MsgBgWriter *VAR_1, int VAR_2)
{
 VAR_0.timed_checkpoints += VAR_1->m_timed_checkpoints;
 VAR_0.requested_checkpoints += VAR_1->m_requested_checkpoints;
 VAR_0.checkpoint_write_time += VAR_1->m_checkpoint_write_time;
 VAR_0.checkpoint_sync_time += VAR_1->m_checkpoint_sync_time;
 VAR_0.buf_written_checkpoints += VAR_1->m_buf_written_checkpoints;
 VAR_0.buf_written_clean += VAR_1->m_buf_written_clean;
 VAR_0.maxwritten_clean += VAR_1->m_maxwritten_clean;
 VAR_0.buf_written_backend += VAR_1->m_buf_written_backend;
 VAR_0.buf_fsync_backend += VAR_1->m_buf_fsync_backend;
 VAR_0.buf_alloc += VAR_1->m_buf_alloc;
}
