
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int unw_word_t ;
typedef int unw_proc_info_t ;
struct TYPE_11__ {int segbase; int table_data; int table_len; } ;
struct TYPE_12__ {TYPE_1__ rti; } ;
struct TYPE_13__ {int start_ip; TYPE_2__ u; int end_ip; int format; } ;
typedef TYPE_3__ unw_dyn_info_t ;
typedef int unw_addr_space_t ;
typedef int u64 ;
struct unwind_info {int machine; } ;
struct table_entry {int dummy; } ;
struct map {int start; int pgoff; int end; TYPE_4__* dso; } ;
typedef int di ;
struct TYPE_14__ {char* name; scalar_t__ symsrc_filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,int,int,char const*,int,int ) ;
 int FUNC_3 (int ,int,TYPE_3__*,int *,int,void*) ;
 int FUNC_4 (int,char*) ;
 struct map* FUNC_5 (int,struct unwind_info*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (TYPE_4__*,int ,int*) ;
 int FUNC_9 (TYPE_4__*,int ,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_10(unw_addr_space_t VAR_2, unw_word_t VAR_3, unw_proc_info_t *VAR_4,
        int VAR_5, void *VAR_6)
{
 struct unwind_info *VAR_7 = VAR_6;
 struct map *VAR_8;
 unw_dyn_info_t VAR_9;
 u64 VAR_10, VAR_11, VAR_12;
 int VAR_13 = -VAR_0;

 VAR_8 = FUNC_5(VAR_3, VAR_7);
 if (!VAR_8 || !VAR_8->dso)
  return -VAR_0;

 FUNC_7("unwind: find_proc_info dso %s\n", VAR_8->dso->name);


 if (!FUNC_9(VAR_8->dso, VAR_7->machine,
           &VAR_10, &VAR_11, &VAR_12)) {
  FUNC_6(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.format = VAR_1;
  VAR_9.start_ip = VAR_8->start;
  VAR_9.end_ip = VAR_8->end;
  VAR_9.u.rti.segbase = VAR_8->start + VAR_11 - VAR_8->pgoff;
  VAR_9.u.rti.table_data = VAR_8->start + VAR_10 - VAR_8->pgoff;
  VAR_9.u.rti.table_len = VAR_12 * sizeof(struct table_entry)
          / sizeof(unw_word_t);
  VAR_13 = FUNC_3(VAR_2, VAR_3, &VAR_9, VAR_4,
      VAR_5, VAR_6);
 }



 if (VAR_13 < 0 &&
     !FUNC_8(VAR_8->dso, VAR_7->machine, &VAR_11)) {
  int VAR_14 = FUNC_0(VAR_8->dso, VAR_7->machine);
  int VAR_15 = FUNC_4(VAR_14, VAR_8->dso->name);
  unw_word_t VAR_16 = VAR_15 ? 0 : VAR_8->start;
  const char *VAR_17;

  if (VAR_14 >= 0)
   FUNC_1(VAR_8->dso);

  VAR_17 = VAR_8->dso->symsrc_filename ?: VAR_8->dso->name;

  FUNC_6(&VAR_9, 0, sizeof(VAR_9));
  if (FUNC_2(0, &VAR_9, VAR_3, VAR_16, VAR_17,
        VAR_8->start, VAR_8->end))
   return FUNC_3(VAR_2, VAR_3, &VAR_9, VAR_4,
        VAR_5, VAR_6);
 }


 return VAR_13;
}
