
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {unsigned char const* s; char const* file; int line; scalar_t__ string_len; scalar_t__ c; int * pool; int * ctx; } ;
typedef int fz_pool ;
typedef int fz_context ;


 int FUNC_0 (struct lexbuf*) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, struct lexbuf *VAR_1, fz_pool *VAR_2, const char *VAR_3, const char *VAR_4)
{
 VAR_1->ctx = VAR_0;
 VAR_1->pool = VAR_2;
 VAR_1->s = (const unsigned char *)VAR_3;
 VAR_1->c = 0;
 VAR_1->file = VAR_4;
 VAR_1->line = 1;
 FUNC_0(VAR_1);

 VAR_1->string_len = 0;
}
