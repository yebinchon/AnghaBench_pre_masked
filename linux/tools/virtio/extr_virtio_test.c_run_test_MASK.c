
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vq_info {int vq; } ;
struct vdev_info {int control; scalar_t__ buf; int buf_size; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,long long) ;
 int FUNC_2 (int ,int ,int*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct scatterlist*,scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,struct scatterlist*,int,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,unsigned int*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct vdev_info*) ;

__attribute__((used)) static void FUNC_13(struct vdev_info *VAR_3, struct vq_info *VAR_4,
       bool VAR_5, int VAR_6)
{
 struct scatterlist VAR_7;
 long VAR_8 = 0, VAR_9 = 0;
 long VAR_10;
 int VAR_11, VAR_12 = 1;
 unsigned VAR_13;
 long long VAR_14 = 0;
 VAR_11 = FUNC_2(VAR_3->control, VAR_1, &VAR_12);
 FUNC_0(VAR_11 >= 0);
 for (;;) {
  FUNC_7(VAR_4->vq);
  VAR_10 = VAR_9;
  do {
   if (VAR_8 < VAR_6) {
    FUNC_4(&VAR_7, VAR_3->buf, VAR_3->buf_size);
    VAR_11 = FUNC_6(VAR_4->vq, &VAR_7, 1,
        VAR_3->buf + VAR_8,
        VAR_0);
    if (FUNC_3(VAR_11 == 0)) {
     ++VAR_8;
     if (FUNC_5(!FUNC_11(VAR_4->vq)))
      VAR_11 = -1;
    }
   } else
    VAR_11 = -1;


   if (FUNC_10(VAR_4->vq, &VAR_13)) {
    ++VAR_9;
    VAR_11 = 0;
   }

  } while (VAR_11 == 0);
  if (VAR_9 == VAR_10)
   ++VAR_14;
  FUNC_0(VAR_9 <= VAR_6);
  FUNC_0(VAR_8 <= VAR_6);
  if (VAR_9 == VAR_6)
   break;
  if (VAR_5) {
   if (FUNC_9(VAR_4->vq))
    FUNC_12(VAR_3);
  } else {
   if (FUNC_8(VAR_4->vq))
    FUNC_12(VAR_3);
  }
 }
 VAR_12 = 0;
 VAR_11 = FUNC_2(VAR_3->control, VAR_1, &VAR_12);
 FUNC_0(VAR_11 >= 0);
 FUNC_1(VAR_2, "spurious wakeups: 0x%llx\n", VAR_14);
}
