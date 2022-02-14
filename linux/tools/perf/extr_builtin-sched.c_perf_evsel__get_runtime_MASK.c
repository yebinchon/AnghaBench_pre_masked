
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel_runtime {int dummy; } ;
struct evsel {struct evsel_runtime* priv; } ;


 struct evsel_runtime* FUNC_0 (int) ;

__attribute__((used)) static struct evsel_runtime *FUNC_1(struct evsel *VAR_0)
{
 struct evsel_runtime *VAR_1 = VAR_0->priv;

 if (VAR_1 == ((void*)0)) {
  VAR_1 = FUNC_0(sizeof(struct evsel_runtime));
  VAR_0->priv = VAR_1;
 }

 return VAR_1;
}
