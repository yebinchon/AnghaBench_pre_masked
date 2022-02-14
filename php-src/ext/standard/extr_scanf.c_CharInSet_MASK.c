
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nchars; char* chars; int nranges; scalar_t__ exclude; TYPE_1__* ranges; } ;
struct TYPE_4__ {char start; char end; } ;
typedef TYPE_2__ CharSet ;



__attribute__((used)) static int FUNC_0(CharSet *VAR_0, int VAR_1)
{
 char VAR_2 = (char) VAR_1;
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->nchars; VAR_3++) {
  if (VAR_0->chars[VAR_3] == VAR_2) {
   VAR_4 = 1;
   break;
  }
 }
 if (!VAR_4) {
  for (VAR_3 = 0; VAR_3 < VAR_0->nranges; VAR_3++) {
   if ((VAR_0->ranges[VAR_3].start <= VAR_2)
    && (VAR_2 <= VAR_0->ranges[VAR_3].end)) {
    VAR_4 = 1;
    break;
   }
  }
 }
 return (VAR_0->exclude ? !VAR_4 : VAR_4);
}
