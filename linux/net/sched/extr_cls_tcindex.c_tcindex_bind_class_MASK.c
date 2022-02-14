
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ classid; unsigned long class; } ;
struct tcindex_filter_result {TYPE_1__ res; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, u32 VAR_1, unsigned long VAR_2)
{
 struct tcindex_filter_result *VAR_3 = VAR_0;

 if (VAR_3 && VAR_3->res.classid == VAR_1)
  VAR_3->res.class = VAR_2;
}
