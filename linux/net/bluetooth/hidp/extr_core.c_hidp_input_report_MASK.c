
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int len; } ;
struct input_dev {int dummy; } ;
struct hidp_session {unsigned char* keys; struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned char) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct input_dev*,int ,char) ;
 int FUNC_2 (struct input_dev*,int ,char) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_6 (unsigned char*,unsigned char,int) ;

__attribute__((used)) static void FUNC_7(struct hidp_session *VAR_10, struct sk_buff *VAR_11)
{
 struct input_dev *VAR_12 = VAR_10->input;
 unsigned char *VAR_13 = VAR_10->keys;
 unsigned char *VAR_14 = VAR_11->data + 1;
 signed char *VAR_15 = VAR_11->data + 1;
 int VAR_16, VAR_17 = VAR_11->len - 1;

 switch (VAR_11->data[0]) {
 case 0x01:
  for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
   FUNC_1(VAR_12, VAR_8[VAR_16 + 224], (VAR_14[0] >> VAR_16) & 1);



  if (!FUNC_4(VAR_14 + 2, VAR_9, 6))
   break;

  for (VAR_16 = 2; VAR_16 < 8; VAR_16++) {
   if (VAR_13[VAR_16] > 3 && FUNC_6(VAR_14 + 2, VAR_13[VAR_16], 6) == VAR_14 + 8) {
    if (VAR_8[VAR_13[VAR_16]])
     FUNC_1(VAR_12, VAR_8[VAR_13[VAR_16]], 0);
    else
     FUNC_0("Unknown key (scancode %#x) released.", VAR_13[VAR_16]);
   }

   if (VAR_14[VAR_16] > 3 && FUNC_6(VAR_13 + 2, VAR_14[VAR_16], 6) == VAR_13 + 8) {
    if (VAR_8[VAR_14[VAR_16]])
     FUNC_1(VAR_12, VAR_8[VAR_14[VAR_16]], 1);
    else
     FUNC_0("Unknown key (scancode %#x) pressed.", VAR_14[VAR_16]);
   }
  }

  FUNC_5(VAR_13, VAR_14, 8);
  break;

 case 0x02:
  FUNC_1(VAR_12, VAR_1, VAR_15[0] & 0x01);
  FUNC_1(VAR_12, VAR_3, VAR_15[0] & 0x02);
  FUNC_1(VAR_12, VAR_2, VAR_15[0] & 0x04);
  FUNC_1(VAR_12, VAR_4, VAR_15[0] & 0x08);
  FUNC_1(VAR_12, VAR_0, VAR_15[0] & 0x10);

  FUNC_2(VAR_12, VAR_6, VAR_15[1]);
  FUNC_2(VAR_12, VAR_7, VAR_15[2]);

  if (VAR_17 > 3)
   FUNC_2(VAR_12, VAR_5, VAR_15[3]);
  break;
 }

 FUNC_3(VAR_12);
}
