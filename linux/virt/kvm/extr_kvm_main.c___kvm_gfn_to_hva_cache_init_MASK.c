
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int generation; } ;
struct gfn_to_hva_cache {unsigned long gpa; unsigned long len; int hva; int * memslot; int generation; } ;
typedef unsigned long gpa_t ;
typedef scalar_t__ gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int * FUNC_0 (struct kvm_memslots*,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct kvm_memslots *VAR_4,
           struct gfn_to_hva_cache *VAR_5,
           gpa_t VAR_6, unsigned long VAR_7)
{
 int VAR_8 = FUNC_3(VAR_6);
 gfn_t VAR_9 = VAR_6 >> VAR_3;
 gfn_t VAR_10 = (VAR_6 + VAR_7 - 1) >> VAR_3;
 gfn_t VAR_11 = VAR_10 - VAR_9 + 1;
 gfn_t VAR_12;
 int VAR_13 = VAR_9 <= VAR_10 ? 0 : -VAR_1;

 VAR_5->gpa = VAR_6;
 VAR_5->generation = VAR_4->generation;
 VAR_5->len = VAR_7;
 VAR_5->hva = VAR_2;





 while (!VAR_13 && VAR_9 <= VAR_10) {
  VAR_5->memslot = FUNC_0(VAR_4, VAR_9);
  VAR_5->hva = FUNC_1(VAR_5->memslot, VAR_9,
        &VAR_12);
  if (FUNC_2(VAR_5->hva))
   VAR_13 = -VAR_0;
  VAR_9 += VAR_12;
 }


 if (!VAR_13 && VAR_11 == 1)
  VAR_5->hva += VAR_8;
 else
  VAR_5->memslot = ((void*)0);

 return VAR_13;
}
