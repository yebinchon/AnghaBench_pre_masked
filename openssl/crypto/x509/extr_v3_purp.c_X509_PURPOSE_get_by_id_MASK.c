
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int purpose; } ;
typedef TYPE_1__ X509_PURPOSE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int * VAR_3 ;

int FUNC_1(int VAR_4)
{
    X509_PURPOSE VAR_5;
    int VAR_6;

    if ((VAR_4 >= VAR_2) && (VAR_4 <= VAR_1))
        return VAR_4 - VAR_2;
    if (VAR_3 == ((void*)0))
        return -1;
    VAR_5.purpose = VAR_4;
    VAR_6 = FUNC_0(VAR_3, &VAR_5);
    if (VAR_6 < 0)
        return -1;
    return VAR_6 + VAR_0;
}
