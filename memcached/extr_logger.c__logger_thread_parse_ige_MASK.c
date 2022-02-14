
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct logentry_item_get {size_t was_found; int sfd; int clsid; int nkey; int key; } ;
struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {TYPE_1__ tv; scalar_t__ gid; scalar_t__ data; } ;
typedef TYPE_2__ logentry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int,int,unsigned long long,char*,char const* const,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(logentry *VAR_2, char *VAR_3) {
    int VAR_4;
    struct logentry_item_get *VAR_5 = (struct logentry_item_get *) VAR_2->data;
    char VAR_6[VAR_0];
    const char * const VAR_7[] = {
        "not_found", "found", "flushed", "expired" };

    FUNC_1(VAR_5->key, VAR_6, VAR_5->nkey, VAR_0);
    VAR_4 = FUNC_0(VAR_3, VAR_1,
            "ts=%d.%d gid=%llu type=item_get key=%s status=%s clsid=%u cfd=%d\n",
            (int)VAR_2->tv.tv_sec, (int)VAR_2->tv.tv_usec, (unsigned long long) VAR_2->gid,
            VAR_6, VAR_7[VAR_5->was_found], VAR_5->clsid, VAR_5->sfd);
    return VAR_4;
}
