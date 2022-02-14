
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct aa_ext {char* pos; } ;
typedef int __le16 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct aa_ext*,size_t) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(struct aa_ext *VAR_0, char **VAR_1)
{
 size_t VAR_2 = 0;
 void *VAR_3 = VAR_0->pos;

 if (!FUNC_1(VAR_0, sizeof(u16)))
  goto fail;
 VAR_2 = FUNC_2(FUNC_0((__le16 *) VAR_0->pos));
 VAR_0->pos += sizeof(__le16);
 if (!FUNC_1(VAR_0, VAR_2))
  goto fail;
 *VAR_1 = VAR_0->pos;
 VAR_0->pos += VAR_2;
 return VAR_2;

fail:
 VAR_0->pos = VAR_3;
 return 0;
}
