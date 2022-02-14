
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;


 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (struct evsel*,char*,size_t) ;

__attribute__((used)) static int FUNC_2(struct evsel *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0->core.attr.config, VAR_1, VAR_2);
 return VAR_3 + FUNC_1(VAR_0, VAR_1 + VAR_3, VAR_2 - VAR_3);
}
