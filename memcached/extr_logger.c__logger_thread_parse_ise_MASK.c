
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct logentry_item_store {int cmd; size_t status; int sfd; int clsid; int ttl; int nkey; int key; } ;
struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {TYPE_1__ tv; scalar_t__ gid; scalar_t__ data; } ;
typedef TYPE_2__ logentry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int,int,unsigned long long,char*,char const* const,char const*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(logentry *VAR_2, char *VAR_3) {
    int VAR_4;
    const char *VAR_5 = "na";
    char VAR_6[VAR_0];
    struct logentry_item_store *VAR_7 = (struct logentry_item_store *) VAR_2->data;
    const char * const VAR_8[] = {
        "not_stored", "stored", "exists", "not_found", "too_large", "no_memory" };
    const char * const VAR_9[] = {
        "null", "add", "set", "replace", "append", "prepend", "cas" };

    if (VAR_7->cmd <= 6)
        VAR_5 = VAR_9[VAR_7->cmd];

    FUNC_1(VAR_7->key, VAR_6, VAR_7->nkey, VAR_0);
    VAR_4 = FUNC_0(VAR_3, VAR_1,
            "ts=%d.%d gid=%llu type=item_store key=%s status=%s cmd=%s ttl=%u clsid=%u cfd=%d\n",
            (int)VAR_2->tv.tv_sec, (int)VAR_2->tv.tv_usec, (unsigned long long) VAR_2->gid,
            VAR_6, VAR_8[VAR_7->status], VAR_5, VAR_7->ttl, VAR_7->clsid, VAR_7->sfd);
    return VAR_4;
}
