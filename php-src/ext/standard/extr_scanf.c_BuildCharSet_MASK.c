
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Range {char start; char end; } ;
struct TYPE_4__ {int exclude; char* chars; size_t nchars; size_t nranges; struct Range* ranges; } ;
typedef TYPE_1__ CharSet ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int,int,int ) ;

__attribute__((used)) static char * FUNC_2(CharSet *VAR_0, char *VAR_1)
{
 char *VAR_2, VAR_3;
 int VAR_4;
 char *VAR_5;

 FUNC_0(VAR_0, 0, sizeof(CharSet));

 VAR_2 = VAR_1;
 if (*VAR_2 == '^') {
  VAR_0->exclude = 1;
  VAR_2 = ++VAR_1;
 }
 VAR_5 = VAR_1 + 1;




 if (*VAR_2 == ']') {
  VAR_2 = VAR_5++;
 }
 VAR_4 = 0;
 while (*VAR_2 != ']') {
  if (*VAR_2 == '-') {
   VAR_4++;
  }
  VAR_2 = VAR_5++;
 }

 VAR_0->chars = (char *) FUNC_1(sizeof(char), (VAR_5 - VAR_1 - 1), 0);
 if (VAR_4 > 0) {
  VAR_0->ranges = (struct Range *) FUNC_1(sizeof(struct Range), VAR_4, 0);
 } else {
  VAR_0->ranges = ((void*)0);
 }




 VAR_0->nchars = VAR_0->nranges = 0;
 VAR_2 = VAR_1++;
 VAR_3 = *VAR_2;
 if (*VAR_2 == ']' || *VAR_2 == '-') {
  VAR_0->chars[VAR_0->nchars++] = *VAR_2;
  VAR_2 = VAR_1++;
 }
 while (*VAR_2 != ']') {
  if (*VAR_1 == '-') {




   VAR_3 = *VAR_2;
  } else if (*VAR_2 == '-') {





   if (*VAR_1 == ']') {
    VAR_0->chars[VAR_0->nchars++] = VAR_3;
    VAR_0->chars[VAR_0->nchars++] = *VAR_2;
   } else {
    VAR_2 = VAR_1++;




    if (VAR_3 < *VAR_2) {
     VAR_0->ranges[VAR_0->nranges].start = VAR_3;
     VAR_0->ranges[VAR_0->nranges].end = *VAR_2;
    } else {
     VAR_0->ranges[VAR_0->nranges].start = *VAR_2;
     VAR_0->ranges[VAR_0->nranges].end = VAR_3;
    }
    VAR_0->nranges++;
   }
  } else {
   VAR_0->chars[VAR_0->nchars++] = *VAR_2;
  }
  VAR_2 = VAR_1++;
 }
 return VAR_1;
}
