
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int sb_socket; } ;
struct TYPE_4__ {TYPE_1__ m_sb; } ;
struct rtmp_stream {TYPE_2__ rtmp; } ;
typedef int ssize_t ;
typedef TYPE_2__ RTMP ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,size_t,int ) ;

__attribute__((used)) static bool FUNC_3(struct rtmp_stream *VAR_2, size_t VAR_3)
{
 RTMP *VAR_4 = &VAR_2->rtmp;
 uint8_t VAR_5[512];



 ssize_t VAR_6;


 do {
  size_t VAR_7 = VAR_3 > 512 ? 512 : VAR_3;
  VAR_3 -= VAR_7;




  VAR_6 = FUNC_2(VAR_4->m_sb.sb_socket, VAR_5, VAR_7, 0);


  if (VAR_6 <= 0) {



   int VAR_8 = VAR_1;

   if (VAR_6 < 0) {
    FUNC_1(VAR_0, "recv error: %d (%d bytes)",
           VAR_8, (int)VAR_3);
   }
   return 0;
  }
 } while (VAR_3 > 0);

 return 1;
}
