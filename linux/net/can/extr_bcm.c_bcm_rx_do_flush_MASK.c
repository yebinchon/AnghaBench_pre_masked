
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct canfd_frame {int flags; } ;
struct bcm_op {unsigned int cfsiz; struct canfd_frame* last_frames; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_op*,struct canfd_frame*) ;

__attribute__((used)) static inline int FUNC_1(struct bcm_op *VAR_1, unsigned int VAR_2)
{
 struct canfd_frame *VAR_3 = VAR_1->last_frames + VAR_1->cfsiz * VAR_2;

 if ((VAR_1->last_frames) && (VAR_3->flags & VAR_0)) {
  FUNC_0(VAR_1, VAR_3);
  return 1;
 }
 return 0;
}
