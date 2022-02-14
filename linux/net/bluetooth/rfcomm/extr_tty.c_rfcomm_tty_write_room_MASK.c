
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct rfcomm_dev {scalar_t__ dlc; } ;


 int FUNC_0 (char*,struct tty_struct*,int) ;
 int FUNC_1 (struct rfcomm_dev*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0)
{
 struct rfcomm_dev *VAR_1 = (struct rfcomm_dev *) VAR_0->driver_data;
 int VAR_2 = 0;

 if (VAR_1 && VAR_1->dlc)
  VAR_2 = FUNC_1(VAR_1);

 FUNC_0("tty %p room %d", VAR_0, VAR_2);

 return VAR_2;
}
