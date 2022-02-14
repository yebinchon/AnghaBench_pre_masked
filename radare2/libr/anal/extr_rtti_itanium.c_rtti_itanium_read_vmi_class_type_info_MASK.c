
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_15__ {int vmi_base_count; TYPE_12__* vmi_bases; scalar_t__ vmi_flags; int name; scalar_t__ name_addr; scalar_t__ vtable_addr; } ;
typedef TYPE_2__ vmi_class_type_info ;
typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int buf ;
typedef int base_class_type_info ;
struct TYPE_14__ {int io; int (* read_at ) (int ,scalar_t__,int *,int) ;} ;
struct TYPE_17__ {TYPE_1__ iob; } ;
struct TYPE_16__ {scalar_t__ word_size; TYPE_4__* anal; int (* read_addr ) (TYPE_4__*,scalar_t__,scalar_t__*) ;} ;
struct TYPE_13__ {scalar_t__ flags; scalar_t__ base_class_addr; } ;
typedef TYPE_3__ RVTableContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_12__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ,int *,size_t) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__,int *,int) ;
 int FUNC_8 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 int FUNC_9 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 int FUNC_10 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 int FUNC_11 (TYPE_4__*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static bool FUNC_12 (RVTableContext *VAR_2, ut64 VAR_3, vmi_class_type_info *VAR_4) {
 ut64 VAR_5;
 if (VAR_3 == VAR_1) {
  return 0;
 }
 if (!VAR_2->read_addr (VAR_2->anal, VAR_3, &VAR_5)) {
  return 0;
 }
 VAR_4->vtable_addr = VAR_5;
 VAR_3 += VAR_2->word_size;
 if (!VAR_2->read_addr (VAR_2->anal, VAR_3, &VAR_5)) {
  return 0;
 }
 VAR_4->name_addr = VAR_5;
 ut8 VAR_6[VAR_0];
 if (!VAR_2->anal->iob.read_at (VAR_2->anal->iob.io, VAR_5, VAR_6, sizeof(VAR_6))) {
  return 0;
 }
 size_t VAR_7 = FUNC_4 ((const char *)VAR_6) + 1;
 VAR_4->name = FUNC_2 (VAR_7);
 if (!VAR_4->name) {
  return 0;
 }
 FUNC_3 (VAR_4->name, VAR_6, VAR_7);
 VAR_3 += VAR_2->word_size;
 if (!VAR_2->read_addr (VAR_2->anal, VAR_3, &VAR_5)) {
  return 0;
 }
 VAR_4->vmi_flags = VAR_5;
 VAR_3 += 0x4;
 if (!VAR_2->read_addr (VAR_2->anal, VAR_3, &VAR_5)) {
  return 0;
 }
 if (VAR_5 < 1 || VAR_5 > 0xfffff) {
  FUNC_1 ("Error reading vmi_base_count\n");
  return 0;
 }
 VAR_4->vmi_base_count = VAR_5;
 VAR_4->vmi_bases = FUNC_0 (sizeof (base_class_type_info), VAR_4->vmi_base_count);
 if (!VAR_4->vmi_bases) {
  return 0;
 }
 ut64 VAR_8 = VAR_3 + 0x4;

 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_4->vmi_base_count; VAR_9++) {
  if (!VAR_2->read_addr (VAR_2->anal, VAR_8, &VAR_5)) {
   return 0;
  }
  VAR_4->vmi_bases[VAR_9].base_class_addr = VAR_5;
  VAR_8 += VAR_2->word_size;
  if (!VAR_2->read_addr (VAR_2->anal, VAR_8, &VAR_5)) {
   return 0;
  }
  VAR_4->vmi_bases[VAR_9].flags = VAR_5;
  VAR_8 += VAR_2->word_size;
 }
 return 1;
}
