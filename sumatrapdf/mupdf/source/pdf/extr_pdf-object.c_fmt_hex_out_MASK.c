
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {int dummy; } ;
typedef int fz_context ;
typedef int b ;


 int FUNC_0 (int *,struct fmt*,int) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, void *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
 struct fmt *VAR_4 = (struct fmt *)VAR_1;
 int VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = (unsigned char) VAR_2[VAR_5];
  VAR_7 = (VAR_6 >> 4) & 0x0f;
  FUNC_0(VAR_0, VAR_4, VAR_7 < 0xA ? VAR_7 + '0' : VAR_7 + 'A' - 0xA);
  VAR_7 = (VAR_6) & 0x0f;
  FUNC_0(VAR_0, VAR_4, VAR_7 < 0xA ? VAR_7 + '0' : VAR_7 + 'A' - 0xA);
 }
}
