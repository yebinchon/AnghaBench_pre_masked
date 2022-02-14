
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int request_rec ;
struct TYPE_3__ {int * r; } ;
typedef TYPE_1__ php_struct ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,size_t,int *) ;
 int FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static size_t
FUNC_3(const char *VAR_1, size_t VAR_2)
{
 request_rec *VAR_3;
 php_struct *VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 VAR_3 = VAR_4->r;

 if (FUNC_1(VAR_1, VAR_2, VAR_3) < 0) {
  FUNC_2();
 }

 return VAR_2;
}
