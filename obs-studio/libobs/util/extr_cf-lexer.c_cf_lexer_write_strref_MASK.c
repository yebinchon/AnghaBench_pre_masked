
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {size_t len; int array; } ;
struct cf_lexer {scalar_t__* write_offset; } ;


 int FUNC_0 (scalar_t__*,int ,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct cf_lexer *VAR_0,
      const struct strref *VAR_1)
{
 FUNC_0(VAR_0->write_offset, VAR_1->array, VAR_1->len);
 VAR_0->write_offset[VAR_1->len] = 0;
 VAR_0->write_offset += VAR_1->len;
}
