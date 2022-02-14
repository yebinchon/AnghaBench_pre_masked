
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char* ptrdiff_t ;
struct TYPE_3__ {char* scratch; int size; int base_size; int buffer; } ;
typedef TYPE_1__ pdf_lexbuf ;
typedef int fz_context ;


 char* FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int ,int) ;

ptrdiff_t FUNC_3(fz_context *VAR_0, pdf_lexbuf *VAR_1)
{
 char *VAR_2 = VAR_1->scratch;
 int VAR_3 = VAR_1->size * 2;
 if (VAR_1->size == VAR_1->base_size)
 {
  VAR_1->scratch = FUNC_0(VAR_0, VAR_3);
  FUNC_2(VAR_1->scratch, VAR_1->buffer, VAR_1->size);
 }
 else
 {
  VAR_1->scratch = FUNC_1(VAR_0, VAR_1->scratch, VAR_3);
 }
 VAR_1->size = VAR_3;
 return VAR_1->scratch - VAR_2;
}
