
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nr; int entries; scalar_t__ map; } ;
struct trace {TYPE_3__* evlist; TYPE_2__ filter_pids; } ;
struct TYPE_4__ {int threads; } ;
struct TYPE_6__ {TYPE_1__ core; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct trace*) ;

__attribute__((used)) static int FUNC_4(struct trace *VAR_0)
{
 int VAR_1 = 0;






 if (VAR_0->filter_pids.nr > 0) {
  VAR_1 = FUNC_1(VAR_0->evlist, VAR_0->filter_pids.nr,
            VAR_0->filter_pids.entries);
  if (!VAR_1 && VAR_0->filter_pids.map) {
   VAR_1 = FUNC_0(VAR_0->filter_pids.map, VAR_0->filter_pids.nr,
             VAR_0->filter_pids.entries);
  }
 } else if (FUNC_2(VAR_0->evlist->core.threads, 0) == -1) {
  VAR_1 = FUNC_3(VAR_0);
 }

 return VAR_1;
}
