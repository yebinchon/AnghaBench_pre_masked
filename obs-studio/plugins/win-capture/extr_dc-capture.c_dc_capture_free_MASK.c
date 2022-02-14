
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_capture {int texture; int bmp; scalar_t__ hdc; int old_bmp; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dc_capture*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct dc_capture *VAR_0)
{
 if (VAR_0->hdc) {
  FUNC_2(VAR_0->hdc, VAR_0->old_bmp);
  FUNC_0(VAR_0->hdc);
  FUNC_1(VAR_0->bmp);
 }

 FUNC_5();
 FUNC_3(VAR_0->texture);
 FUNC_6();

 FUNC_4(VAR_0, 0, sizeof(struct dc_capture));
}
