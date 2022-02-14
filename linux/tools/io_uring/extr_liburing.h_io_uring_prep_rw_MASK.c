
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {int opcode; int fd; unsigned long addr; unsigned int len; int off; } ;
typedef int off_t ;


 int FUNC_0 (struct io_uring_sqe*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(int VAR_0, struct io_uring_sqe *VAR_1, int VAR_2,
        const void *VAR_3, unsigned VAR_4,
        off_t VAR_5)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->opcode = VAR_0;
 VAR_1->fd = VAR_2;
 VAR_1->off = VAR_5;
 VAR_1->addr = (unsigned long) VAR_3;
 VAR_1->len = VAR_4;
}
