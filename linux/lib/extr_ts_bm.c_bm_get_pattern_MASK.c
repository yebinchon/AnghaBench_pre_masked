
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts_config {int dummy; } ;
struct ts_bm {void* pattern; } ;


 struct ts_bm* FUNC_0 (struct ts_config*) ;

__attribute__((used)) static void *FUNC_1(struct ts_config *VAR_0)
{
 struct ts_bm *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->pattern;
}
