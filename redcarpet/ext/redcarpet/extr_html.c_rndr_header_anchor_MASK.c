
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct buf {char* data; size_t size; } ;


 int FUNC_0 (struct buf*,char*,unsigned long) ;
 int FUNC_1 (struct buf*,char) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const*,char const) ;
 char FUNC_4 (char const) ;

__attribute__((used)) static void
FUNC_5(struct buf *VAR_0, const struct buf *VAR_1)
{
 static const char *VAR_2 = " -&+$,/:;=?@\"#{}|^~[]`\\*()%.!'";

 const uint8_t *VAR_3 = VAR_1->data;
 const size_t VAR_4 = VAR_1->size;
 size_t VAR_5 = 0;
 int VAR_6 = 0, VAR_7 = 0;

 for (; VAR_5 < VAR_4; ++VAR_5) {

  if (VAR_3[VAR_5] == '<') {
   while (VAR_5 < VAR_4 && VAR_3[VAR_5] != '>')
    VAR_5++;

  } else if (VAR_3[VAR_5] == '&') {
   while (VAR_5 < VAR_4 && VAR_3[VAR_5] != ';')
    VAR_5++;
  }

  else if (!FUNC_2(VAR_3[VAR_5]) || FUNC_3(VAR_2, VAR_3[VAR_5])) {
   if (VAR_7 && !VAR_6)
    FUNC_1(VAR_0, '-');

   VAR_6 = 1;
  }
  else {
   FUNC_1(VAR_0, FUNC_4(VAR_3[VAR_5]));
   VAR_6 = 0;
   VAR_7++;
  }
 }


 if (VAR_6 && VAR_7)
  VAR_0->size--;


 if (!VAR_7 && VAR_1->size) {
         unsigned long VAR_8 = 5381;
  for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
   VAR_8 = ((VAR_8 << 5) + VAR_8) + VAR_3[VAR_5];
  }
  FUNC_0(VAR_0, "part-%lx", VAR_8);
 }
}
