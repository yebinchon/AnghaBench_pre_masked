
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_long ;
struct TYPE_3__ {int sb_socket; } ;
struct TYPE_4__ {TYPE_1__ m_sb; } ;
struct rtmp_stream {size_t total_bytes_sent; TYPE_2__ rtmp; int start_dts_offset; int new_socket_loop; } ;
struct encoder_packet {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtmp_stream*,size_t) ;
 int FUNC_3 (struct rtmp_stream*,size_t) ;
 int FUNC_4 (struct encoder_packet*,int ,int **,size_t*,int) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (struct encoder_packet*) ;

__attribute__((used)) static int FUNC_8(struct rtmp_stream *VAR_1,
         struct encoder_packet *VAR_2, bool VAR_3,
         size_t VAR_4)
{
 uint8_t *VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;

 if (!VAR_1->new_socket_loop) {




  VAR_8 = FUNC_5(VAR_1->rtmp.m_sb.sb_socket, VAR_0, &VAR_7);


  if (VAR_8 >= 0 && VAR_7 > 0) {
   if (!FUNC_2(VAR_1, (size_t)VAR_7))
    return -1;
  }
 }

 FUNC_4(VAR_2, VAR_3 ? 0 : VAR_1->start_dts_offset, &VAR_5,
         &VAR_6, VAR_3);





 VAR_8 = FUNC_0(&VAR_1->rtmp, (char *)VAR_5, (int)VAR_6, (int)VAR_4);
 FUNC_1(VAR_5);

 if (VAR_3)
  FUNC_1(VAR_2->data);
 else
  FUNC_7(VAR_2);

 VAR_1->total_bytes_sent += VAR_6;
 return VAR_8;
}
