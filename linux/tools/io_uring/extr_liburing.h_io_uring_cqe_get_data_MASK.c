
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_cqe {scalar_t__ user_data; } ;



__attribute__((used)) static inline void *FUNC_0(struct io_uring_cqe *VAR_0)
{
 return (void *) (uintptr_t) VAR_0->user_data;
}
