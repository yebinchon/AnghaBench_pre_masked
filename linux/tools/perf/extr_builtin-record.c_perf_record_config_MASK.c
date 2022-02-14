
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_cblocks; } ;
struct record {int no_buildid_cache; int no_buildid; TYPE_1__ opts; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,char const*,void*) ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,int *,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 struct record *VAR_4 = VAR_3;

 if (!FUNC_1(VAR_1, "record.build-id")) {
  if (!FUNC_1(VAR_2, "cache"))
   VAR_4->no_buildid_cache = 0;
  else if (!FUNC_1(VAR_2, "no-cache"))
   VAR_4->no_buildid_cache = 1;
  else if (!FUNC_1(VAR_2, "skip"))
   VAR_4->no_buildid = 1;
  else
   return -1;
  return 0;
 }
 if (!FUNC_1(VAR_1, "record.call-graph")) {
  VAR_1 = "call-graph.record-mode";
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 }
 return 0;
}
