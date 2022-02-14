
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn {int sock; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void const*,size_t) ;

ssize_t FUNC_2(struct conn *VAR_0, const void *VAR_1, size_t VAR_2) {
    FUNC_0(VAR_0 != ((void*)0));
    return FUNC_1(VAR_0->sock, VAR_1, VAR_2);
}
