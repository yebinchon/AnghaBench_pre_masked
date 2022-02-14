
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int float8 ;
struct TYPE_6__ {int y; } ;
struct TYPE_5__ {int y; } ;
struct TYPE_7__ {TYPE_2__ low; TYPE_1__ high; } ;
typedef TYPE_3__ BOX ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static float8
FUNC_1(BOX *VAR_0)
{
 return FUNC_0(VAR_0->high.y, VAR_0->low.y);
}
