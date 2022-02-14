
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat {struct seatop_default_event* seatop_data; int * seatop_impl; } ;
struct seatop_default_event {int dummy; } ;


 struct seatop_default_event* FUNC_0 (int,int) ;
 int FUNC_1 (struct sway_seat*) ;
 int VAR_0 ;
 int FUNC_2 (struct sway_seat*,int ) ;
 int FUNC_3 (struct seatop_default_event*,char*) ;

void FUNC_4(struct sway_seat *VAR_1) {
 FUNC_1(VAR_1);

 struct seatop_default_event *VAR_2 =
  FUNC_0(1, sizeof(struct seatop_default_event));
 FUNC_3(VAR_2, "Unable to allocate seatop_default_event");
 VAR_1->seatop_impl = &VAR_0;
 VAR_1->seatop_data = VAR_2;

 FUNC_2(VAR_1, 0);
}
