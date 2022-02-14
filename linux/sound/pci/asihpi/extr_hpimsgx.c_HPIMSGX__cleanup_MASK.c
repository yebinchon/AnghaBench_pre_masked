
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct hpi_response {int dummy; } ;
struct hpi_message {int function; void* obj_index; void* adapter_index; } ;
struct TYPE_4__ {void* h_owner; scalar_t__ open_flag; } ;
struct TYPE_3__ {void* h_owner; scalar_t__ open_flag; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;
 TYPE_2__** VAR_12 ;
 TYPE_1__** VAR_13 ;

__attribute__((used)) static void FUNC_3(u16 VAR_14, void *VAR_15)
{
 int VAR_16, VAR_17, VAR_18;

 if (!VAR_15)
  return;

 if (VAR_14 == VAR_1) {
  VAR_17 = 0;
  VAR_18 = VAR_5;
 } else {
  VAR_17 = VAR_14;
  VAR_18 = VAR_17 + 1;
 }

 for (; VAR_17 < VAR_18; VAR_17++) {

  for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
   if (VAR_15 ==
    VAR_13[VAR_17][VAR_16].h_owner) {
    struct hpi_message VAR_19;
    struct hpi_response VAR_20;

    FUNC_0(VAR_0,
     "Close adapter %d ostream %d\n",
     VAR_17, VAR_16);

    FUNC_1(&VAR_19, &VAR_20,
     VAR_8, VAR_11);
    VAR_19.adapter_index = (u16)VAR_17;
    VAR_19.obj_index = (u16)VAR_16;
    FUNC_2(&VAR_19, &VAR_20);

    VAR_19.function = VAR_10;
    FUNC_2(&VAR_19, &VAR_20);

    VAR_19.function = VAR_9;
    FUNC_2(&VAR_19, &VAR_20);

    VAR_13[VAR_17][VAR_16].open_flag = 0;
    VAR_13[VAR_17][VAR_16].h_owner =
     ((void*)0);
   }
   if (VAR_15 == VAR_12[VAR_17][VAR_16].h_owner) {
    struct hpi_message VAR_21;
    struct hpi_response VAR_22;

    FUNC_0(VAR_0,
     "Close adapter %d istream %d\n",
     VAR_17, VAR_16);

    FUNC_1(&VAR_21, &VAR_22,
     VAR_7, VAR_4);
    VAR_21.adapter_index = (u16)VAR_17;
    VAR_21.obj_index = (u16)VAR_16;
    FUNC_2(&VAR_21, &VAR_22);

    VAR_21.function = VAR_3;
    FUNC_2(&VAR_21, &VAR_22);

    VAR_21.function = VAR_2;
    FUNC_2(&VAR_21, &VAR_22);

    VAR_12[VAR_17][VAR_16].open_flag = 0;
    VAR_12[VAR_17][VAR_16].h_owner = ((void*)0);
   }
  }
 }
}
