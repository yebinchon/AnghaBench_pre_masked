
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct evsel {int dummy; } ;
struct TYPE_2__ {int (* process_stat ) (int *,struct evsel*,int ) ;} ;


 int FUNC_0 (struct evsel*,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct evsel*,int ) ;

__attribute__((used)) static void FUNC_2(struct evsel *VAR_2, u64 VAR_3)
{
 if (VAR_0 && VAR_0->process_stat)
  VAR_0->process_stat(&VAR_1, VAR_2, VAR_3);
 else
  FUNC_0(VAR_2, VAR_3);
}
