
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sending; int * dw_buffer; } ;


 scalar_t__ FUNC_0 (struct socket*) ;

__attribute__((used)) static inline int
FUNC_1(struct socket *VAR_0) {
 return FUNC_0(VAR_0) && VAR_0->dw_buffer == ((void*)0) && (VAR_0->sending & 0xffff) == 0;
}
