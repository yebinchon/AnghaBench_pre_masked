
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct aa_ext {void* pos; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct aa_ext*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct aa_ext*,int ,char const*) ;

__attribute__((used)) static size_t FUNC_4(struct aa_ext *VAR_1, const char *VAR_2)
{
 void *VAR_3 = VAR_1->pos;

 if (FUNC_3(VAR_1, VAR_0, VAR_2)) {
  int VAR_4;
  if (!FUNC_1(VAR_1, sizeof(u16)))
   goto fail;
  VAR_4 = (int)FUNC_2(FUNC_0((__le16 *) VAR_1->pos));
  VAR_1->pos += sizeof(u16);
  return VAR_4;
 }

fail:
 VAR_1->pos = VAR_3;
 return 0;
}
