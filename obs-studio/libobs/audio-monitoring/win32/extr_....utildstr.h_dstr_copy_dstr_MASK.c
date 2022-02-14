
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {scalar_t__ len; scalar_t__ array; } ;


 int FUNC_0 (struct dstr*,scalar_t__) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct dstr *VAR_0, const struct dstr *VAR_1)
{
 if (VAR_0->array)
  FUNC_1(VAR_0);

 if (VAR_1->len) {
  FUNC_0(VAR_0, VAR_1->len + 1);
  FUNC_2(VAR_0->array, VAR_1->array, VAR_1->len + 1);
  VAR_0->len = VAR_1->len;
 }
}
