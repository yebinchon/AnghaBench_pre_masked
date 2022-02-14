
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_base64_ctx {scalar_t__ chunk_size; int user_data; int (* b64_putc ) (char,int ) ;int * chunk; } ;


 int FUNC_0 (struct cs_base64_ctx*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char,int ) ;

void FUNC_3(struct cs_base64_ctx *VAR_0) {
  if (VAR_0->chunk_size > 0) {
    int VAR_1;
    FUNC_1(&VAR_0->chunk[VAR_0->chunk_size], 0, 3 - VAR_0->chunk_size);
    FUNC_0(VAR_0);
    for (VAR_1 = 0; VAR_1 < (3 - VAR_0->chunk_size); VAR_1++) {
      VAR_0->b64_putc('=', VAR_0->user_data);
    }
  }
}
