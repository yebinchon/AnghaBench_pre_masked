
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_timestamp_query {scalar_t__ context; } ;
struct wined3d_query {int dummy; } ;


 int FUNC_0 (struct wined3d_timestamp_query*) ;
 int FUNC_1 (struct wined3d_timestamp_query*) ;
 struct wined3d_timestamp_query* FUNC_2 (struct wined3d_query*) ;

__attribute__((used)) static void FUNC_3(struct wined3d_query *VAR_0)
{
    struct wined3d_timestamp_query *VAR_1 = FUNC_2(VAR_0);

    if (VAR_1->context)
        FUNC_0(VAR_1);
    FUNC_1(VAR_1);
}
