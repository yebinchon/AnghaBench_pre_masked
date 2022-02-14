
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_platform {int context; int * display; } ;
typedef int Display ;


 int VAR_0 ;
 int FUNC_0 (struct gl_platform*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct gl_platform *VAR_1)
{
 Display *VAR_2 = VAR_1->display;

 FUNC_2(VAR_2, VAR_0, VAR_0, ((void*)0));
 FUNC_1(VAR_2, VAR_1->context);
 FUNC_0(VAR_1);
}
