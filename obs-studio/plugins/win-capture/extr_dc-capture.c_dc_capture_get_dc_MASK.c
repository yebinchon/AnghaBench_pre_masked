
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_capture {int texture; int * hdc; scalar_t__ compatibility; int valid; } ;
typedef int * HDC ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static inline HDC FUNC_1(struct dc_capture *VAR_0)
{
 if (!VAR_0->valid)
  return ((void*)0);

 if (VAR_0->compatibility)
  return VAR_0->hdc;
 else
  return FUNC_0(VAR_0->texture);
}
