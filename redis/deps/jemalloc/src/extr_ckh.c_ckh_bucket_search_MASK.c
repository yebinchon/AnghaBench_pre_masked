
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * key; } ;
typedef TYPE_1__ ckhc_t ;
struct TYPE_5__ {scalar_t__ (* keycomp ) (void const*,int *) ;TYPE_1__* tab; } ;
typedef TYPE_2__ ckh_t ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void const*,int *) ;

__attribute__((used)) static size_t
FUNC_2(ckh_t *VAR_2, size_t VAR_3, const void *VAR_4) {
 ckhc_t *VAR_5;
 unsigned VAR_6;

 for (VAR_6 = 0; VAR_6 < (FUNC_0(1) << VAR_0); VAR_6++) {
  VAR_5 = &VAR_2->tab[(VAR_3 << VAR_0) + VAR_6];
  if (VAR_5->key != ((void*)0) && VAR_2->keycomp(VAR_4, VAR_5->key)) {
   return (VAR_3 << VAR_0) + VAR_6;
  }
 }

 return VAR_1;
}
