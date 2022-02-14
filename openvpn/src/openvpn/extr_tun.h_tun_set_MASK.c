
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {unsigned int rwflags_debug; } ;
struct event_set {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct event_set*,int ,unsigned int,void*) ;
 int FUNC_1 (struct tuntap*) ;
 int FUNC_2 (struct tuntap*,int ) ;
 scalar_t__ FUNC_3 (struct tuntap*) ;

__attribute__((used)) static inline void
FUNC_4(struct tuntap *VAR_1,
        struct event_set *VAR_2,
        unsigned int VAR_3,
        void *VAR_4,
        unsigned int *VAR_5)
{
    if (FUNC_3(VAR_1))
    {

        if (!VAR_5 || *VAR_5 != VAR_3)
        {
            FUNC_0(VAR_2, FUNC_1(VAR_1), VAR_3, VAR_4);
            if (VAR_5)
            {
                *VAR_5 = VAR_3;
            }
        }






        VAR_1->rwflags_debug = VAR_3;
    }
}
