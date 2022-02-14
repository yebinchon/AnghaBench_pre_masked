
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int report_mutex; int flags; int output_report_success; int terminate; int report_queue; } ;
struct hid_device {struct hidp_session* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hidp_session*,unsigned char,unsigned char*,size_t) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_9, unsigned char VAR_10,
          unsigned char *VAR_11, size_t VAR_12,
          unsigned char VAR_13)
{
 struct hidp_session *VAR_14 = VAR_9->driver_data;
 int VAR_15;

 switch (VAR_13) {
 case 130:
  VAR_13 = VAR_6 | VAR_3;
  break;
 case 129:
  VAR_13 = VAR_6 | VAR_4;
  break;
 case 128:
  VAR_13 = VAR_6 | VAR_5;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_3(&VAR_14->report_mutex))
  return -VAR_2;


 VAR_11[0] = VAR_10;
 FUNC_5(VAR_7, &VAR_14->flags);
 VAR_15 = FUNC_2(VAR_14, VAR_13, VAR_11, VAR_12);
 if (VAR_15 < 0)
  goto err;


 while (FUNC_6(VAR_7, &VAR_14->flags) &&
        !FUNC_0(&VAR_14->terminate)) {
  int VAR_16;

  VAR_16 = FUNC_7(VAR_14->report_queue,
   !FUNC_6(VAR_7, &VAR_14->flags)
    || FUNC_0(&VAR_14->terminate),
   10*VAR_8);
  if (VAR_16 == 0) {

   VAR_15 = -VAR_1;
   goto err;
  }
  if (VAR_16 < 0) {

   VAR_15 = -VAR_2;
   goto err;
  }
 }

 if (!VAR_14->output_report_success) {
  VAR_15 = -VAR_1;
  goto err;
 }

 VAR_15 = VAR_12;

err:
 FUNC_1(VAR_7, &VAR_14->flags);
 FUNC_4(&VAR_14->report_mutex);
 return VAR_15;
}
