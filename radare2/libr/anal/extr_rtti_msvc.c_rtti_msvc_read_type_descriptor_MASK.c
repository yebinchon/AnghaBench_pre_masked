
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_9__ {scalar_t__ name; int spare; int vtable_addr; } ;
typedef TYPE_2__ rtti_type_descriptor ;
typedef int buf ;
struct TYPE_8__ {int io; int (* read_at ) (int ,scalar_t__,char*,int) ;} ;
struct TYPE_11__ {TYPE_1__ iob; } ;
struct TYPE_10__ {int word_size; TYPE_4__* anal; int (* read_addr ) (TYPE_4__*,scalar_t__,int *) ;} ;
typedef TYPE_3__ RVTableContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__,char*,size_t) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int *) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,int *) ;
 int FUNC_4 (int ,scalar_t__,char*,int) ;
 int FUNC_5 (int ,scalar_t__,char*,int) ;

__attribute__((used)) static bool FUNC_6(RVTableContext *VAR_2, ut64 VAR_3, rtti_type_descriptor *VAR_4) {
 if (VAR_3 == VAR_1) {
  return 0;
 }

 if (!VAR_2->read_addr (VAR_2->anal, VAR_3, &VAR_4->vtable_addr)) {
  return 0;
 }
 if (!VAR_2->read_addr (VAR_2->anal, VAR_3 + VAR_2->word_size, &VAR_4->spare)) {
  return 0;
 }

 ut64 VAR_5 = VAR_3 + 2 * VAR_2->word_size;
 ut8 VAR_6[VAR_0];
 ut64 VAR_7 = 0;
 size_t VAR_8 = 0;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 while (1) {
  VAR_2->anal->iob.read_at (VAR_2->anal->iob.io, VAR_5 + VAR_7, VAR_6, sizeof (VAR_6));
  int VAR_11;
  for (VAR_11=0; VAR_11<sizeof (VAR_6); VAR_11++) {
   if (VAR_6[VAR_11] == '\0') {
    VAR_9 = 1;
    break;
   }
   if (VAR_6[VAR_11] == 0xff) {
    VAR_10 = 1;
    break;
   }
   VAR_8++;
  }
  if (VAR_9 || VAR_10) {
   break;
  }
  VAR_7 += sizeof (VAR_6);
 }

 if (VAR_10) {
  return 0;
 }

 VAR_4->name = FUNC_0 (VAR_8 + 1);
 if (!VAR_4->name) {
  return 0;
 }

 if (VAR_7 == 0) {
  FUNC_1 (VAR_4->name, VAR_6, VAR_8 + 1);
 } else {
  VAR_2->anal->iob.read_at (VAR_2->anal->iob.io, VAR_5,
         (ut8 *)VAR_4->name, (int) (VAR_8 + 1));
 }

 return 1;
}
