
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int led; } ;
struct hidp_session {unsigned char leds; } ;


 int FUNC_0 (char*,struct hidp_session*,unsigned int,unsigned int,int) ;
 unsigned int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct hidp_session*,unsigned char,unsigned char*,int) ;
 struct hidp_session* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_8, unsigned int VAR_9,
       unsigned int VAR_10, int VAR_11)
{
 struct hidp_session *VAR_12 = FUNC_2(VAR_8);
 unsigned char VAR_13;
 unsigned char VAR_14, VAR_15[2];

 FUNC_0("session %p type %d code %d value %d",
        VAR_12, VAR_9, VAR_10, VAR_11);

 if (VAR_9 != VAR_0)
  return -1;

 VAR_13 = (!!FUNC_3(VAR_5, VAR_8->led) << 3) |
    (!!FUNC_3(VAR_4, VAR_8->led) << 3) |
    (!!FUNC_3(VAR_7, VAR_8->led) << 2) |
    (!!FUNC_3(VAR_3, VAR_8->led) << 1) |
    (!!FUNC_3(VAR_6, VAR_8->led) << 0);

 if (VAR_12->leds == VAR_13)
  return 0;

 VAR_12->leds = VAR_13;

 VAR_14 = VAR_2 | VAR_1;
 VAR_15[0] = 0x01;
 VAR_15[1] = VAR_13;

 return FUNC_1(VAR_12, VAR_14, VAR_15, 2);
}
