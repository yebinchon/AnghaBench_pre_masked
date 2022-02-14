
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_cs_queue {scalar_t__ volatile tail; int head; } ;
struct wined3d_cs {int dummy; } ;
typedef scalar_t__ LONG ;
typedef int BOOL ;


 int FUNC_0 (struct wined3d_cs const*) ;

__attribute__((used)) static BOOL FUNC_1(const struct wined3d_cs *VAR_0, const struct wined3d_cs_queue *VAR_1)
{
    FUNC_0(VAR_0);
    return *(volatile LONG *)&VAR_1->head == VAR_1->tail;
}
