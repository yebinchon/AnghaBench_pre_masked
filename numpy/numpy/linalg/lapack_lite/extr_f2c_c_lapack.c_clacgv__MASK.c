
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int integer ;
struct TYPE_5__ {int i; int r; } ;
typedef TYPE_1__ complex ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

int FUNC_1(integer *VAR_0, complex *VAR_1, integer *VAR_2)
{

    integer VAR_3, VAR_4;
    complex VAR_5;


    static integer VAR_6, VAR_7;
    --VAR_1;


    if (*VAR_2 == 1) {
 VAR_3 = *VAR_0;
 for (VAR_6 = 1; VAR_6 <= VAR_3; ++VAR_6) {
     VAR_4 = VAR_6;
     FUNC_0(&VAR_5, &VAR_1[VAR_6]);
     VAR_1[VAR_4].r = VAR_5, VAR_1[VAR_4].i = VAR_5;

 }
    } else {
 VAR_7 = 1;
 if (*VAR_2 < 0) {
     VAR_7 = 1 - (*VAR_0 - 1) * *VAR_2;
 }
 VAR_3 = *VAR_0;
 for (VAR_6 = 1; VAR_6 <= VAR_3; ++VAR_6) {
     VAR_4 = VAR_7;
     FUNC_0(&VAR_5, &VAR_1[VAR_7]);
     VAR_1[VAR_4].r = VAR_5, VAR_1[VAR_4].i = VAR_5;
     VAR_7 += *VAR_2;

 }
    }
    return 0;



}
