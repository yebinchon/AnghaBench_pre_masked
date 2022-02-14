
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char value ;
struct usb_line6_pod {int line6; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int const) ;
 char* FUNC_2 (struct usb_line6_pod*,int ,int const) ;

__attribute__((used)) static int FUNC_3(struct usb_line6_pod *VAR_3, int VAR_4,
        int VAR_5)
{
 char *VAR_6;
 static const int VAR_7 = 5;

 VAR_6 = FUNC_2(VAR_3, VAR_1, VAR_7);
 if (!VAR_6)
  return -VAR_0;
 VAR_6[VAR_2] = VAR_5;
 VAR_6[VAR_2 + 1] = (VAR_4 >> 12) & 0x0f;
 VAR_6[VAR_2 + 2] = (VAR_4 >> 8) & 0x0f;
 VAR_6[VAR_2 + 3] = (VAR_4 >> 4) & 0x0f;
 VAR_6[VAR_2 + 4] = (VAR_4) & 0x0f;
 FUNC_1(&VAR_3->line6, VAR_6, VAR_7);
 FUNC_0(VAR_6);
 return 0;
}
