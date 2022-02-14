
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_9__ {scalar_t__ word_size; int db; TYPE_3__* _selrefs; TYPE_2__* core; TYPE_1__* _const; } ;
struct TYPE_8__ {scalar_t__ vsize; scalar_t__ vaddr; } ;
struct TYPE_7__ {int io; } ;
struct TYPE_6__ {scalar_t__ vsize; scalar_t__ vaddr; } ;
typedef TYPE_4__ RCoreObjc ;


 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_6(RCoreObjc *VAR_0) {
 ut64 VAR_1;
 if (!VAR_0->_const || !VAR_0->_selrefs) {
  return 0;
 }

 ut8 *VAR_2 = FUNC_1 (1, VAR_0->_const->vsize);
 if (!VAR_2) {
  return 0;
 }
 (void)FUNC_3 (VAR_0->core->io, VAR_0->_const->vaddr, VAR_2, VAR_0->_const->vsize);
 for (VAR_1 = 0; VAR_1 + 8 < VAR_0->_const->vsize; VAR_1 += VAR_0->word_size) {
  ut64 VAR_3 = VAR_0->_const->vaddr + VAR_1;
  ut64 VAR_4 = FUNC_4 (VAR_2 + VAR_1);
  if (!VAR_4) {
   continue;
  }
  FUNC_5 (VAR_0->db, FUNC_0 (VAR_3), VAR_4, 0);
 }
 FUNC_2 (VAR_2);

 VAR_2 = FUNC_1 (1, VAR_0->_selrefs->vsize);
 if (!VAR_2) {
  return 0;
 }
 FUNC_3 (VAR_0->core->io, VAR_0->_selrefs->vaddr, VAR_2, VAR_0->_selrefs->vsize);
 for (VAR_1 = 0; VAR_1 + 8 < VAR_0->_selrefs->vsize; VAR_1 += VAR_0->word_size) {
  ut64 VAR_5 = VAR_0->_selrefs->vaddr + VAR_1;
  ut64 VAR_6 = FUNC_4 (VAR_2 + VAR_1);
  if (!VAR_6) {
   continue;
  }
  FUNC_5 (VAR_0->db, FUNC_0 (VAR_6), VAR_5, 0);
 }
 FUNC_2 (VAR_2);
 return 1;
}
