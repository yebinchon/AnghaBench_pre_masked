
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_base64_ctx {int user_data; int (* b64_putc ) (char,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char,int ) ;

__attribute__((used)) static void FUNC_4(struct cs_base64_ctx *VAR_3, int VAR_4) {
  if (VAR_4 < VAR_2) {
    VAR_3->b64_putc(VAR_4 + 'A', VAR_3->user_data);
  } else if (VAR_4 < (VAR_1)) {
    VAR_3->b64_putc(VAR_4 - VAR_2 + 'a', VAR_3->user_data);
  } else if (VAR_4 < (VAR_1 + VAR_0)) {
    VAR_3->b64_putc(VAR_4 - VAR_1 + '0', VAR_3->user_data);
  } else {
    VAR_3->b64_putc(VAR_4 - VAR_1 - VAR_0 == 0 ? '+' : '/',
                  VAR_3->user_data);
  }
}
