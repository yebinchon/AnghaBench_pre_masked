
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_base64_ctx {int* chunk; int chunk_size; } ;


 int FUNC_0 (struct cs_base64_ctx*,int) ;

__attribute__((used)) static void FUNC_1(struct cs_base64_ctx *VAR_0) {
  int VAR_1, VAR_2, VAR_3;

  VAR_1 = VAR_0->chunk[0];
  VAR_2 = VAR_0->chunk[1];
  VAR_3 = VAR_0->chunk[2];

  FUNC_0(VAR_0, VAR_1 >> 2);
  FUNC_0(VAR_0, ((VAR_1 & 3) << 4) | (VAR_2 >> 4));
  if (VAR_0->chunk_size > 1) {
    FUNC_0(VAR_0, (VAR_2 & 15) << 2 | (VAR_3 >> 6));
  }
  if (VAR_0->chunk_size > 2) {
    FUNC_0(VAR_0, VAR_3 & 63);
  }
}
