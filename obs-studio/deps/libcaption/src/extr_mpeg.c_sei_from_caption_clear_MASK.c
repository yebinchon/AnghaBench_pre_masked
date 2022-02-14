
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timestamp; } ;
typedef TYPE_1__ sei_t ;
typedef int libcaption_stauts_t ;
typedef int cea708_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int *) ;

libcaption_stauts_t FUNC_4(sei_t* VAR_6)
{
    cea708_t VAR_7;
    FUNC_1(&VAR_7, VAR_6->timestamp);
    FUNC_0(&VAR_7, 1, VAR_2, FUNC_2(VAR_3, VAR_0));
    FUNC_0(&VAR_7, 1, VAR_2, FUNC_2(VAR_3, VAR_0));
    FUNC_0(&VAR_7, 1, VAR_2, FUNC_2(VAR_5, VAR_0));
    FUNC_0(&VAR_7, 1, VAR_2, FUNC_2(VAR_5, VAR_0));
    FUNC_0(&VAR_7, 1, VAR_2, FUNC_2(VAR_4, VAR_0));
    FUNC_0(&VAR_7, 1, VAR_2, FUNC_2(VAR_4, VAR_0));
    FUNC_3(VAR_6, &VAR_7);
    return VAR_1;
}
