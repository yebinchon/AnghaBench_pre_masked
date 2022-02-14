
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,char*) ;

uint32_t FUNC_2(fz_context *VAR_2, fz_stream *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_3);
 int VAR_5 = FUNC_0(VAR_2, VAR_3);
 int VAR_6 = FUNC_0(VAR_2, VAR_3);
 int VAR_7 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 == VAR_0 || VAR_5 == VAR_0 || VAR_6 == VAR_0 || VAR_7 == VAR_0)
  FUNC_1(VAR_2, VAR_1, "premature end of file in int32");
 return ((uint32_t)VAR_4<<24) | ((uint32_t)VAR_5<<16) | ((uint32_t)VAR_6<<8) | ((uint32_t)VAR_7);
}
