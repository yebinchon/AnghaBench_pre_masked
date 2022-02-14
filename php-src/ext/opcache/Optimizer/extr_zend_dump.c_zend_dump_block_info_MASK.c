
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* predecessors; TYPE_2__* blocks; } ;
typedef TYPE_1__ zend_cfg ;
struct TYPE_5__ {int flags; scalar_t__ len; int start; int predecessors_count; int predecessor_offset; scalar_t__ successors_count; int* successors; int idom; int level; int loop_header; int children; int next_child; } ;
typedef TYPE_2__ zend_basic_block ;
typedef int uint32_t ;


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
 int FUNC_0 (int ,char*,...) ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_1(const zend_cfg *VAR_16, int VAR_17, uint32_t VAR_18)
{
 zend_basic_block *VAR_19 = VAR_16->blocks + VAR_17;

 FUNC_0(VAR_15, "BB%d:", VAR_17);
 if (VAR_19->flags & VAR_10) {
  FUNC_0(VAR_15, " start");
 }
 if (VAR_19->flags & VAR_9) {
  FUNC_0(VAR_15, " recv");
 }
 if (VAR_19->flags & VAR_5) {
  FUNC_0(VAR_15, " follow");
 }
 if (VAR_19->flags & VAR_11) {
  FUNC_0(VAR_15, " target");
 }
 if (VAR_19->flags & VAR_2) {
  FUNC_0(VAR_15, " exit");
 }
 if (VAR_19->flags & (VAR_1|VAR_9)) {
  FUNC_0(VAR_15, " entry");
 }
 if (VAR_19->flags & VAR_12) {
  FUNC_0(VAR_15, " try");
 }
 if (VAR_19->flags & VAR_0) {
  FUNC_0(VAR_15, " catch");
 }
 if (VAR_19->flags & VAR_3) {
  FUNC_0(VAR_15, " finally");
 }
 if (VAR_19->flags & VAR_4) {
  FUNC_0(VAR_15, " finally_end");
 }
 if (!(VAR_18 & VAR_14) && !(VAR_19->flags & VAR_8)) {
  FUNC_0(VAR_15, " unreachable");
 }
 if (VAR_19->flags & VAR_13) {
  FUNC_0(VAR_15, " unreachable_free");
 }
 if (VAR_19->flags & VAR_7) {
  FUNC_0(VAR_15, " loop_header");
 }
 if (VAR_19->flags & VAR_6) {
  FUNC_0(VAR_15, " irreducible");
 }
 if (VAR_19->len != 0) {
  FUNC_0(VAR_15, " lines=[%d-%ld]", VAR_19->start, VAR_19->start + VAR_19->len - 1);
 } else {
  FUNC_0(VAR_15, " empty");
 }
 FUNC_0(VAR_15, "\n");

 if (VAR_19->predecessors_count) {
  int *VAR_20 = VAR_16->predecessors + VAR_19->predecessor_offset;
  int *VAR_21 = VAR_20 + VAR_19->predecessors_count;

  FUNC_0(VAR_15, "    ; from=(BB%d", *VAR_20);
  for (VAR_20++; VAR_20 < VAR_21; VAR_20++) {
   FUNC_0(VAR_15, ", BB%d", *VAR_20);
  }
  FUNC_0(VAR_15, ")\n");
 }

 if (VAR_19->successors_count > 0) {
  int VAR_22;
  FUNC_0(VAR_15, "    ; to=(BB%d", VAR_19->successors[0]);
  for (VAR_22 = 1; VAR_22 < VAR_19->successors_count; VAR_22++) {
   FUNC_0(VAR_15, ", BB%d", VAR_19->successors[VAR_22]);
  }
  FUNC_0(VAR_15, ")\n");
 }

 if (VAR_19->idom >= 0) {
  FUNC_0(VAR_15, "    ; idom=BB%d\n", VAR_19->idom);
 }
 if (VAR_19->level >= 0) {
  FUNC_0(VAR_15, "    ; level=%d\n", VAR_19->level);
 }
 if (VAR_19->loop_header >= 0) {
  FUNC_0(VAR_15, "    ; loop_header=%d\n", VAR_19->loop_header);
 }
 if (VAR_19->children >= 0) {
  int VAR_23 = VAR_19->children;
  FUNC_0(VAR_15, "    ; children=(BB%d", VAR_23);
  VAR_23 = VAR_16->blocks[VAR_23].next_child;
  while (VAR_23 >= 0) {
   FUNC_0(VAR_15, ", BB%d", VAR_23);
   VAR_23 = VAR_16->blocks[VAR_23].next_child;
  }
  FUNC_0(VAR_15, ")\n");
 }
}
