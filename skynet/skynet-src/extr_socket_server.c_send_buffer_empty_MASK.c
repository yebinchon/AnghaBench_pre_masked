
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * head; } ;
struct TYPE_3__ {int * head; } ;
struct socket {TYPE_2__ low; TYPE_1__ high; } ;



__attribute__((used)) static inline int
FUNC_0(struct socket *VAR_0) {
 return (VAR_0->high.head == ((void*)0) && VAR_0->low.head == ((void*)0));
}
