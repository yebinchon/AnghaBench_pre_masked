
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct logentry_eviction {int it_flags; int clsid; int latime; scalar_t__ exptime; int nkey; int key; } ;
struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {TYPE_1__ tv; scalar_t__ gid; scalar_t__ data; } ;
typedef TYPE_2__ logentry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,int,int,unsigned long long,char*,char*,long long,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(logentry *VAR_3, char *VAR_4) {
    int VAR_5;
    char VAR_6[VAR_1];
    struct logentry_eviction *VAR_7 = (struct logentry_eviction *) VAR_3->data;
    FUNC_1(VAR_7->key, VAR_6, VAR_7->nkey, VAR_1);
    VAR_5 = FUNC_0(VAR_4, VAR_2,
            "ts=%d.%d gid=%llu type=eviction key=%s fetch=%s ttl=%lld la=%d clsid=%u\n",
            (int)VAR_3->tv.tv_sec, (int)VAR_3->tv.tv_usec, (unsigned long long) VAR_3->gid,
            VAR_6, (VAR_7->it_flags & VAR_0) ? "yes" : "no",
            (long long int)VAR_7->exptime, VAR_7->latime, VAR_7->clsid);

    return VAR_5;
}
