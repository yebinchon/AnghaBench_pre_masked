
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_capture {int width; int texture; int bits; scalar_t__ compatibility; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct dc_capture *VAR_0)
{
 if (VAR_0->compatibility) {
  FUNC_1(VAR_0->texture, VAR_0->bits,
         VAR_0->width * 4, 0);
 } else {
  FUNC_0(VAR_0->texture);
 }
}
