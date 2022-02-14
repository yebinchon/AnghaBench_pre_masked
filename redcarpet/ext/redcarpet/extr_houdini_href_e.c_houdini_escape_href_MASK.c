
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (size_t) ;
 scalar_t__* VAR_0 ;
 int FUNC_2 (struct buf*,int ) ;
 int FUNC_3 (struct buf*,...) ;
 int FUNC_4 (struct buf*,char) ;

void
FUNC_5(struct buf *VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
 static const char VAR_4[] = "0123456789ABCDEF";
 size_t VAR_5 = 0, VAR_6;
 char VAR_7[3];

 FUNC_2(VAR_1, FUNC_1(VAR_3));
 VAR_7[0] = '%';

 while (VAR_5 < VAR_3) {
  VAR_6 = VAR_5;
  while (VAR_5 < VAR_3 && VAR_0[VAR_2[VAR_5]] != 0)
   VAR_5++;

  if (VAR_5 > VAR_6)
   FUNC_3(VAR_1, VAR_2 + VAR_6, VAR_5 - VAR_6);


  if (VAR_5 >= VAR_3)
   break;

  switch (VAR_2[VAR_5]) {



  case '\'':
   FUNC_0(VAR_1, "&#x27;");
   break;
  default:
   VAR_7[1] = VAR_4[(VAR_2[VAR_5] >> 4) & 0xF];
   VAR_7[2] = VAR_4[VAR_2[VAR_5] & 0xF];
   FUNC_3(VAR_1, VAR_7, 3);
  }

  VAR_5++;
 }
}
