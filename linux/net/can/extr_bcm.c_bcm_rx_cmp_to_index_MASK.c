
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct canfd_frame {int flags; int len; } const canfd_frame ;
struct bcm_op {unsigned int cfsiz; int flags; struct canfd_frame const* last_frames; struct canfd_frame const* frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_op*,struct canfd_frame const*,struct canfd_frame const*) ;
 int FUNC_1 (struct canfd_frame const*,int) ;

__attribute__((used)) static void FUNC_2(struct bcm_op *VAR_2, unsigned int VAR_3,
    const struct canfd_frame *VAR_4)
{
 struct canfd_frame *VAR_5 = VAR_2->frames + VAR_2->cfsiz * VAR_3;
 struct canfd_frame *VAR_6 = VAR_2->last_frames + VAR_2->cfsiz * VAR_3;
 int VAR_7;






 if (!(VAR_6->flags & VAR_1)) {

  FUNC_0(VAR_2, VAR_6, VAR_4);
  return;
 }


 for (VAR_7 = 0; VAR_7 < VAR_4->len; VAR_7 += 8) {
  if ((FUNC_1(VAR_5, VAR_7) & FUNC_1(VAR_4, VAR_7)) !=
      (FUNC_1(VAR_5, VAR_7) & FUNC_1(VAR_6, VAR_7))) {
   FUNC_0(VAR_2, VAR_6, VAR_4);
   return;
  }
 }

 if (VAR_2->flags & VAR_0) {

  if (VAR_4->len != VAR_6->len) {
   FUNC_0(VAR_2, VAR_6, VAR_4);
   return;
  }
 }
}
