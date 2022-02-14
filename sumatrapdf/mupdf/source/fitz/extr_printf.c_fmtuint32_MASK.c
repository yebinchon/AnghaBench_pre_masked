
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmtbuf {int dummy; } ;


 int FUNC_0 (struct fmtbuf*,char) ;
 char* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct fmtbuf *VAR_1, unsigned int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 char VAR_7[40];
 int VAR_8;

 VAR_8 = 0;
 if (VAR_2 == 0)
  VAR_7[VAR_8++] = '0';
 while (VAR_2) {
  VAR_7[VAR_8++] = VAR_0[VAR_2 % VAR_6];
  VAR_2 /= VAR_6;
 }
 if (VAR_3) {
  if (VAR_4 == '0')
   while (VAR_8 < VAR_5 - 1)
    VAR_7[VAR_8++] = VAR_4;
  VAR_7[VAR_8++] = VAR_3;
 }
 while (VAR_8 < VAR_5)
  VAR_7[VAR_8++] = VAR_4;
 while (VAR_8 > 0)
  FUNC_0(VAR_1, VAR_7[--VAR_8]);
}
