
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_event_data {int timestamp; int id; } ;
typedef enum iio_modifier { ____Placeholder_iio_modifier } iio_modifier ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (struct iio_event_data*) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int * VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;
 char** VAR_5 ;
 int FUNC_9 (char*,...) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_10(struct iio_event_data *VAR_7)
{
 enum iio_chan_type VAR_8 = FUNC_2(VAR_7->id);
 enum iio_modifier VAR_9 = FUNC_5(VAR_7->id);
 enum iio_event_type VAR_10 = FUNC_6(VAR_7->id);
 enum iio_event_direction VAR_11 = FUNC_4(VAR_7->id);
 int VAR_12 = FUNC_0(VAR_7->id);
 int VAR_13 = FUNC_1(VAR_7->id);
 bool VAR_14 = FUNC_3(VAR_7->id);

 if (!FUNC_7(VAR_7)) {
  FUNC_8(VAR_6, "Unknown event: time: %d, id: %x\n",
   VAR_7->timestamp, VAR_7->id);

  return;
 }

 FUNC_9("Event: time: %lld, type: %s", VAR_7->timestamp,
        VAR_2[VAR_8]);

 if (VAR_9 != VAR_1)
  FUNC_9("(%s)", VAR_5[VAR_9]);

 if (VAR_12 >= 0) {
  FUNC_9(", channel: %d", VAR_12);
  if (VAR_14 && VAR_13 >= 0)
   FUNC_9("-%d", VAR_13);
 }

 FUNC_9(", evtype: %s", VAR_4[VAR_10]);

 if (VAR_11 != VAR_0)
  FUNC_9(", direction: %s", VAR_3[VAR_11]);

 FUNC_9("\n");
}
