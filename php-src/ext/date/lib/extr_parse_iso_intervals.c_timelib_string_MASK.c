
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tok; scalar_t__ cur; } ;
typedef TYPE_1__ Scanner ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 char* FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static char *FUNC_2(Scanner *VAR_0)
{
 char *VAR_1 = FUNC_1(1, VAR_0->cur - VAR_0->tok + 1);
 FUNC_0(VAR_1, VAR_0->tok, VAR_0->cur - VAR_0->tok);

 return VAR_1;
}
