
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nscookie {int oldns; int newns; scalar_t__ oldcwd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__*) ;

void FUNC_5(struct nscookie *VAR_1)
{
 if (VAR_1 == ((void*)0) || VAR_1->oldns == -1 || VAR_1->newns == -1 || !VAR_1->oldcwd)
  return;

 FUNC_3(VAR_1->oldns, VAR_0);

 if (VAR_1->oldcwd) {
  FUNC_0(FUNC_1(VAR_1->oldcwd));
  FUNC_4(&VAR_1->oldcwd);
 }

 if (VAR_1->oldns > -1) {
  FUNC_2(VAR_1->oldns);
  VAR_1->oldns = -1;
 }

 if (VAR_1->newns > -1) {
  FUNC_2(VAR_1->newns);
  VAR_1->newns = -1;
 }
}
