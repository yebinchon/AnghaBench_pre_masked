
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao {int format; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct ao *VAR_4)
{
    int VAR_5;

    switch (VAR_4->format) {
    case 128:
        VAR_5 = VAR_3;
        break;
    case 129:
        VAR_5 = VAR_2;
        break;
    default:
        VAR_5 = VAR_1;
        VAR_4->format = VAR_0;
    }

    return VAR_5;
}
