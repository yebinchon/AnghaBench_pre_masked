
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int target; } ;
struct trace {TYPE_1__ opts; int tool; int * host; } ;
struct TYPE_4__ {int threads; } ;
struct evlist {TYPE_2__ core; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,int ,int,int) ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct trace *VAR_3, struct evlist *VAR_4)
{
 int VAR_5 = FUNC_3(((void*)0));

 if (VAR_5)
  return VAR_5;

 VAR_3->host = FUNC_1();
 if (VAR_3->host == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_3->host, VAR_1);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_0(VAR_3->host, &VAR_3->tool, &VAR_3->opts.target,
         VAR_4->core.threads, VAR_2, 0,
         1);
out:
 if (VAR_5)
  FUNC_2();

 return VAR_5;
}
