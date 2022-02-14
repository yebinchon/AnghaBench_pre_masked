
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ distance; scalar_t__ style; } ;
typedef TYPE_1__ RofiDistance ;



__attribute__((used)) static gboolean FUNC_0 ( RofiDistance VAR_0, RofiDistance VAR_1 )
{
    return VAR_0.type == VAR_1.type && VAR_0.distance == VAR_1.distance && VAR_0.style == VAR_1.style;
}
