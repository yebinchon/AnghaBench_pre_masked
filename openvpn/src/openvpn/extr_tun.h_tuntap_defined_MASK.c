
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {scalar_t__ fd; int * hand; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct tuntap *VAR_0)
{



    return VAR_0 && VAR_0->fd >= 0;

}
