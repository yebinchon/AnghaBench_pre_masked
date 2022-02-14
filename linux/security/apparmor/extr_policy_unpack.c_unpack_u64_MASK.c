
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct aa_ext {void* pos; } ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct aa_ext*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct aa_ext*,int ,char const*) ;

__attribute__((used)) static bool FUNC_4(struct aa_ext *VAR_1, u64 *VAR_2, const char *VAR_3)
{
 void *VAR_4 = VAR_1->pos;

 if (FUNC_3(VAR_1, VAR_0, VAR_3)) {
  if (!FUNC_1(VAR_1, sizeof(u64)))
   goto fail;
  if (VAR_2)
   *VAR_2 = FUNC_2(FUNC_0((__le64 *) VAR_1->pos));
  VAR_1->pos += sizeof(u64);
  return 1;
 }

fail:
 VAR_1->pos = VAR_4;
 return 0;
}
