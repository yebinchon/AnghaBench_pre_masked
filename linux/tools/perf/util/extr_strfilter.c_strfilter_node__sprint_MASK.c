
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strfilter_node {int* p; int r; int l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct strfilter_node *VAR_2, char *VAR_3)
{
 int VAR_4 = 0, VAR_5;

 if (!VAR_2 || !VAR_2->p)
  return -VAR_0;

 switch (*VAR_2->p) {
 case '|':
 case '&':
  VAR_4 = FUNC_1(VAR_2->l, VAR_3);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_1;
 case '!':
  if (VAR_3) {
   *(VAR_3 + VAR_4++) = *VAR_2->p;
   VAR_3 += VAR_4;
  } else
   VAR_4++;
  VAR_5 = FUNC_1(VAR_2->r, VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_4 += VAR_5;
  break;
 default:
  VAR_4 = FUNC_2(VAR_2->p);
  if (VAR_3)
   FUNC_0(VAR_3, VAR_2->p);
 }

 return VAR_4;
}
