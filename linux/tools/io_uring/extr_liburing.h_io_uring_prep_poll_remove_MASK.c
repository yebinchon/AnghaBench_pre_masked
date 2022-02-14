
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {unsigned long addr; int opcode; } ;


 int VAR_0 ;
 int FUNC_0 (struct io_uring_sqe*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct io_uring_sqe *VAR_1,
          void *VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->opcode = VAR_0;
 VAR_1->addr = (unsigned long) VAR_2;
}
