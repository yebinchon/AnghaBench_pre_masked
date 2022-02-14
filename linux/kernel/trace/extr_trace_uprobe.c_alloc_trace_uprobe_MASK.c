
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ret_handler; int handler; } ;
struct trace_uprobe {int filter; TYPE_1__ consumer; int devent; int tp; } ;


 int VAR_0 ;
 struct trace_uprobe* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct trace_uprobe*) ;
 struct trace_uprobe* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,char const*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct trace_uprobe *
FUNC_7(const char *VAR_5, const char *VAR_6, int VAR_7, bool VAR_8)
{
 struct trace_uprobe *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(FUNC_1(VAR_7), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_6(&VAR_9->tp, VAR_6, VAR_5);
 if (VAR_10 < 0)
  goto error;

 FUNC_2(&VAR_9->devent, &VAR_2);
 VAR_9->consumer.handler = VAR_3;
 if (VAR_8)
  VAR_9->consumer.ret_handler = VAR_4;
 FUNC_3(&VAR_9->filter);
 return VAR_9;

error:
 FUNC_4(VAR_9);

 return FUNC_0(VAR_10);
}
