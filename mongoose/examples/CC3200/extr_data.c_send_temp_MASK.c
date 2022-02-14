
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_data {scalar_t__ ts; int temp; int volt; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mg_connection*,int ,char*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_1, const struct temp_data *VAR_2) {
  if (VAR_2->ts == 0) return;
  FUNC_0(VAR_1, VAR_0,
                            "{\"t\": 0, \"ts\": %lf, \"sv\": %lf, \"dt\": %lf}",
                            VAR_2->ts, VAR_2->volt, VAR_2->temp);
}
