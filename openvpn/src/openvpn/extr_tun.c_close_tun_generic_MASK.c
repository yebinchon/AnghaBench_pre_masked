
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {scalar_t__ fd; scalar_t__ actual_name; } ;


 int FUNC_0 (struct tuntap*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct tuntap *VAR_0)
{
    if (VAR_0->fd >= 0)
    {
        FUNC_1(VAR_0->fd);
    }
    if (VAR_0->actual_name)
    {
        FUNC_2(VAR_0->actual_name);
    }
    FUNC_0(VAR_0);
}
