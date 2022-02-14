
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8 ;
typedef size_t uint16 ;
struct TYPE_2__ {int next; int previous; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;
 size_t* VAR_4 ;

void
FUNC_3(uint8 VAR_5, uint16 VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 if (!FUNC_1(VAR_5))
  return;

 if (VAR_4[VAR_5] == VAR_6)
  return;

 FUNC_0(("bump bitmap: id=%d, idx=%d, bump=%d\n", VAR_5, VAR_6, VAR_7));

 VAR_9 = VAR_1[VAR_5][VAR_6].next;
 VAR_8 = VAR_1[VAR_5][VAR_6].previous;

 if (FUNC_2(VAR_9))
 {

  --VAR_2[VAR_5];
  if (FUNC_2(VAR_8))
   VAR_1[VAR_5][VAR_8].next = VAR_9;
  else
   VAR_3[VAR_5] = VAR_9;
  if (FUNC_2(VAR_9))
   VAR_1[VAR_5][VAR_9].previous = VAR_8;
  else
   VAR_4[VAR_5] = VAR_8;
 }
 else
 {
  VAR_8 = VAR_0;
  VAR_9 = VAR_3[VAR_5];
 }

 if (VAR_7 >= 0)
 {
  for (VAR_10 = 0; VAR_10 < VAR_7 && FUNC_2(VAR_9); VAR_10++)
  {
   VAR_8 = VAR_9;
   VAR_9 = VAR_1[VAR_5][VAR_8].next;
  }
 }
 else
 {
  VAR_8 = VAR_4[VAR_5];
  VAR_9 = VAR_0;
 }


 ++VAR_2[VAR_5];
 VAR_1[VAR_5][VAR_6].previous = VAR_8;
 VAR_1[VAR_5][VAR_6].next = VAR_9;

 if (VAR_8 >= 0)
  VAR_1[VAR_5][VAR_8].next = VAR_6;
 else
  VAR_3[VAR_5] = VAR_6;

 if (VAR_9 >= 0)
  VAR_1[VAR_5][VAR_9].previous = VAR_6;
 else
  VAR_4[VAR_5] = VAR_6;
}
