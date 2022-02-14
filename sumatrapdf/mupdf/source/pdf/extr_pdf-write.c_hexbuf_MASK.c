
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;
typedef int fz_buffer ;


 unsigned char* FUNC_0 (int *,size_t) ;
 int * FUNC_1 (int *,unsigned char*,size_t) ;

__attribute__((used)) static fz_buffer *FUNC_2(fz_context *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 static const char VAR_3[17] = "0123456789abcdef";
 int VAR_4 = 0;
 size_t VAR_5 = VAR_2 * 2 + (VAR_2 / 32) + 1;
 unsigned char *VAR_6 = FUNC_0(VAR_0, VAR_5);
 fz_buffer *VAR_7 = FUNC_1(VAR_0, VAR_6, VAR_5);

 while (VAR_2--)
 {
  *VAR_6++ = VAR_3[*VAR_1 >> 4];
  *VAR_6++ = VAR_3[*VAR_1 & 15];
  if (++VAR_4 == 32)
  {
   *VAR_6++ = '\n';
   VAR_4 = 0;
  }
  VAR_1++;
 }

 *VAR_6++ = '>';

 return VAR_7;
}
