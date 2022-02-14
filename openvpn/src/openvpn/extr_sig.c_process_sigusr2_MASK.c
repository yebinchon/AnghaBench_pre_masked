
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_output {int dummy; } ;
struct context {int sig; } ;


 int VAR_0 ;
 int FUNC_0 (struct context const*,struct status_output*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct status_output*) ;
 struct status_output* FUNC_3 (int *,int ,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_4(const struct context *VAR_1)
{
    struct status_output *VAR_2 = FUNC_3(((void*)0), 0, VAR_0, ((void*)0), 0);
    FUNC_0(VAR_1, VAR_2);
    FUNC_2(VAR_2);
    FUNC_1(VAR_1->sig);
}
