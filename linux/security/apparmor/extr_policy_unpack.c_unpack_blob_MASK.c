
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct aa_ext {char* pos; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct aa_ext*,size_t) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct aa_ext*,int ,char const*) ;

__attribute__((used)) static size_t FUNC_4(struct aa_ext *VAR_1, char **VAR_2, const char *VAR_3)
{
 void *VAR_4 = VAR_1->pos;

 if (FUNC_3(VAR_1, VAR_0, VAR_3)) {
  u32 VAR_5;
  if (!FUNC_1(VAR_1, sizeof(u32)))
   goto fail;
  VAR_5 = FUNC_2(FUNC_0((__le32 *) VAR_1->pos));
  VAR_1->pos += sizeof(u32);
  if (FUNC_1(VAR_1, (size_t) VAR_5)) {
   *VAR_2 = VAR_1->pos;
   VAR_1->pos += VAR_5;
   return VAR_5;
  }
 }

fail:
 VAR_1->pos = VAR_4;
 return 0;
}
