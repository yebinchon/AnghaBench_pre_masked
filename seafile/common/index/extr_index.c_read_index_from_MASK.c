
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ondisk_cache_entry2 {int dummy; } ;
struct ondisk_cache_entry {int dummy; } ;
struct TYPE_4__ {scalar_t__ nsec; scalar_t__ sec; } ;
struct index_state {int cache_nr; int version; int has_modifier; TYPE_1__ timestamp; scalar_t__ initialized; } ;
struct cache_header {int hdr_entries; int hdr_version; } ;
struct cache_ext_hdr {int ext_size; int ext_name; } ;
struct cache_entry {int dummy; } ;
struct TYPE_5__ {scalar_t__ st_mtime; scalar_t__ st_size; } ;
typedef TYPE_2__ SeafStat ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct index_state*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ondisk_cache_entry*,struct cache_entry**) ;
 scalar_t__ FUNC_3 (struct ondisk_cache_entry2*,struct cache_entry**) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (int *,size_t,int,int ,int,int ) ;
 int FUNC_6 (void*,size_t) ;
 void* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct cache_entry*) ;
 scalar_t__ FUNC_9 (struct cache_entry*) ;
 scalar_t__ FUNC_10 (struct index_state*,unsigned int,char*,unsigned int) ;
 scalar_t__ FUNC_11 (int,TYPE_2__*) ;
 int FUNC_12 (char const*,int) ;
 int FUNC_13 (struct index_state*,int,struct cache_entry*) ;
 scalar_t__ FUNC_14 (struct cache_header*,size_t) ;

int FUNC_15(struct index_state *VAR_8, const char *VAR_9, int VAR_10)
{
    int VAR_11, VAR_12;
    SeafStat VAR_13;
    unsigned long VAR_14;
    struct cache_header *VAR_15;
    void *VAR_16;
    size_t VAR_17;

    if (VAR_8->initialized)
        return VAR_8->cache_nr;


    VAR_8->version = 4;

    if (VAR_10 > 0)
        VAR_8->has_modifier = 1;
    VAR_8->timestamp.sec = 0;
    VAR_8->timestamp.nsec = 0;
    VAR_11 = FUNC_12 (VAR_9, VAR_4 | VAR_3);
    if (VAR_11 < 0) {
        if (VAR_7 == VAR_0) {
            FUNC_0 (VAR_8);
            return 0;
        }
        FUNC_4("index file open failed\n");
        return -1;
    }

    if (FUNC_11(VAR_11, &VAR_13)) {
        FUNC_4("cannot stat the open index\n");
        FUNC_1(VAR_11);
        return -1;
    }

    VAR_17 = (size_t)VAR_13.st_size;
    if (VAR_17 < sizeof(struct cache_header) + 20) {
        FUNC_4("index file smaller than expected\n");
        FUNC_1(VAR_11);
        return -1;
    }

    VAR_16 = FUNC_5(((void*)0), VAR_17, VAR_5 | VAR_6, VAR_2, VAR_11, 0);
    FUNC_1(VAR_11);
    if (VAR_16 == VAR_1) {
        FUNC_4("unable to map index file\n");
        return -1;
    }

    VAR_15 = VAR_16;
    if (FUNC_14(VAR_15, VAR_17) < 0)
        goto unmap;





    VAR_8->version = FUNC_7(VAR_15->hdr_version);
    VAR_8->cache_nr = FUNC_7(VAR_15->hdr_entries);
    FUNC_0 (VAR_8);
    VAR_14 = sizeof(*VAR_15);
    for (VAR_12 = 0; VAR_12 < VAR_8->cache_nr; VAR_12++) {
        struct ondisk_cache_entry *VAR_18;
        struct ondisk_cache_entry2 *VAR_19;
        struct cache_entry *VAR_20;

        if (VAR_8->version < 4) {
            VAR_18 = (struct ondisk_cache_entry *)((char *)VAR_16 + VAR_14);




            if (FUNC_2(VAR_18, &VAR_20) < 0)
                return -1;

            VAR_14 += FUNC_8(VAR_20);
        } else {
            VAR_19 = (struct ondisk_cache_entry2 *)((char *)VAR_16 + VAR_14);




            if (FUNC_3(VAR_19, &VAR_20) < 0)
                return -1;

            VAR_14 += FUNC_9(VAR_20);
        }
        FUNC_13(VAR_8, VAR_12, VAR_20);
    }
    VAR_8->timestamp.sec = VAR_13.st_mtime;
    VAR_8->timestamp.nsec = 0;

    while (VAR_14 <= VAR_17 - 20 - sizeof(struct cache_ext_hdr)) {






        struct cache_ext_hdr *VAR_21;
        VAR_21 = (struct cache_ext_hdr *) ((char *)VAR_16 + VAR_14);
        unsigned int VAR_22 = FUNC_7(VAR_21->ext_name);
        unsigned int VAR_23 = FUNC_7(VAR_21->ext_size);
        if (FUNC_10(VAR_8,
                                 VAR_22,
                                 (char *) VAR_16 + VAR_14 + sizeof(struct cache_ext_hdr),
                                 VAR_23) < 0)
            goto unmap;
        VAR_14 += sizeof(struct cache_ext_hdr);
        VAR_14 += VAR_23;
    }

    FUNC_6(VAR_16, VAR_17);
    return VAR_8->cache_nr;

unmap:
    FUNC_6(VAR_16, VAR_17);
    FUNC_4("index file corrupt\n");
    return -1;
}
