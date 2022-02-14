
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Mutex; } ;
typedef TYPE_1__* PAFD_FCB ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int,int *) ;
 int VAR_2 ;

BOOLEAN FUNC_1( PAFD_FCB VAR_3 ) {
    if( !VAR_3 ) return VAR_1;

    return !FUNC_0(&VAR_3->Mutex,
                                 VAR_0,
                                 VAR_2,
                                 VAR_1,
                                 ((void*)0));
}
