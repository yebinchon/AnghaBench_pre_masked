
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct footnote_ref {struct buf* contents; } ;
struct footnote_list {int dummy; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct footnote_list*,struct footnote_ref*) ;
 struct buf* FUNC_1 (int) ;
 int FUNC_2 (struct buf*,char const*,int) ;
 int FUNC_3 (struct buf*,char) ;
 struct footnote_ref* FUNC_4 (struct footnote_list*,char const*,size_t) ;
 int FUNC_5 (struct footnote_ref*) ;
 scalar_t__ FUNC_6 (char const*,size_t) ;

__attribute__((used)) static int
FUNC_7(const uint8_t *VAR_0, size_t VAR_1, size_t VAR_2, size_t *VAR_3, struct footnote_list *VAR_4)
{
 size_t VAR_5 = 0;
 struct buf *VAR_6 = 0;
 size_t VAR_7 = 0;
 int VAR_8 = 0;
 size_t VAR_9 = 0;

 size_t VAR_10, VAR_11;


 if (VAR_1 + 3 >= VAR_2) return 0;
 if (VAR_0[VAR_1] == ' ') { VAR_5 = 1;
 if (VAR_0[VAR_1 + 1] == ' ') { VAR_5 = 2;
 if (VAR_0[VAR_1 + 2] == ' ') { VAR_5 = 3;
 if (VAR_0[VAR_1 + 3] == ' ') return 0; } } }
 VAR_5 += VAR_1;


 if (VAR_0[VAR_5] != '[') return 0;
 VAR_5++;
 if (VAR_5 >= VAR_2 || VAR_0[VAR_5] != '^') return 0;
 VAR_5++;
 VAR_10 = VAR_5;
 while (VAR_5 < VAR_2 && VAR_0[VAR_5] != '\n' && VAR_0[VAR_5] != '\r' && VAR_0[VAR_5] != ']')
  VAR_5++;
 if (VAR_5 >= VAR_2 || VAR_0[VAR_5] != ']') return 0;
 VAR_11 = VAR_5;


 VAR_5++;
 if (VAR_5 >= VAR_2 || VAR_0[VAR_5] != ':') return 0;
 VAR_5++;


 VAR_6 = FUNC_1(64);

 VAR_9 = VAR_5;


 while (VAR_5 < VAR_2) {
  while (VAR_5 < VAR_2 && VAR_0[VAR_5] != '\n' && VAR_0[VAR_5] != '\r') VAR_5++;


  if (FUNC_6(VAR_0 + VAR_9, VAR_5 - VAR_9)) {
   VAR_8 = 1;
   if (VAR_5 < VAR_2 && (VAR_0[VAR_5] == '\n' || VAR_0[VAR_5] == '\r')) {
    VAR_5++;
    if (VAR_5 < VAR_2 && VAR_0[VAR_5] == '\n' && VAR_0[VAR_5 - 1] == '\r') VAR_5++;
   }
   VAR_9 = VAR_5;
   continue;
  }


  VAR_7 = 0;
  while (VAR_7 < 4 && VAR_9 + VAR_7 < VAR_2 && VAR_0[VAR_9 + VAR_7] == ' ')
   VAR_7++;




  if (VAR_7 == 0) {
   if (VAR_9 == VAR_11 + 2 && VAR_0[VAR_9] == '\t') {}
   else break;
  }
  else if (VAR_8) {
   FUNC_3(VAR_6, '\n');
  }

  VAR_8 = 0;


  FUNC_2(VAR_6, VAR_0 + VAR_9 + VAR_7, VAR_5 - VAR_9 - VAR_7);

  if (VAR_5 < VAR_2) {
   FUNC_2(VAR_6, "\n", 1);
   if (VAR_5 < VAR_2 && (VAR_0[VAR_5] == '\n' || VAR_0[VAR_5] == '\r')) {
    VAR_5++;
    if (VAR_5 < VAR_2 && VAR_0[VAR_5] == '\n' && VAR_0[VAR_5 - 1] == '\r') VAR_5++;
   }
  }
  VAR_9 = VAR_5;
 }

 if (VAR_3)
  *VAR_3 = VAR_9;

 if (VAR_4) {
  struct footnote_ref *VAR_12;
  VAR_12 = FUNC_4(VAR_4, VAR_0 + VAR_10, VAR_11 - VAR_10);
  if (!VAR_12)
   return 0;
  if (!FUNC_0(VAR_4, VAR_12)) {
   FUNC_5(VAR_12);
   return 0;
  }
  VAR_12->contents = VAR_6;
 }

 return 1;
}
