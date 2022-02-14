
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rdSize; int * rdParm; int rdFunction; } ;
typedef int PHYSDEV ;
typedef TYPE_1__ METARECORD ;
typedef int INT16 ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;

__attribute__((used)) static BOOL FUNC_1( PHYSDEV VAR_1, INT16 VAR_2)
{
    METARECORD VAR_3;

    VAR_3.rdSize = sizeof VAR_3 / 2;
    VAR_3.rdFunction = VAR_0;
    VAR_3.rdParm[0] = VAR_2;

    return FUNC_0( VAR_1, &VAR_3, VAR_3.rdSize*2 );
}
