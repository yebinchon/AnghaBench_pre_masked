
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int fz_colorspace ;


 int FUNC_0 (float,int ,int) ;
 int FUNC_1 (int *,int *,float const*,int ,float*,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(fz_context *VAR_1, fz_colorspace *VAR_2, const float *VAR_3)
{
 float VAR_4[3];
 FUNC_1(VAR_1, VAR_2, VAR_3, FUNC_2(VAR_1), VAR_4, ((void*)0), VAR_0);
 return
  (FUNC_0(VAR_4[0] * 255, 0, 255) << 16) |
  (FUNC_0(VAR_4[1] * 255, 0, 255) << 8) |
  (FUNC_0(VAR_4[2] * 255, 0, 255));
}
