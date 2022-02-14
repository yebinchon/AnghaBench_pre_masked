
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ conn; int flags; } ;
struct web_client {int ofd; TYPE_1__ ssl; } ;
typedef int ssize_t ;


 int FUNC_0 (scalar_t__,void const*,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,void const*,size_t,int) ;
 int FUNC_2 (struct web_client*) ;

__attribute__((used)) static inline ssize_t FUNC_3(struct web_client *VAR_1,const void *VAR_2,size_t VAR_3, int VAR_4)
{
    ssize_t VAR_5;
    VAR_5 = FUNC_1(VAR_1->ofd, VAR_2, VAR_3, VAR_4);


    return VAR_5;
}
