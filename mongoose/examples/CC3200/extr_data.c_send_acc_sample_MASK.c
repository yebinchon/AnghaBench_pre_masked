
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
struct bm222_sample {scalar_t__ ts; int z; int y; int x; } ;


 int VAR_0 ;
 int FUNC_0 (struct mg_connection*,int ,char*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_1,
                            const struct bm222_sample *VAR_2) {
  if (VAR_2->ts == 0) return;
  FUNC_0(
      VAR_1, VAR_0,
      "{\"t\": 2, \"ts\": %lf, \"x\": %d, \"y\": %d, \"z\": %d}", VAR_2->ts, VAR_2->x,
      VAR_2->y, VAR_2->z);
}
