
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int cx; int cy; } ;
struct TYPE_5__ {int cx; int cy; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__* HIMAGELIST ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1( HIMAGELIST VAR_1, UINT VAR_2, SIZE *VAR_3 )
{
    VAR_3->cx = VAR_1->cx * VAR_0;
    VAR_3->cy = FUNC_0( VAR_2 ) * VAR_1->cy;
}
