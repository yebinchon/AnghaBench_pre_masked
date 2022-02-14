
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring_sqe {int fd; unsigned int fsync_flags; int opcode; } ;


 int VAR_0 ;
 int FUNC_0 (struct io_uring_sqe*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct io_uring_sqe *VAR_1, int VAR_2,
           unsigned VAR_3)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->opcode = VAR_0;
 VAR_1->fd = VAR_2;
 VAR_1->fsync_flags = VAR_3;
}
