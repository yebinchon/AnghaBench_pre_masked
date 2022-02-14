
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_dist {scalar_t__ vgic_model; int enabled; int lpi_list_count; int nr_spis; } ;
struct seq_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_1, struct vgic_dist *VAR_2)
{
 bool VAR_3 = VAR_2->vgic_model == VAR_0;

 FUNC_0(VAR_1, "Distributor\n");
 FUNC_0(VAR_1, "===========\n");
 FUNC_0(VAR_1, "vgic_model:\t%s\n", VAR_3 ? "GICv3" : "GICv2");
 FUNC_0(VAR_1, "nr_spis:\t%d\n", VAR_2->nr_spis);
 if (VAR_3)
  FUNC_0(VAR_1, "nr_lpis:\t%d\n", VAR_2->lpi_list_count);
 FUNC_0(VAR_1, "enabled:\t%d\n", VAR_2->enabled);
 FUNC_0(VAR_1, "\n");

 FUNC_0(VAR_1, "P=pending_latch, L=line_level, A=active\n");
 FUNC_0(VAR_1, "E=enabled, H=hw, C=config (level=1, edge=0)\n");
 FUNC_0(VAR_1, "G=group\n");
}
