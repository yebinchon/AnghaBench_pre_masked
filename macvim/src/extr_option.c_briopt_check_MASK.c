
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char char_u ;
struct TYPE_2__ {char* w_p_briopt; int w_p_brishift; long w_p_brimin; int w_p_brisbr; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char) ;
 TYPE_1__* VAR_5 ;
 void* FUNC_2 (char**) ;

int
FUNC_3()
{
    char_u *VAR_6;
    int VAR_7 = 0;
    long VAR_8 = 20;
    int VAR_9 = VAR_1;

    VAR_6 = VAR_5->w_p_briopt;
    while (*VAR_6 != VAR_2)
    {
 if (FUNC_0(VAR_6, "shift:", 6) == 0
   && ((VAR_6[6] == '-' && FUNC_1(VAR_6[7])) || FUNC_1(VAR_6[6])))
 {
     VAR_6 += 6;
     VAR_7 = FUNC_2(&VAR_6);
 }
 else if (FUNC_0(VAR_6, "min:", 4) == 0 && FUNC_1(VAR_6[4]))
 {
     VAR_6 += 4;
     VAR_8 = FUNC_2(&VAR_6);
 }
 else if (FUNC_0(VAR_6, "sbr", 3) == 0)
 {
     VAR_6 += 3;
     VAR_9 = VAR_4;
 }
 if (*VAR_6 != ',' && *VAR_6 != VAR_2)
     return VAR_0;
 if (*VAR_6 == ',')
     ++VAR_6;
    }

    VAR_5->w_p_brishift = VAR_7;
    VAR_5->w_p_brimin = VAR_8;
    VAR_5->w_p_brisbr = VAR_9;

    return VAR_3;
}
