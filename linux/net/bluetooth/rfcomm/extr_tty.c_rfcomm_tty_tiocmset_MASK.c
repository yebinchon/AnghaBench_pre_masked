
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tty_struct {scalar_t__ driver_data; } ;
struct rfcomm_dlc {int dummy; } ;
struct rfcomm_dev {struct rfcomm_dlc* dlc; } ;


 int FUNC_0 (char*,struct tty_struct*,struct rfcomm_dev*,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (struct rfcomm_dlc*,int *) ;
 int FUNC_2 (struct rfcomm_dlc*,int ) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_10, unsigned int VAR_11, unsigned int VAR_12)
{
 struct rfcomm_dev *VAR_13 = (struct rfcomm_dev *) VAR_10->driver_data;
 struct rfcomm_dlc *VAR_14 = VAR_13->dlc;
 u8 VAR_15;

 FUNC_0("tty %p dev %p set 0x%02x clear 0x%02x", VAR_10, VAR_13, VAR_11, VAR_12);

 FUNC_1(VAR_14, &VAR_15);

 if (VAR_11 & VAR_6 || VAR_11 & VAR_7)
  VAR_15 |= VAR_2;
 if (VAR_11 & VAR_9 || VAR_11 & VAR_5)
  VAR_15 |= VAR_3;
 if (VAR_11 & VAR_8)
  VAR_15 |= VAR_1;
 if (VAR_11 & VAR_4)
  VAR_15 |= VAR_0;

 if (VAR_12 & VAR_6 || VAR_12 & VAR_7)
  VAR_15 &= ~VAR_2;
 if (VAR_12 & VAR_9 || VAR_12 & VAR_5)
  VAR_15 &= ~VAR_3;
 if (VAR_12 & VAR_8)
  VAR_15 &= ~VAR_1;
 if (VAR_12 & VAR_4)
  VAR_15 &= ~VAR_0;

 FUNC_2(VAR_14, VAR_15);

 return 0;
}
