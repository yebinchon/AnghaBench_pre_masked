
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_6__ {double tv_sec; double tv_usec; } ;
struct TYPE_7__ {int tv_usec; int tv_sec; } ;
struct thread_data {int flags; size_t cpu_id; double tsc; double aperf; double mperf; double* counter; double c1; int smi_count; int irq_count; int x2apic_id; int apic_id; TYPE_1__ tv_delta; TYPE_2__ tv_end; int tv_begin; } ;
struct pkg_data {int gfx_rc6_ms; double pkg_wtd_core_c0; double pkg_any_core_c0; double pkg_any_gfxe_c0; double pkg_both_core_gfxe_c0; double pc2; double pc3; double pc6; double pc7; double pc8; double pc9; double pc10; double cpu_lpi; double sys_lpi; double energy_pkg; double energy_cores; double energy_gfx; double energy_dram; double rapl_pkg_perf_status; double rapl_dram_perf_status; double* counter; int gfx_mhz; int pkg_temp_c; int package_id; } ;
struct msr_counter {scalar_t__ format; int width; scalar_t__ type; struct msr_counter* next; } ;
struct core_data {double c3; double c6; double c7; double mc6_us; double* counter; double core_energy; int core_temp_c; int core_id; } ;
struct TYPE_10__ {struct thread_data threads; } ;
struct TYPE_9__ {int physical_node_id; int die_id; } ;
struct TYPE_8__ {struct msr_counter* pp; struct msr_counter* cp; struct msr_counter* tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 int FUNC_0 (size_t,int ,scalar_t__) ;
 int VAR_49 ;
 int VAR_50 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 int VAR_54 ;
 TYPE_5__ VAR_55 ;
 double VAR_56 ;
 scalar_t__ VAR_57 ;
 int VAR_58 ;
 TYPE_4__* VAR_59 ;
 int VAR_60 ;
 scalar_t__ VAR_61 ;
 char* VAR_62 ;
 double VAR_63 ;
 double VAR_64 ;
 double VAR_65 ;
 double VAR_66 ;
 scalar_t__ VAR_67 ;
 scalar_t__ VAR_68 ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ VAR_69 ;
 TYPE_3__ VAR_70 ;
 int FUNC_3 (TYPE_2__*,int *,struct timeval*) ;
 double VAR_71 ;
 double VAR_72 ;

int FUNC_4(struct thread_data *VAR_73, struct core_data *VAR_74,
 struct pkg_data *VAR_75)
{
 double VAR_76, VAR_77;
 char *VAR_78;
 int VAR_79;
 struct msr_counter *VAR_80;
 char *VAR_81 = "\t";
 int VAR_82 = 0;


 if (VAR_67 && !(VAR_73->flags & VAR_50))
  return 0;


 if (VAR_68 && !(VAR_73->flags & VAR_49))
  return 0;


 if ((VAR_73 != &VAR_55.threads) &&
  (VAR_57 && !FUNC_0(VAR_73->cpu_id, VAR_58, VAR_57)))
  return 0;

 if (FUNC_1(VAR_45)) {

  struct timeval VAR_83;

  FUNC_3(&VAR_73->tv_end, &VAR_73->tv_begin, &VAR_83);
  VAR_62 += FUNC_2(VAR_62, "%5ld\t", VAR_83.tv_sec * 1000000 + VAR_83.tv_usec);
 }


 if (FUNC_1(VAR_42))
  VAR_62 += FUNC_2(VAR_62, "%10ld.%06ld\t", VAR_73->tv_end.tv_sec, VAR_73->tv_end.tv_usec);

 VAR_76 = VAR_73->tv_delta.tv_sec + VAR_73->tv_delta.tv_usec/1000000.0;

 VAR_77 = VAR_73->tsc * VAR_71;


