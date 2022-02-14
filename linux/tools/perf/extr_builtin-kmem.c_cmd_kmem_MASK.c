
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int env; } ;
struct perf_session {TYPE_2__ header; int evlist; } ;
struct perf_data {int path; int force; int mode; } ;
struct option {int dummy; } ;
struct evsel {TYPE_1__* tp_format; } ;
struct TYPE_6__ {int use_callchain; } ;
struct TYPE_4__ {int tep; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_session*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct option const FUNC_1 (float,char*,int *,char*) ;
 struct option const FUNC_2 (char,char*,int *,char*,char*,int ) ;
 struct option const FUNC_3 (int ,char*,int *,int *,char*,int ) ;
 struct option const FUNC_4 () ;
 struct option const FUNC_5 (char,char*,int *,char*) ;
 struct option const FUNC_6 (char,char*,int *,char*,char*) ;
 int VAR_3 ;
 int FUNC_7 (struct perf_session*) ;
 int FUNC_8 (struct perf_session*) ;
 int FUNC_9 (int,char const**) ;
 scalar_t__ FUNC_10 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct perf_session* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_12 (int,char const**,struct option const*,char const* const*,char const**,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_13 (int ,int *) ;
 struct evsel* FUNC_14 (int ,char*) ;
 int VAR_22 ;
 int FUNC_15 (struct perf_session*) ;
 struct perf_session* FUNC_16 (struct perf_data*,int,int *) ;
 scalar_t__ FUNC_17 (int *,int ) ;
 int FUNC_18 (char const*,...) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int *,char const* const) ;
 int FUNC_21 (int *,char const* const) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_22 (char const*,char*) ;
 int FUNC_23 (char const*,char*,int) ;
 int FUNC_24 (int *) ;
 TYPE_3__ VAR_27 ;
 int FUNC_25 (int ) ;
 int VAR_28 ;
 int FUNC_26 (char const**,struct option const*) ;
 int VAR_29 ;

int FUNC_27(int VAR_30, const char **VAR_31)
{
 const char * const VAR_32 = "frag,hit,bytes";
 const char * const VAR_33 = "bytes,hit";
 struct perf_data VAR_34 = {
  .mode = VAR_3,
 };
 const struct option VAR_35[] = {
 FUNC_6('i', "input", &VAR_4, "file", "input file name"),
 FUNC_5('v', "verbose", &VAR_29,
      "be more verbose (show symbol address, etc)"),
 FUNC_3(0, "caller", ((void*)0), ((void*)0),
      "show per-callsite statistics", VAR_17),
 FUNC_3(0, "alloc", ((void*)0), ((void*)0),
      "show per-allocation statistics", VAR_16),
 FUNC_2('s', "sort", ((void*)0), "key[,key2...]",
       "sort by keys: ptr, callsite, bytes, hit, pingpong, frag, "
       "page, order, migtype, gfp", VAR_21),
 FUNC_2('l', "line", ((void*)0), "num", "show n lines", VAR_18),
 FUNC_1(0, "raw-ip", &VAR_24, "show raw ip instead of symbol"),
 FUNC_1('f', "force", &VAR_34.force, "don't complain, do it"),
 FUNC_3(0, "slab", ((void*)0), ((void*)0), "Analyze slab allocator",
      VAR_20),
 FUNC_3(0, "page", ((void*)0), ((void*)0), "Analyze page allocator",
      VAR_19),
 FUNC_1(0, "live", &VAR_11, "Show live page stat"),
 FUNC_6(0, "time", &VAR_28, "str",
     "Time span of interest (start,stop)"),
 FUNC_4()
 };
 const char *const VAR_36[] = { "record", "stat", ((void*)0) };
 const char *VAR_37[] = {
  ((void*)0),
  ((void*)0)
 };
 struct perf_session *VAR_38;
 static const char VAR_39[] = "No %s allocation events found.  Have you run 'perf kmem record --%s'?\n";
 int VAR_40 = FUNC_13(VAR_5, ((void*)0));

 if (VAR_40)
  return VAR_40;

 VAR_30 = FUNC_12(VAR_30, VAR_31, VAR_35,
     VAR_36, VAR_37, 0);

 if (!VAR_30)
  FUNC_26(VAR_37, VAR_35);

 if (VAR_10 == 0 && VAR_7 == 0) {
  if (VAR_6 == VAR_1)
   VAR_10 = 1;
  else
   VAR_7 = 1;
 }

 if (!FUNC_23(VAR_31[0], "rec", 3)) {
  FUNC_24(((void*)0));
  return FUNC_9(VAR_30, VAR_31);
 }

 VAR_34.path = VAR_4;

 VAR_9 = VAR_38 = FUNC_16(&VAR_34, 0, &VAR_22);
 if (FUNC_0(VAR_38))
  return FUNC_7(VAR_38);

 VAR_40 = -1;

 if (VAR_10) {
  if (!FUNC_14(VAR_38->evlist,
         "kmem:kmalloc")) {
   FUNC_18(VAR_39, "slab", "slab");
   goto out_delete;
  }
 }

 if (VAR_7) {
  struct evsel *VAR_41;

  VAR_41 = FUNC_14(VAR_38->evlist,
            "kmem:mm_page_alloc");
  if (VAR_41 == ((void*)0)) {
   FUNC_18(VAR_39, "page", "page");
   goto out_delete;
  }

  VAR_8 = FUNC_25(VAR_41->tp_format->tep);
  VAR_27.use_callchain = 1;
 }

 FUNC_24(&VAR_38->header.env);

 if (FUNC_17(&VAR_23, VAR_28) != 0) {
  FUNC_18("Invalid time string\n");
  VAR_40 = -VAR_0;
  goto out_delete;
 }

 if (!FUNC_22(VAR_31[0], "stat")) {
  FUNC_19(VAR_2, "");

  if (FUNC_10())
   goto out_delete;

  if (FUNC_11(&VAR_26))
   FUNC_21(&VAR_26, VAR_32);
  if (FUNC_11(&VAR_25))
   FUNC_21(&VAR_25, VAR_32);
  if (FUNC_11(&VAR_14))
   FUNC_20(&VAR_14, VAR_33);
  if (FUNC_11(&VAR_12))
   FUNC_20(&VAR_12, VAR_33);

  if (VAR_7) {
   FUNC_20(&VAR_13,
        "page,order,migtype,gfp");
   FUNC_20(&VAR_15,
        "callsite,order,migtype,gfp");
  }
  VAR_40 = FUNC_8(VAR_38);
 } else
  FUNC_26(VAR_37, VAR_35);

out_delete:
 FUNC_15(VAR_38);

 return VAR_40;
}
