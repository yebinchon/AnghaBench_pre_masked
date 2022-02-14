
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahx {int column; int chain; } ;
typedef int fz_context ;
typedef size_t c ;


 int FUNC_0 (int *,int ,char const) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 static const char VAR_4[16] = "0123456789ABCDEF";
 struct ahx *VAR_5 = VAR_1;
 const unsigned char *VAR_6 = VAR_2;
 while (VAR_3-- > 0)
 {
  int VAR_7 = *VAR_6++;
  FUNC_0(VAR_0, VAR_5->chain, VAR_4[(VAR_7>>4) & 15]);
  FUNC_0(VAR_0, VAR_5->chain, VAR_4[(VAR_7) & 15]);
  VAR_5->column += 2;
  if (VAR_5->column == 64)
  {
   FUNC_0(VAR_0, VAR_5->chain, '\n');
   VAR_5->column = 0;
  }
 }
}
