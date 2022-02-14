
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_entry {TYPE_1__* ops; scalar_t__ obsolete; } ;
struct dst_cache_pcpu {int refresh_ts; int cookie; struct dst_entry* dst; } ;
struct dst_cache {int reset_ts; } ;
struct TYPE_2__ {int (* check ) (struct dst_entry*,int ) ;} ;


 int FUNC_0 (struct dst_cache_pcpu*,int *,int ) ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (struct dst_entry*) ;
 int VAR_0 ;
 int FUNC_3 (struct dst_entry*,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct dst_entry *FUNC_6(struct dst_cache *VAR_1,
            struct dst_cache_pcpu *VAR_2)
{
 struct dst_entry *VAR_3;

 VAR_3 = VAR_2->dst;
 if (!VAR_3)
  goto fail;


 FUNC_1(VAR_3);

 if (FUNC_5(!FUNC_4(VAR_2->refresh_ts, VAR_1->reset_ts) ||
       (VAR_3->obsolete && !VAR_3->ops->check(VAR_3, VAR_2->cookie)))) {
  FUNC_0(VAR_2, ((void*)0), 0);
  FUNC_2(VAR_3);
  goto fail;
 }
 return VAR_3;

fail:
 VAR_2->refresh_ts = VAR_0;
 return ((void*)0);
}
