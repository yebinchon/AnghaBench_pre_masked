
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_base64_ctx {unsigned char* chunk; int chunk_size; } ;


 int FUNC_0 (struct cs_base64_ctx*) ;

void FUNC_1(struct cs_base64_ctx *VAR_0, const char *VAR_1, size_t VAR_2) {
  const unsigned char *VAR_3 = (const unsigned char *) VAR_1;
  size_t VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    VAR_0->chunk[VAR_0->chunk_size++] = VAR_3[VAR_4];
    if (VAR_0->chunk_size == 3) {
      FUNC_0(VAR_0);
      VAR_0->chunk_size = 0;
    }
  }
}
