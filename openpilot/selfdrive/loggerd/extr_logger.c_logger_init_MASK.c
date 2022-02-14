
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_4__ {size_t init_data_len; int part; int has_qlog; int log_name; int route_name; int lock; int * init_data; } ;
typedef TYPE_1__ LoggerState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct tm*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int,char*,char const*) ;
 int FUNC_7 (int ,int,char*,struct tm*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

void FUNC_10(LoggerState *VAR_0, const char* VAR_1, const uint8_t* VAR_2, size_t VAR_3, bool VAR_4) {
  FUNC_4(VAR_0, 0, sizeof(*VAR_0));
  if (VAR_2) {
    VAR_0->init_data = (uint8_t*)FUNC_2(VAR_3);
    FUNC_0(VAR_0->init_data);
    FUNC_3(VAR_0->init_data, VAR_2, VAR_3);
    VAR_0->init_data_len = VAR_3;
  }

  FUNC_9(0);

  FUNC_5(&VAR_0->lock, ((void*)0));

  VAR_0->part = -1;
  VAR_0->has_qlog = VAR_4;

  time_t VAR_5 = FUNC_8(((void*)0));
  struct tm VAR_6;
  FUNC_1(&VAR_5, &VAR_6);

  FUNC_7(VAR_0->route_name, sizeof(VAR_0->route_name),
           "%Y-%m-%d--%H-%M-%S", &VAR_6);
  FUNC_6(VAR_0->log_name, sizeof(VAR_0->log_name), "%s", VAR_1);
}
