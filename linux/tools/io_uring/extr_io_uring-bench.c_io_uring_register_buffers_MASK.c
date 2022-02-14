
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submitter {int iovecs; int ring_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct submitter *VAR_3)
{
 if (VAR_2)
  return 0;

 return FUNC_0(VAR_3->ring_fd, VAR_1, VAR_3->iovecs,
     VAR_0);
}
