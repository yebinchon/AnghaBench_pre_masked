
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* get ) (TYPE_2__*) ;} ;
struct TYPE_4__ {int lineno; TYPE_2__ source; } ;
typedef TYPE_1__ json_stream ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(json_stream *VAR_0)
{
   int VAR_1;
   while (FUNC_0(VAR_1 = VAR_0->source.get(&VAR_0->source)))
       if (VAR_1 == '\n')
           VAR_0->lineno++;
   return VAR_1;
}
