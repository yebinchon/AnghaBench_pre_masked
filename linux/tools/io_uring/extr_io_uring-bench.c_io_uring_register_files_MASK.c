
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct submitter {unsigned int nr_files; int * fds; int ring_fd; TYPE_1__* files; } ;
typedef int __s32 ;
struct TYPE_2__ {unsigned int fixed_fd; int real_fd; } ;


 int VAR_0 ;
 int * FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int *,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct submitter *VAR_2)
{
 unsigned VAR_3;

 if (VAR_1)
  return 0;

 VAR_2->fds = FUNC_0(VAR_2->nr_files, sizeof(__s32));
 for (VAR_3 = 0; VAR_3 < VAR_2->nr_files; VAR_3++) {
  VAR_2->fds[VAR_3] = VAR_2->files[VAR_3].real_fd;
  VAR_2->files[VAR_3].fixed_fd = VAR_3;
 }

 return FUNC_1(VAR_2->ring_fd, VAR_0, VAR_2->fds,
     VAR_2->nr_files);
}
