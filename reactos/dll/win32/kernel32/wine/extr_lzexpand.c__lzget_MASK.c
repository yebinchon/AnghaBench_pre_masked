
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzstate {int getcur; int getlen; int * get; int realfd; } ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct lzstate *VAR_2,BYTE *VAR_3) {
 if (VAR_2->getcur<VAR_2->getlen) {
  *VAR_3 = VAR_2->get[VAR_2->getcur++];
  return 1;
 } else {
  int VAR_4 = FUNC_0(VAR_2->realfd,VAR_2->get,VAR_0);
  if (VAR_4==VAR_1)
   return VAR_1;
  if (VAR_4==0)
   return 0;
  VAR_2->getlen = VAR_4;
  VAR_2->getcur = 1;
  *VAR_3 = *(VAR_2->get);
  return 1;
 }
}
