
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
struct cdb_make {int b; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,int ,int ) ;

int FUNC_2(struct cdb_make *VAR_1, ut32 VAR_2, ut32 VAR_3) {
 ut8 VAR_4[VAR_0];
 if (!FUNC_1 (VAR_4, VAR_2, VAR_3)) {
  return 0;
 }
 return FUNC_0 (&VAR_1->b, (const char *)VAR_4, VAR_0);
}
