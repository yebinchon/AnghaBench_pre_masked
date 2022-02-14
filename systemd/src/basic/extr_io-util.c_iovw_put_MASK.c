
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec_wrapper {scalar_t__ count; int * iovec; int size_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (void*,size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;

int FUNC_3(struct iovec_wrapper *VAR_2, void *VAR_3, size_t VAR_4) {
        if (VAR_2->count >= VAR_1)
                return -VAR_0;

        if (!FUNC_0(VAR_2->iovec, VAR_2->size_bytes, VAR_2->count + 1))
                return FUNC_2();

        VAR_2->iovec[VAR_2->count++] = FUNC_1(VAR_3, VAR_4);
        return 0;
}
