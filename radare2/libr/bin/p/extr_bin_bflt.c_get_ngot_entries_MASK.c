
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct r_bin_bflt_obj {int size; int b; TYPE_1__* hdr; } ;
struct TYPE_2__ {int data_end; int data_start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct r_bin_bflt_obj *VAR_0) {
 ut32 VAR_1 = VAR_0->hdr->data_end - VAR_0->hdr->data_start;
 int VAR_2 = 0, VAR_3 = 0;
 if (VAR_1 > VAR_0->size) {
  return 0;
 }
 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < VAR_1; VAR_2 += 4, VAR_3++) {
  ut32 VAR_4, VAR_5 = VAR_0->hdr->data_start;
  if (VAR_5 + VAR_2 + sizeof (ut32) > VAR_0->size ||
      VAR_5 + VAR_2 + sizeof (ut32) < VAR_5) {
   return 0;
  }
  int VAR_6 = FUNC_1 (VAR_0->b, VAR_5 + VAR_2, (ut8 *) &VAR_4,
   sizeof (ut32));
  if (VAR_6 != sizeof (ut32)) {
   return 0;
  }
  if (!FUNC_0 (VAR_4)) {
   break;
  }
 }
 return VAR_3;
}
