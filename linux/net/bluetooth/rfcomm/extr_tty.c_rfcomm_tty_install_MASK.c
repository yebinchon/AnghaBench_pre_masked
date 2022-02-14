
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct rfcomm_dev* driver_data; int index; } ;
struct tty_driver {int dummy; } ;
struct rfcomm_dlc {int dummy; } ;
struct rfcomm_dev {int port; int status; int flags; struct rfcomm_dlc* dlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rfcomm_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct rfcomm_dlc*) ;
 int FUNC_2 (struct rfcomm_dlc*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,struct tty_driver*,struct tty_struct*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct tty_driver *VAR_4, struct tty_struct *VAR_5)
{
 struct rfcomm_dev *VAR_6;
 struct rfcomm_dlc *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_5->index);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = VAR_6->dlc;


 FUNC_1(VAR_7);
 VAR_5->driver_data = VAR_6;
 FUNC_2(VAR_7);
 FUNC_4(VAR_2, &VAR_6->flags);


 VAR_8 = FUNC_6(&VAR_6->port, VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_3(VAR_5);
  return VAR_8;
 }






 if (FUNC_5(VAR_1, &VAR_6->flags)) {
  FUNC_4(VAR_3, &VAR_6->status);
  FUNC_7(&VAR_6->port);
 }

 return 0;
}
