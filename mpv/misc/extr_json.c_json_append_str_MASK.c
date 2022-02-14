
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mpv_node {int dummy; } ;
struct TYPE_4__ {char* start; } ;
typedef TYPE_1__ bstr ;


 TYPE_1__ FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,struct mpv_node*,int) ;

__attribute__((used)) static int FUNC_2(char **VAR_0, struct mpv_node *VAR_1, int VAR_2)
{
    bstr VAR_3 = FUNC_0(*VAR_0);
    int VAR_4 = FUNC_1(&VAR_3, VAR_1, VAR_2);
    *VAR_0 = VAR_3.start;
    return VAR_4;
}