 if (VAR_73 == &VAR_55.threads) {
  if (FUNC_1(VAR_26))
   VAR_62 += FUNC_2(VAR_62, "%s-", (VAR_82++ ? VAR_81 : ""));
  if (FUNC_1(VAR_16))
   VAR_62 += FUNC_2(VAR_62, "%s-", (VAR_82++ ? VAR_81 : ""));
  if (FUNC_1(VAR_24))
   VAR_62 += FUNC_2(VAR_62, "%s-", (VAR_82++ ? VAR_81 : ""));
  if (FUNC_1(VAR_14))
   VAR_62 += FUNC_2(VAR_62, "%s-", (VAR_82++ ? VAR_81 : ""));
  if (FUNC_1(VAR_5))
   VAR_62 += FUNC_2(VAR_62, "%s-", (VAR_82++ ? VAR_81 : ""));
  if (FUNC_1(VAR_0))
   VAR_62 += FUNC_2(VAR_62, "%s-", (VAR_82++ ? VAR_81 : ""));
  if (FUNC_1(VAR_46))
   VAR_62 += FUNC_2(VAR_62, "%s-", (VAR_82++ ? VAR_81 : ""));
 } else {
  if (FUNC_1(VAR_26)) {
   if (VAR_75)
    VAR_62 += FUNC_2(VAR_62, "%s%d", (VAR_82++ ? VAR_81 : ""), VAR_75->package_id);
   else
    VAR_62 += FUNC_2(VAR_62, "%s-", (VAR_82++ ? VAR_81 : ""));
  }
  if (FUNC_1(VAR_16)) {
   if (VAR_74)
    VAR_62 += FUNC_2(VAR_62, "%s%d", (VAR_82++ ? VAR_81 : ""), VAR_59[VAR_73->cpu_id].die_id);
   else
    VAR_62 += FUNC_2(VAR_62, "%s-", (VAR_82++ ? VAR_81 : ""));
  }
  if (FUNC_1(VAR_24)) {
   if (VAR_73)
    VAR_62 += FUNC_2(VAR_62, "%s%d",
      (VAR_82++ ? VAR_81 : ""),
           VAR_59[VAR_73->cpu_id].physical_node_id);
   else
    VAR_62 += FUNC_2(VAR_62, "%s-",
      (VAR_82++ ? VAR_81 : ""));
  }
  if (FUNC_1(VAR_14)) {
   if (VAR_74)
    VAR_62 += FUNC_2(VAR_62, "%s%d", (VAR_82++ ? VAR_81 : ""), VAR_74->core_id);
   else
    VAR_62 += FUNC_2(VAR_62, "%s-", (VAR_82++ ? VAR_81 : ""));
  }
  if (FUNC_1(VAR_5))
   VAR_62 += FUNC_2(VAR_62, "%s%d", (VAR_82++ ? VAR_81 : ""), VAR_73->cpu_id);
  if (FUNC_1(VAR_0))
   VAR_62 += FUNC_2(VAR_62, "%s%d", (VAR_82++ ? VAR_81 : ""), VAR_73->apic_id);
  if (FUNC_1(VAR_46))
   VAR_62 += FUNC_2(VAR_62, "%s%d", (VAR_82++ ? VAR_81 : ""), VAR_73->x2apic_id);
 }

 if (FUNC_1(VAR_2))
  VAR_62 += FUNC_2(VAR_62, "%s%.0f", (VAR_82++ ? VAR_81 : ""),
   1.0 / VAR_72 * VAR_73->aperf / VAR_76);

 if (FUNC_1(VAR_3))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_73->mperf/VAR_77);

 if (FUNC_1(VAR_4)) {
  if (VAR_61)
   VAR_62 += FUNC_2(VAR_62, "%s%.0f", (VAR_82++ ? VAR_81 : ""), VAR_56 / VAR_72 * VAR_73->aperf / VAR_73->mperf);
  else
   VAR_62 += FUNC_2(VAR_62, "%s%.0f", (VAR_82++ ? VAR_81 : ""),
    VAR_77 / VAR_72 * VAR_73->aperf / VAR_73->mperf / VAR_76);
 }

 if (FUNC_1(VAR_43))
  VAR_62 += FUNC_2(VAR_62, "%s%.0f", (VAR_82++ ? VAR_81 : ""), 1.0 * VAR_73->tsc/VAR_72/VAR_76);


 if (FUNC_1(VAR_22)) {
  if (VAR_69)
   VAR_62 += FUNC_2(VAR_62, "%s%8lld", (VAR_82++ ? VAR_81 : ""), VAR_73->irq_count);
  else
   VAR_62 += FUNC_2(VAR_62, "%s%lld", (VAR_82++ ? VAR_81 : ""), VAR_73->irq_count);
 }


