
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_2__ {int numlibs; } ;
struct r_bin_dyldcache_obj_t {TYPE_1__ hdr; int nlibs; int b; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct r_bin_dyldcache_obj_t* VAR_0) {
 int VAR_1 = FUNC_1 (VAR_0->b, 0, (ut8*)&VAR_0->hdr, "16c4i7l", 1);
 if (VAR_1 == -1) {
  FUNC_0 ("read (cache_header)");
  return 0;
 }
 VAR_0->nlibs = VAR_0->hdr.numlibs;
 return 1;
}
