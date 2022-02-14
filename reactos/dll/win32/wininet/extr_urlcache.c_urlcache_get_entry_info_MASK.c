
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int urlcache_header ;
struct hash_entry {scalar_t__ offset; } ;
struct TYPE_4__ {scalar_t__ signature; } ;
struct TYPE_5__ {char const* url_off; int header_info_off; int header_info_size; int cache_entry_type; char const* local_name_off; TYPE_1__ header; } ;
typedef TYPE_2__ entry_url ;
typedef int cache_container ;
typedef int LPCSTR ;
typedef scalar_t__ LPBYTE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char const*,int **) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int *,int *,void*,int*,TYPE_2__ const*,int ) ;
 int FUNC_11 (int *,char const*,struct hash_entry**) ;

__attribute__((used)) static BOOL FUNC_12(const char *VAR_8, void *VAR_9,
        DWORD *VAR_10, DWORD VAR_11, BOOL VAR_12)
{
    urlcache_header *VAR_13;
    struct hash_entry *VAR_14;
    const entry_url *VAR_15;
    cache_container *VAR_16;
    DWORD VAR_17;

    FUNC_2("(%s, %p, %p, %x, %x)\n", FUNC_8(VAR_8), VAR_9, VAR_10, VAR_11, VAR_12);

    if(VAR_11 & ~VAR_3)
        FUNC_0("ignoring unsupported flags: %x\n", VAR_11);

    VAR_17 = FUNC_7(VAR_8, &VAR_16);
    if(VAR_17 != VAR_1) {
        FUNC_1(VAR_17);
        return VAR_2;
    }

    VAR_17 = FUNC_5(VAR_16, VAR_5);
    if(VAR_17 != VAR_1) {
        FUNC_1(VAR_17);
        return VAR_2;
    }

    if(!(VAR_13 = FUNC_4(VAR_16)))
        return VAR_2;

    if(!FUNC_11(VAR_13, VAR_8, &VAR_14)) {
        FUNC_6(VAR_16, VAR_13);
        FUNC_3("entry %s not found!\n", FUNC_8(VAR_8));
        FUNC_1(VAR_0);
        return VAR_2;
    }

    VAR_15 = (const entry_url*)((LPBYTE)VAR_13 + VAR_14->offset);
    if(VAR_15->header.signature != VAR_7) {
        FUNC_6(VAR_16, VAR_13);
        FUNC_0("Trying to retrieve entry of unknown format %s\n",
                FUNC_9((LPCSTR)&VAR_15->header.signature, sizeof(DWORD)));
        FUNC_1(VAR_0);
        return VAR_2;
    }

    FUNC_2("Found URL: %s\n", FUNC_8((LPCSTR)VAR_15 + VAR_15->url_off));
    FUNC_2("Header info: %s\n", FUNC_9((LPCSTR)VAR_15 +
                VAR_15->header_info_off, VAR_15->header_info_size));

    if((VAR_11 & VAR_3) && !(VAR_15->cache_entry_type & VAR_4)) {
        FUNC_6(VAR_16, VAR_13);
        FUNC_1(VAR_0);
        return VAR_2;
    }

    if(VAR_10) {
        if(!VAR_9)
            *VAR_10 = 0;

        VAR_17 = FUNC_10(VAR_16, VAR_13, VAR_9, VAR_10, VAR_15, VAR_12);
        if(VAR_17 != VAR_1) {
            FUNC_6(VAR_16, VAR_13);
            FUNC_1(VAR_17);
            return VAR_2;
        }
        if(VAR_15->local_name_off)
            FUNC_2("Local File Name: %s\n", FUNC_8((LPCSTR)VAR_15 + VAR_15->local_name_off));
    }

    FUNC_6(VAR_16, VAR_13);
    return VAR_6;
}
