
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_9__ {int name; scalar_t__ name_addr; scalar_t__ vtable_addr; } ;
typedef TYPE_2__ class_type_info ;
typedef int buf ;
struct TYPE_8__ {int io; int (* read_at ) (int ,scalar_t__,int *,int) ;} ;
struct TYPE_11__ {TYPE_1__ iob; } ;
struct TYPE_10__ {scalar_t__ word_size; TYPE_4__* anal; int (* read_addr ) (TYPE_4__*,scalar_t__,scalar_t__*) ;} ;
typedef TYPE_3__ RVTableContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__,int *,int) ;

__attribute__((used)) static bool FUNC_6 (RVTableContext *VAR_2, ut64 VAR_3, class_type_info *VAR_4) {
 ut64 VAR_5;
 if (VAR_3 == VAR_1) {
  return 0;
 }
 if (!VAR_2->read_addr (VAR_2->anal, VAR_3, &VAR_5)) {
  return 0;
 }
 VAR_4->vtable_addr = VAR_5;
 if (!VAR_2->read_addr (VAR_2->anal, VAR_3 + VAR_2->word_size, &VAR_5)) {
  return 0;
 }
 VAR_4->name_addr = VAR_5;
 ut8 VAR_6[VAR_0];
 if (!VAR_2->anal->iob.read_at (VAR_2->anal->iob.io, VAR_5, VAR_6, sizeof(VAR_6))) {
  return 0;
 }
 size_t VAR_7 = FUNC_2 ((const char *)VAR_6) + 1;
 VAR_4->name = FUNC_0 (VAR_7);
 if (!VAR_4->name) {
  return 0;
 }
 FUNC_1 (VAR_4->name, VAR_6, VAR_7);
 return 1;
}
