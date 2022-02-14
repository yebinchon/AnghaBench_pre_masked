
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union kvm_mmu_page_role {int word; size_t access; scalar_t__ smm; scalar_t__ smap_and_not_wp; scalar_t__ smep_and_not_wp; scalar_t__ cr0_wp; scalar_t__ nxe; scalar_t__ cr4_pae; scalar_t__ invalid; scalar_t__ direct; int quadrant; int level; } ;
struct trace_seq {int dummy; } ;
struct tep_record {int dummy; } ;
struct tep_event {int tep; } ;


 scalar_t__ FUNC_0 (struct trace_seq*,struct tep_event*,char*,struct tep_record*,unsigned long long*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct trace_seq*,char*,struct tep_event*,char*,struct tep_record*,int) ;
 int FUNC_4 (struct trace_seq*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct trace_seq *VAR_0, struct tep_record *VAR_1,
         struct tep_event *VAR_2, void *VAR_3)
{
 unsigned long long VAR_4;
 static const char *VAR_5[] = {
  "---", "--x", "w--", "w-x", "-u-", "-ux", "wu-", "wux"
 };
 union kvm_mmu_page_role VAR_6;

 if (FUNC_0(VAR_0, VAR_2, "role", VAR_1, &VAR_4, 1) < 0)
  return -1;

 VAR_6.word = (int)VAR_4;





 if (FUNC_1(VAR_2->tep) ==
     FUNC_2(VAR_2->tep)) {

  FUNC_4(VAR_0, "%u q%u%s %s%s %spae %snxe %swp%s%s%s",
     VAR_6.level,
     VAR_6.quadrant,
     VAR_6.direct ? " direct" : "",
     VAR_5[VAR_6.access],
     VAR_6.invalid ? " invalid" : "",
     VAR_6.cr4_pae ? "" : "!",
     VAR_6.nxe ? "" : "!",
     VAR_6.cr0_wp ? "" : "!",
     VAR_6.smep_and_not_wp ? " smep" : "",
     VAR_6.smap_and_not_wp ? " smap" : "",
     VAR_6.smm ? " smm" : "");
 } else
  FUNC_4(VAR_0, "WORD: %08x", VAR_6.word);

 FUNC_3(VAR_0, " root %u ", VAR_2,
       "root_count", VAR_1, 1);

 if (FUNC_0(VAR_0, VAR_2, "unsync", VAR_1, &VAR_4, 1) < 0)
  return -1;

 FUNC_4(VAR_0, "%s%c", VAR_4 ? "unsync" : "sync", 0);
 return 0;
}
