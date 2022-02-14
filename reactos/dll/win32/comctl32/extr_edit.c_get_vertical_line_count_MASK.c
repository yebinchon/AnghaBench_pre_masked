
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bottom; int top; } ;
struct TYPE_5__ {int line_height; TYPE_1__ format_rect; } ;
typedef int INT ;
typedef TYPE_2__ EDITSTATE ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline INT FUNC_1(EDITSTATE *VAR_0)
{
 INT VAR_1 = (VAR_0->format_rect.bottom - VAR_0->format_rect.top) / VAR_0->line_height;
 return FUNC_0(1,VAR_1);
}
