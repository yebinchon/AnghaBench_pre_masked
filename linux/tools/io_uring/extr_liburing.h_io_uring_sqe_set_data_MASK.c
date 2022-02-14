
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {unsigned long user_data; } ;



__attribute__((used)) static inline void FUNC_0(struct io_uring_sqe *VAR_0, void *VAR_1)
{
 VAR_0->user_data = (unsigned long) VAR_1;
}
