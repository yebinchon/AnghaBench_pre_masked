
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,char*) ;

void FUNC_2(fz_context *VAR_2, fz_stream *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6;
 do
 {
  if (VAR_5 <= 0)
   FUNC_1(VAR_2, VAR_1, "Buffer overrun reading null terminated string");

  VAR_6 = FUNC_0(VAR_2, VAR_3);
  if (VAR_6 == VAR_0)
   FUNC_1(VAR_2, VAR_1, "EOF reading null terminated string");
  *VAR_4++ = VAR_6;
  VAR_5--;
 }
 while (VAR_6 != 0);
}
