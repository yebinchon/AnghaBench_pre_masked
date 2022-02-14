
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {size_t len; int data; } ;
struct hidp_session {unsigned char waiting_report_type; unsigned char waiting_report_number; int report_mutex; int flags; struct sk_buff* report_return; int terminate; int report_queue; } ;
struct hid_device {TYPE_1__* report_enum; struct hidp_session* driver_data; } ;
struct TYPE_2__ {int numbered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hidp_session*,unsigned char,unsigned char*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (unsigned char*,int ,size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int,int) ;

__attribute__((used)) static int FUNC_10(struct hid_device *VAR_10,
  unsigned char VAR_11,
  unsigned char *VAR_12, size_t VAR_13,
  unsigned char VAR_14)
{
 struct hidp_session *VAR_15 = VAR_10->driver_data;
 struct sk_buff *VAR_16;
 size_t VAR_17;
 int VAR_18 = VAR_10->report_enum[VAR_14].numbered;
 int VAR_19;

 if (FUNC_0(&VAR_15->terminate))
  return -VAR_1;

 switch (VAR_14) {
 case 130:
  VAR_14 = VAR_7 | VAR_3;
  break;
 case 129:
  VAR_14 = VAR_7 | VAR_4;
  break;
 case 128:
  VAR_14 = VAR_7 | VAR_6;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_5(&VAR_15->report_mutex))
  return -VAR_2;


 VAR_15->waiting_report_type = VAR_14 & VAR_5;
 VAR_15->waiting_report_number = VAR_18 ? VAR_11 : -1;
 FUNC_7(VAR_8, &VAR_15->flags);
 VAR_12[0] = VAR_11;
 VAR_19 = FUNC_2(VAR_15, VAR_14, VAR_12, 1);
 if (VAR_19 < 0)
  goto err;



 while (FUNC_8(VAR_8, &VAR_15->flags) &&
        !FUNC_0(&VAR_15->terminate)) {
  int VAR_20;

  VAR_20 = FUNC_9(VAR_15->report_queue,
   !FUNC_8(VAR_8, &VAR_15->flags)
    || FUNC_0(&VAR_15->terminate),
   5*VAR_9);
  if (VAR_20 == 0) {

   VAR_19 = -VAR_1;
   goto err;
  }
  if (VAR_20 < 0) {

   VAR_19 = -VAR_2;
   goto err;
  }
 }

 VAR_16 = VAR_15->report_return;
 if (VAR_16) {
  VAR_17 = VAR_16->len < VAR_13 ? VAR_16->len : VAR_13;
  FUNC_4(VAR_12, VAR_16->data, VAR_17);

  FUNC_3(VAR_16);
  VAR_15->report_return = ((void*)0);
 } else {

  VAR_17 = -VAR_1;
 }

 FUNC_1(VAR_8, &VAR_15->flags);
 FUNC_6(&VAR_15->report_mutex);

 return VAR_17;

err:
 FUNC_1(VAR_8, &VAR_15->flags);
 FUNC_6(&VAR_15->report_mutex);
 return VAR_19;
}
