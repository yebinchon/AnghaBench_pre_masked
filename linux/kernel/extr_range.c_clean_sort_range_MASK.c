
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range {scalar_t__ end; scalar_t__ start; } ;


 int VAR_0 ;
 int FUNC_0 (struct range*,int,int,int ,int *) ;

int FUNC_1(struct range *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = VAR_2 - 1, VAR_6 = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  if (VAR_1[VAR_3].end)
   continue;
  for (VAR_4 = VAR_5; VAR_4 > VAR_3; VAR_4--) {
   if (VAR_1[VAR_4].end) {
    VAR_5 = VAR_4;
    break;
   }
  }
  if (VAR_4 == VAR_3)
   break;
  VAR_1[VAR_3].start = VAR_1[VAR_5].start;
  VAR_1[VAR_3].end = VAR_1[VAR_5].end;
  VAR_1[VAR_5].start = 0;
  VAR_1[VAR_5].end = 0;
  VAR_5--;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (!VAR_1[VAR_3].end) {
   VAR_6 = VAR_3;
   break;
  }
 }


 FUNC_0(VAR_1, VAR_6, sizeof(struct range), VAR_0, ((void*)0));

 return VAR_6;
}