 if (FUNC_1(VAR_40))
  VAR_62 += FUNC_2(VAR_62, "%s%d", (VAR_82++ ? VAR_81 : ""), VAR_73->smi_count);


 for (VAR_79 = 0, VAR_80 = VAR_70.tp; VAR_80; VAR_79++, VAR_80 = VAR_80->next) {
  if (VAR_80->format == VAR_53) {
   if (VAR_80->width == 32)
    VAR_62 += FUNC_2(VAR_62, "%s0x%08x", (VAR_82++ ? VAR_81 : ""), (unsigned int) VAR_73->counter[VAR_79]);
   else
    VAR_62 += FUNC_2(VAR_62, "%s0x%016llx", (VAR_82++ ? VAR_81 : ""), VAR_73->counter[VAR_79]);
  } else if (VAR_80->format == VAR_51) {
   if ((VAR_80->type == VAR_47) && VAR_69)
    VAR_62 += FUNC_2(VAR_62, "%s%8lld", (VAR_82++ ? VAR_81 : ""), VAR_73->counter[VAR_79]);
   else
    VAR_62 += FUNC_2(VAR_62, "%s%lld", (VAR_82++ ? VAR_81 : ""), VAR_73->counter[VAR_79]);
  } else if (VAR_80->format == VAR_52) {
   if (VAR_80->type == VAR_48)
    VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), VAR_73->counter[VAR_79]/VAR_76/10000);
   else
    VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_73->counter[VAR_79]/VAR_77);
  }
 }


 if (FUNC_1(VAR_8))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_73->c1/VAR_77);



 if (!(VAR_73->flags & VAR_50))
  goto done;

 if (FUNC_1(VAR_9))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_74->c3/VAR_77);
 if (FUNC_1(VAR_10))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_74->c6/VAR_77);
 if (FUNC_1(VAR_11))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_74->c7/VAR_77);


 if (FUNC_1(VAR_23))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_74->mc6_us / VAR_77);

 if (FUNC_1(VAR_15))
  VAR_62 += FUNC_2(VAR_62, "%s%d", (VAR_82++ ? VAR_81 : ""), VAR_74->core_temp_c);

 for (VAR_79 = 0, VAR_80 = VAR_70.cp; VAR_80; VAR_79++, VAR_80 = VAR_80->next) {
  if (VAR_80->format == VAR_53) {
   if (VAR_80->width == 32)
    VAR_62 += FUNC_2(VAR_62, "%s0x%08x", (VAR_82++ ? VAR_81 : ""), (unsigned int) VAR_74->counter[VAR_79]);
   else
    VAR_62 += FUNC_2(VAR_62, "%s0x%016llx", (VAR_82++ ? VAR_81 : ""), VAR_74->counter[VAR_79]);
  } else if (VAR_80->format == VAR_51) {
   if ((VAR_80->type == VAR_47) && VAR_69)
    VAR_62 += FUNC_2(VAR_62, "%s%8lld", (VAR_82++ ? VAR_81 : ""), VAR_74->counter[VAR_79]);
   else
    VAR_62 += FUNC_2(VAR_62, "%s%lld", (VAR_82++ ? VAR_81 : ""), VAR_74->counter[VAR_79]);
  } else if (VAR_80->format == VAR_52) {
   VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_74->counter[VAR_79]/VAR_77);
  }
 }





 if (VAR_76 < VAR_65)
  VAR_78 = "%s%.2f";
 else
  VAR_78 = "%6.0f**";

 if (FUNC_1(VAR_12) && (VAR_60 & VAR_54))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), VAR_74->core_energy * VAR_64 / VAR_76);
 if (FUNC_1(VAR_13) && (VAR_60 & VAR_54))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), VAR_74->core_energy * VAR_64);


 if (!(VAR_73->flags & VAR_49))
  goto done;


 if (FUNC_1(VAR_27))
  VAR_62 += FUNC_2(VAR_62, "%s%d", (VAR_82++ ? VAR_81 : ""), VAR_75->pkg_temp_c);


 if (FUNC_1(VAR_21)) {
  if (VAR_75->gfx_rc6_ms == -1) {
   VAR_62 += FUNC_2(VAR_62, "%s**.**", (VAR_82++ ? VAR_81 : ""));
  } else {
   VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""),
    VAR_75->gfx_rc6_ms / 10.0 / VAR_76);
  }
 }


 if (FUNC_1(VAR_17))
  VAR_62 += FUNC_2(VAR_62, "%s%d", (VAR_82++ ? VAR_81 : ""), VAR_75->gfx_mhz);


 if (FUNC_1(VAR_44))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pkg_wtd_core_c0/VAR_77);
 if (FUNC_1(VAR_1))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pkg_any_core_c0/VAR_77);
 if (FUNC_1(VAR_20))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pkg_any_gfxe_c0/VAR_77);
 if (FUNC_1(VAR_6))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pkg_both_core_gfxe_c0/VAR_77);

 if (FUNC_1(VAR_31))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pc2/VAR_77);
 if (FUNC_1(VAR_32))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pc3/VAR_77);
 if (FUNC_1(VAR_33))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pc6/VAR_77);
 if (FUNC_1(VAR_34))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pc7/VAR_77);
 if (FUNC_1(VAR_35))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pc8/VAR_77);
 if (FUNC_1(VAR_36))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pc9/VAR_77);
 if (FUNC_1(VAR_30))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->pc10/VAR_77);

 if (FUNC_1(VAR_7))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->cpu_lpi / 1000000.0 / VAR_76);
 if (FUNC_1(VAR_41))
  VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->sys_lpi / 1000000.0 / VAR_76);

 if (FUNC_1(VAR_28))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), VAR_75->energy_pkg * VAR_64 / VAR_76);
 if (FUNC_1(VAR_12) && !(VAR_60 & VAR_54))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), VAR_75->energy_cores * VAR_64 / VAR_76);
 if (FUNC_1(VAR_18))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), VAR_75->energy_gfx * VAR_64 / VAR_76);
 if (FUNC_1(VAR_37))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), VAR_75->energy_dram * VAR_63 / VAR_76);
 if (FUNC_1(VAR_29))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), VAR_75->energy_pkg * VAR_64);
 if (FUNC_1(VAR_13) && !(VAR_60 & VAR_54))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), VAR_75->energy_cores * VAR_64);
 if (FUNC_1(VAR_19))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), VAR_75->energy_gfx * VAR_64);
 if (FUNC_1(VAR_38))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), VAR_75->energy_dram * VAR_63);
 if (FUNC_1(VAR_25))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->rapl_pkg_perf_status * VAR_66 / VAR_76);
 if (FUNC_1(VAR_39))
  VAR_62 += FUNC_2(VAR_62, VAR_78, (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->rapl_dram_perf_status * VAR_66 / VAR_76);

 for (VAR_79 = 0, VAR_80 = VAR_70.pp; VAR_80; VAR_79++, VAR_80 = VAR_80->next) {
  if (VAR_80->format == VAR_53) {
   if (VAR_80->width == 32)
    VAR_62 += FUNC_2(VAR_62, "%s0x%08x", (VAR_82++ ? VAR_81 : ""), (unsigned int) VAR_75->counter[VAR_79]);
   else
    VAR_62 += FUNC_2(VAR_62, "%s0x%016llx", (VAR_82++ ? VAR_81 : ""), VAR_75->counter[VAR_79]);
  } else if (VAR_80->format == VAR_51) {
   if ((VAR_80->type == VAR_47) && VAR_69)
    VAR_62 += FUNC_2(VAR_62, "%s%8lld", (VAR_82++ ? VAR_81 : ""), VAR_75->counter[VAR_79]);
   else
    VAR_62 += FUNC_2(VAR_62, "%s%lld", (VAR_82++ ? VAR_81 : ""), VAR_75->counter[VAR_79]);
  } else if (VAR_80->format == VAR_52) {
   VAR_62 += FUNC_2(VAR_62, "%s%.2f", (VAR_82++ ? VAR_81 : ""), 100.0 * VAR_75->counter[VAR_79]/VAR_77);
  }
 }

done:
 if (*(VAR_62 - 1) != '\n')
  VAR_62 += FUNC_2(VAR_62, "\n");

 return 0;
}
