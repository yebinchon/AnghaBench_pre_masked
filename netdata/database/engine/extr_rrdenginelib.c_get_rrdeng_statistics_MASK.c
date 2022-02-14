
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ flushing_errors; scalar_t__ fs_errors; scalar_t__ io_errors; scalar_t__ journalfile_deletions; scalar_t__ journalfile_creations; scalar_t__ datafile_deletions; scalar_t__ datafile_creations; scalar_t__ io_read_extents; scalar_t__ io_read_extent_bytes; scalar_t__ io_write_extents; scalar_t__ io_write_extent_bytes; scalar_t__ io_read_requests; scalar_t__ io_read_bytes; scalar_t__ io_write_requests; scalar_t__ io_write_bytes; scalar_t__ after_decompress_bytes; scalar_t__ before_decompress_bytes; scalar_t__ after_compress_bytes; scalar_t__ before_compress_bytes; scalar_t__ pg_cache_evictions; scalar_t__ pg_cache_backfills; scalar_t__ pg_cache_misses; scalar_t__ pg_cache_hits; scalar_t__ pg_cache_deletions; scalar_t__ pg_cache_insertions; scalar_t__ page_cache_descriptors; scalar_t__ metric_API_consumers; scalar_t__ metric_API_producers; } ;
struct TYPE_3__ {scalar_t__ nr_committed_pages; } ;
struct page_cache {TYPE_1__ committed_page_index; scalar_t__ populated_pages; scalar_t__ page_descriptors; } ;
struct rrdengine_instance {TYPE_2__ stats; struct page_cache pg_cache; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,size_t,char*,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long,long) ;

char *FUNC_1(struct rrdengine_instance *VAR_4, char *VAR_5, size_t VAR_6)
{
    struct page_cache *VAR_7;

    VAR_7 = &VAR_4->pg_cache;
    FUNC_0(VAR_5, VAR_6,
              "metric_API_producers: %ld\n"
              "metric_API_consumers: %ld\n"
              "page_cache_total_pages: %ld\n"
              "page_cache_descriptors: %ld\n"
              "page_cache_populated_pages: %ld\n"
              "page_cache_committed_pages: %ld\n"
              "page_cache_insertions: %ld\n"
              "page_cache_deletions: %ld\n"
              "page_cache_hits: %ld\n"
              "page_cache_misses: %ld\n"
              "page_cache_backfills: %ld\n"
              "page_cache_evictions: %ld\n"
              "compress_before_bytes: %ld\n"
              "compress_after_bytes: %ld\n"
              "decompress_before_bytes: %ld\n"
              "decompress_after_bytes: %ld\n"
              "io_write_bytes: %ld\n"
              "io_write_requests: %ld\n"
              "io_read_bytes: %ld\n"
              "io_read_requests: %ld\n"
              "io_write_extent_bytes: %ld\n"
              "io_write_extents: %ld\n"
              "io_read_extent_bytes: %ld\n"
              "io_read_extents: %ld\n"
              "datafile_creations: %ld\n"
              "datafile_deletions: %ld\n"
              "journalfile_creations: %ld\n"
              "journalfile_deletions: %ld\n"
              "io_errors: %ld\n"
              "fs_errors: %ld\n"
              "global_io_errors: %ld\n"
              "global_fs_errors: %ld\n"
              "rrdeng_reserved_file_descriptors: %ld\n"
              "flushing_errors: %ld\n"
              "global_flushing_errors: %ld\n",
              (long)VAR_4->stats.metric_API_producers,
              (long)VAR_4->stats.metric_API_consumers,
              (long)VAR_7->page_descriptors,
              (long)VAR_4->stats.page_cache_descriptors,
              (long)VAR_7->populated_pages,
              (long)VAR_7->committed_page_index.nr_committed_pages,
              (long)VAR_4->stats.pg_cache_insertions,
              (long)VAR_4->stats.pg_cache_deletions,
              (long)VAR_4->stats.pg_cache_hits,
              (long)VAR_4->stats.pg_cache_misses,
              (long)VAR_4->stats.pg_cache_backfills,
              (long)VAR_4->stats.pg_cache_evictions,
              (long)VAR_4->stats.before_compress_bytes,
              (long)VAR_4->stats.after_compress_bytes,
              (long)VAR_4->stats.before_decompress_bytes,
              (long)VAR_4->stats.after_decompress_bytes,
              (long)VAR_4->stats.io_write_bytes,
              (long)VAR_4->stats.io_write_requests,
              (long)VAR_4->stats.io_read_bytes,
              (long)VAR_4->stats.io_read_requests,
              (long)VAR_4->stats.io_write_extent_bytes,
              (long)VAR_4->stats.io_write_extents,
              (long)VAR_4->stats.io_read_extent_bytes,
              (long)VAR_4->stats.io_read_extents,
              (long)VAR_4->stats.datafile_creations,
              (long)VAR_4->stats.datafile_deletions,
              (long)VAR_4->stats.journalfile_creations,
              (long)VAR_4->stats.journalfile_deletions,
              (long)VAR_4->stats.io_errors,
              (long)VAR_4->stats.fs_errors,
              (long)VAR_2,
              (long)VAR_1,
              (long)VAR_3,
              (long)VAR_4->stats.flushing_errors,
              (long)VAR_0
    );
    return VAR_5;
}
