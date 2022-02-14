
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_handler; int member_0; } ;


 int FUNC_0 (int,int ,struct sigaction*) ;

__attribute__((used)) static bool FUNC_1(int VAR_0)
{
    struct sigaction VAR_1 = { 0 };
    FUNC_0(VAR_0, 0, &VAR_1);
    return VAR_1.sa_handler != 0;
}
