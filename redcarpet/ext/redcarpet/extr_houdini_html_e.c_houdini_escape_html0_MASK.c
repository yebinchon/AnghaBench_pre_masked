
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct buf {int dummy; } ;


 int FUNC_0 (size_t) ;
 int * VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_1 (struct buf*,int ) ;
 int FUNC_2 (struct buf*,size_t const*,size_t) ;
 int FUNC_3 (struct buf*,char) ;
 int FUNC_4 (struct buf*,int ) ;

void
FUNC_5(struct buf *VAR_2, const uint8_t *VAR_3, size_t VAR_4, int VAR_5)
{
 size_t VAR_6 = 0, VAR_7, VAR_8 = 0;

 FUNC_1(VAR_2, FUNC_0(VAR_4));

 while (VAR_6 < VAR_4) {
  VAR_7 = VAR_6;
  while (VAR_6 < VAR_4 && (VAR_8 = VAR_1[VAR_3[VAR_6]]) == 0)
   VAR_6++;

  if (VAR_6 > VAR_7)
   FUNC_2(VAR_2, VAR_3 + VAR_7, VAR_6 - VAR_7);


  if (VAR_6 >= VAR_4)
   break;


  if (VAR_3[VAR_6] == '/' && !VAR_5)
   FUNC_3(VAR_2, '/');
  else
   FUNC_4(VAR_2, VAR_0[VAR_8]);

  VAR_6++;
 }
}
