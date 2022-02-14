
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_backed_buffer {size_t size; void* ptr; } ;
struct coro {int dummy; } ;
typedef int off_t ;


 scalar_t__ FUNC_0 (void*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (struct coro*,size_t) ;
 struct file_backed_buffer* FUNC_4 (struct coro*,int,int ) ;
 int FUNC_5 () ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int,int ) ;
 void* FUNC_7 (int *,size_t,int,int,int,int ) ;
 int FUNC_8 (void*,size_t) ;

__attribute__((used)) static void*
FUNC_9(struct coro *VAR_6, size_t VAR_7, bool VAR_8)
{
    struct file_backed_buffer *VAR_9;
    void *VAR_10 = (void *)VAR_0;
    int VAR_11;

    if (FUNC_0(VAR_7 < 1<<20)) {
        VAR_10 = FUNC_3(VAR_6, VAR_7);

        if (FUNC_0(VAR_10))
            return VAR_10;
    }

    if (FUNC_1(!VAR_8))
        return ((void*)0);

    VAR_11 = FUNC_5();
    if (FUNC_1(VAR_11 < 0))
        return ((void*)0);

    if (FUNC_1(FUNC_6(VAR_11, (off_t)VAR_7) < 0)) {
        FUNC_2(VAR_11);
        return ((void*)0);
    }

    if (VAR_1) {
        VAR_10 = FUNC_7(((void*)0), VAR_7, VAR_3 | VAR_4,
                   VAR_2 | VAR_1, VAR_11, 0);
    }
    if (FUNC_1(VAR_10 == VAR_0))
        VAR_10 = FUNC_7(((void*)0), VAR_7, VAR_3 | VAR_4, VAR_2, VAR_11, 0);
    FUNC_2(VAR_11);
    if (FUNC_1(VAR_10 == VAR_0))
        return ((void*)0);

    VAR_9 = FUNC_4(VAR_6, sizeof(*VAR_9), VAR_5);
    if (FUNC_1(!VAR_9)) {
        FUNC_8(VAR_10, VAR_7);
        return ((void*)0);
    }

    VAR_9->ptr = VAR_10;
    VAR_9->size = VAR_7;
    return VAR_10;
}
