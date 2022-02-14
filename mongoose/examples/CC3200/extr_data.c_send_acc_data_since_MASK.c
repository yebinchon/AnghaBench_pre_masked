
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
struct bm222_sample {double ts; } ;
struct bm222_ctx {int last_index; struct bm222_sample* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mg_connection*,struct bm222_sample const*) ;

__attribute__((used)) static double FUNC_1(struct mg_connection *VAR_1,
                                  const struct bm222_ctx *VAR_2, double VAR_3) {
  int VAR_4 = (VAR_2->last_index + 1) % VAR_0, VAR_5 = VAR_0;
  double VAR_6 = 0;
  for (; VAR_5 > 0; VAR_4 = (VAR_4 + 1) % VAR_0, VAR_5--) {
    const struct bm222_sample *VAR_7 = VAR_2->data + VAR_4;
    if (VAR_7->ts <= VAR_3) continue;
    FUNC_0(VAR_1, VAR_7);
    VAR_6 = VAR_7->ts;
  }
  return VAR_6;
}
