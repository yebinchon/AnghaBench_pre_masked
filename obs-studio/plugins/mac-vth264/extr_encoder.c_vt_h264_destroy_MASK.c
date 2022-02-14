
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_h264_encoder {int extra_data; int packet_data; int * session; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vt_h264_encoder*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct vt_h264_encoder *VAR_1 = VAR_0;

 if (VAR_1) {
  if (VAR_1->session != ((void*)0)) {
   FUNC_1(VAR_1->session);
   FUNC_0(VAR_1->session);
  }
  FUNC_3(VAR_1->packet_data);
  FUNC_3(VAR_1->extra_data);
  FUNC_2(VAR_1);
 }
}
