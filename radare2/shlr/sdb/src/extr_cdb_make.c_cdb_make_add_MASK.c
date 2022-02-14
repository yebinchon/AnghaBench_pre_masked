
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct cdb_make {int b; } ;


 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (struct cdb_make*,int ,int ) ;
 int FUNC_2 (struct cdb_make*,int ,int ,int ) ;
 int FUNC_3 (char const*) ;

int FUNC_4(struct cdb_make *VAR_0, const char *VAR_1, ut32 VAR_2, const char *VAR_3, ut32 VAR_4) {

 VAR_2++;
 VAR_4++;
 if (!FUNC_1 (VAR_0, VAR_2, VAR_4)) {
  return 0;
 }
 if (!FUNC_0 (&VAR_0->b, VAR_1, VAR_2)) {
  return 0;
 }
 if (!FUNC_0 (&VAR_0->b, VAR_3, VAR_4)) {
  return 0;
 }
 return FUNC_2 (VAR_0, VAR_2, VAR_4, FUNC_3 (VAR_1));
}
