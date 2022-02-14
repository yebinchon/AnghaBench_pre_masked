
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int system_wide; scalar_t__ uid; scalar_t__ pid; scalar_t__ tid; } ;
struct TYPE_22__ {size_t affinity; scalar_t__ comp_level; int tail_synthesize; int no_inherit; int ignore_missing_thread; scalar_t__ nr_cblocks; scalar_t__ mmap_flush; scalar_t__ full_auxtrace; TYPE_3__ target; int no_inherit_set; int no_samples; scalar_t__ overwrite; scalar_t__ record_switch_events; } ;
struct TYPE_18__ {scalar_t__ enabled; int filenames; scalar_t__ num_files; scalar_t__ time; } ;
struct record {int no_buildid; int no_buildid_cache; int buildid_all; int itr; TYPE_9__* evlist; TYPE_8__ opts; scalar_t__ no_buildid_cache_set; scalar_t__ no_buildid_set; TYPE_1__ switch_output; int affinity_mask; } ;
typedef int errbuf ;
struct TYPE_19__ {scalar_t__ nr_entries; } ;
struct TYPE_23__ {TYPE_2__ core; } ;
struct TYPE_21__ {int allow_aliases; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct record*,int,char const**) ;
 scalar_t__ FUNC_2 (TYPE_9__*,int) ;
 scalar_t__* VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_9__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*,int,char*,int) ;
 int FUNC_8 (int,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 () ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (TYPE_9__*) ;
 TYPE_9__* FUNC_11 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (int,char const**,int ,int ,int ) ;
 int FUNC_13 (int ,int ,char*,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,struct record*) ;
 scalar_t__ FUNC_16 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_17 () ;
 int VAR_15 ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (char*,...) ;
 scalar_t__ VAR_16 ;
 struct record VAR_17 ;
 int FUNC_20 (struct record*) ;
 int VAR_18 ;
 scalar_t__ FUNC_21 (TYPE_8__*) ;
 int VAR_19 ;
 int FUNC_22 (char,char*,int) ;
 int FUNC_23 (int ,char*) ;
 int FUNC_24 (int ,int ) ;
 scalar_t__ FUNC_25 (struct record*) ;
 int FUNC_26 () ;
 int FUNC_27 (int *) ;
 TYPE_7__ VAR_20 ;
 scalar_t__ FUNC_28 (TYPE_3__*) ;
 int FUNC_29 (TYPE_3__*) ;
 int FUNC_30 (TYPE_3__*,int,char*,int) ;
 int FUNC_31 (TYPE_3__*) ;
 int FUNC_32 (char*,...) ;
 int FUNC_33 (char*,char*) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (int ,int ,char*) ;

int FUNC_36(int VAR_21, const char **VAR_22)
{
 int VAR_23;
 struct record *VAR_24 = &VAR_17;
 char VAR_25[VAR_0];

 FUNC_23(VAR_3, "");



 FUNC_0(VAR_18, '\0', "clang-path", "NO_LIBBPF=1", 1);
 FUNC_0(VAR_18, '\0', "clang-opt", "NO_LIBBPF=1", 1);
 FUNC_0(VAR_18, '\0', "vmlinux", "NO_DWARF=1", 1);




 FUNC_0(&VAR_24->affinity_mask);
 VAR_24->opts.affinity = VAR_5;

 VAR_24->evlist = FUNC_11();
 if (VAR_24->evlist == ((void*)0))
  return -VAR_2;

 VAR_23 = FUNC_15(VAR_15, VAR_24);
 if (VAR_23)
  return VAR_23;

 VAR_21 = FUNC_12(VAR_21, VAR_22, VAR_18, VAR_19,
       VAR_4);
 if (VAR_16)
  FUNC_17();


 if (!VAR_21 && FUNC_28(&VAR_24->opts.target))
  VAR_24->opts.target.system_wide = 1;

 if (VAR_14 && !VAR_24->opts.target.system_wide) {
  FUNC_35(VAR_19, VAR_18,
   "cgroup monitoring only available in system-wide mode");

 }

 if (VAR_24->opts.comp_level != 0) {
  FUNC_18("Compression enabled, disabling build id collection at the end of the session.\n");
  VAR_24->no_buildid = 1;
 }

 if (VAR_24->opts.record_switch_events &&
     !FUNC_14()) {
  FUNC_32("kernel does not support recording context switch events\n");
  FUNC_13(VAR_19, VAR_18, "switch-events", 0);
  return -VAR_1;
 }

 if (FUNC_25(VAR_24)) {
  FUNC_13(VAR_19, VAR_18, "switch-output", 0);
  return -VAR_1;
 }

 if (VAR_24->switch_output.time) {
  FUNC_24(VAR_6, VAR_9);
  FUNC_3(VAR_24->switch_output.time);
 }

 if (VAR_24->switch_output.num_files) {
  VAR_24->switch_output.filenames = FUNC_8(sizeof(char *),
            VAR_24->switch_output.num_files);
  if (!VAR_24->switch_output.filenames)
   return -VAR_1;
 }





 VAR_20.allow_aliases = 1;

 FUNC_27(((void*)0));

 VAR_23 = FUNC_20(VAR_24);
 if (VAR_23)
  goto out;

 if (VAR_11)
  goto out;

 VAR_23 = FUNC_6(VAR_24->evlist);
 if (VAR_23) {
  FUNC_7(VAR_24->evlist, VAR_23, VAR_25, sizeof(VAR_25));
  FUNC_19("ERROR: Setup BPF stdout failed: %s\n",
    VAR_25);
  goto out;
 }

 VAR_23 = -VAR_2;

 if (VAR_24->no_buildid_cache || VAR_24->no_buildid) {
  FUNC_9();
 } else if (VAR_24->switch_output.enabled) {
  bool VAR_26 = 1;

  if (VAR_24->no_buildid_set && !VAR_24->no_buildid)
   VAR_26 = 0;
  if (VAR_24->no_buildid_cache_set && !VAR_24->no_buildid_cache)
   VAR_26 = 0;
  if (VAR_26) {
   VAR_24->no_buildid = 1;
   VAR_24->no_buildid_cache = 1;
   FUNC_9();
  }
 }

 if (VAR_17.opts.overwrite)
  VAR_17.opts.tail_synthesize = 1;

 if (VAR_24->evlist->core.nr_entries == 0 &&
     FUNC_2(VAR_24->evlist, !VAR_17.opts.no_samples) < 0) {
  FUNC_19("Not enough memory for event selector list\n");
  goto out;
 }

 if (VAR_24->opts.target.tid && !VAR_24->opts.no_inherit_set)
  VAR_24->opts.no_inherit = 1;

 VAR_23 = FUNC_31(&VAR_24->opts.target);
 if (VAR_23) {
  FUNC_30(&VAR_24->opts.target, VAR_23, VAR_25, VAR_0);
  FUNC_33("%s\n", VAR_25);
 }

 VAR_23 = FUNC_29(&VAR_24->opts.target);
 if (VAR_23) {
  int VAR_27 = VAR_12;

  FUNC_30(&VAR_24->opts.target, VAR_23, VAR_25, VAR_0);
  FUNC_32("%s", VAR_25);

  VAR_23 = -VAR_27;
  goto out;
 }


 VAR_24->opts.ignore_missing_thread = VAR_24->opts.target.uid != VAR_7 || VAR_24->opts.target.pid;

 VAR_23 = -VAR_2;
 if (FUNC_16(VAR_24->evlist, &VAR_24->opts.target) < 0)
  FUNC_34(VAR_19, VAR_18);

 VAR_23 = FUNC_5(VAR_24->itr, VAR_24->evlist, &VAR_24->opts);
 if (VAR_23)
  goto out;






 if (VAR_24->opts.full_auxtrace)
  VAR_24->buildid_all = 1;

 if (FUNC_21(&VAR_24->opts)) {
  VAR_23 = -VAR_1;
  goto out;
 }

 if (VAR_24->opts.nr_cblocks > VAR_13)
  VAR_24->opts.nr_cblocks = VAR_13;
 FUNC_18("nr_cblocks: %d\n", VAR_24->opts.nr_cblocks);

 FUNC_18("affinity: %s\n", VAR_8[VAR_24->opts.affinity]);
 FUNC_18("mmap flush: %d\n", VAR_24->opts.mmap_flush);

 if (VAR_24->opts.comp_level > VAR_10)
  VAR_24->opts.comp_level = VAR_10;
 FUNC_18("comp level: %d\n", VAR_24->opts.comp_level);

 VAR_23 = FUNC_1(&VAR_17, VAR_21, VAR_22);
out:
 FUNC_10(VAR_24->evlist);
 FUNC_26();
 FUNC_4(VAR_24->itr);
 return VAR_23;
}
