
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_4__ {scalar_t__ flushing_errors; scalar_t__ fs_errors; scalar_t__ io_errors; scalar_t__ page_cache_descriptors; scalar_t__ journalfile_deletions; scalar_t__ journalfile_creations; scalar_t__ datafile_deletions; scalar_t__ datafile_creations; scalar_t__ io_read_extents; scalar_t__ io_read_extent_bytes; scalar_t__ io_write_extents; scalar_t__ io_write_extent_bytes; scalar_t__ io_read_requests; scalar_t__ io_read_bytes; scalar_t__ io_write_requests; scalar_t__ io_write_bytes; scalar_t__ after_decompress_bytes; scalar_t__ before_decompress_bytes; scalar_t__ after_compress_bytes; scalar_t__ before_compress_bytes; scalar_t__ pg_cache_evictions; scalar_t__ pg_cache_backfills; scalar_t__ pg_cache_misses; scalar_t__ pg_cache_hits; scalar_t__ pg_cache_deletions; scalar_t__ pg_cache_insertions; scalar_t__ metric_API_consumers; scalar_t__ metric_API_producers; } ;
struct TYPE_3__ {scalar_t__ nr_committed_pages; } ;
struct page_cache {TYPE_1__ committed_page_index; scalar_t__ populated_pages; scalar_t__ page_descriptors; } ;
struct rrdengine_instance {TYPE_2__ stats; struct page_cache pg_cache; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_1(struct rrdengine_instance *VAR_5, unsigned long long *VAR_6)
{
    struct page_cache *VAR_7 = &VAR_5->pg_cache;

    VAR_6[0] = (uint64_t)VAR_5->stats.metric_API_producers;
    VAR_6[1] = (uint64_t)VAR_5->stats.metric_API_consumers;
    VAR_6[2] = (uint64_t)VAR_7->page_descriptors;
    VAR_6[3] = (uint64_t)VAR_7->populated_pages;
    VAR_6[4] = (uint64_t)VAR_7->committed_page_index.nr_committed_pages;
    VAR_6[5] = (uint64_t)VAR_5->stats.pg_cache_insertions;
    VAR_6[6] = (uint64_t)VAR_5->stats.pg_cache_deletions;
    VAR_6[7] = (uint64_t)VAR_5->stats.pg_cache_hits;
    VAR_6[8] = (uint64_t)VAR_5->stats.pg_cache_misses;
    VAR_6[9] = (uint64_t)VAR_5->stats.pg_cache_backfills;
    VAR_6[10] = (uint64_t)VAR_5->stats.pg_cache_evictions;
    VAR_6[11] = (uint64_t)VAR_5->stats.before_compress_bytes;
    VAR_6[12] = (uint64_t)VAR_5->stats.after_compress_bytes;
    VAR_6[13] = (uint64_t)VAR_5->stats.before_decompress_bytes;
    VAR_6[14] = (uint64_t)VAR_5->stats.after_decompress_bytes;
    VAR_6[15] = (uint64_t)VAR_5->stats.io_write_bytes;
    VAR_6[16] = (uint64_t)VAR_5->stats.io_write_requests;
    VAR_6[17] = (uint64_t)VAR_5->stats.io_read_bytes;
    VAR_6[18] = (uint64_t)VAR_5->stats.io_read_requests;
    VAR_6[19] = (uint64_t)VAR_5->stats.io_write_extent_bytes;
    VAR_6[20] = (uint64_t)VAR_5->stats.io_write_extents;
    VAR_6[21] = (uint64_t)VAR_5->stats.io_read_extent_bytes;
    VAR_6[22] = (uint64_t)VAR_5->stats.io_read_extents;
    VAR_6[23] = (uint64_t)VAR_5->stats.datafile_creations;
    VAR_6[24] = (uint64_t)VAR_5->stats.datafile_deletions;
    VAR_6[25] = (uint64_t)VAR_5->stats.journalfile_creations;
    VAR_6[26] = (uint64_t)VAR_5->stats.journalfile_deletions;
    VAR_6[27] = (uint64_t)VAR_5->stats.page_cache_descriptors;
    VAR_6[28] = (uint64_t)VAR_5->stats.io_errors;
    VAR_6[29] = (uint64_t)VAR_5->stats.fs_errors;
    VAR_6[30] = (uint64_t)VAR_3;
    VAR_6[31] = (uint64_t)VAR_2;
    VAR_6[32] = (uint64_t)VAR_4;
    VAR_6[33] = (uint64_t)VAR_5->stats.flushing_errors;
    VAR_6[34] = (uint64_t)VAR_1;
    FUNC_0(VAR_0 == 35);
}
