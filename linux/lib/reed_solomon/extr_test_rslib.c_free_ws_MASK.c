
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wspace {struct wspace* c; struct wspace* errlocs; } ;


 int FUNC_0 (struct wspace*) ;

__attribute__((used)) static void FUNC_1(struct wspace *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->errlocs);
 FUNC_0(VAR_0->c);
 FUNC_0(VAR_0);
}
