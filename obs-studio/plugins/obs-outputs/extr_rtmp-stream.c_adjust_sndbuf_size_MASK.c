
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sb_socket; } ;
struct TYPE_4__ {TYPE_1__ m_sb; } ;
struct rtmp_stream {TYPE_2__ rtmp; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int*) ;
 int FUNC_1 (int ,int ,int ,char const*,int) ;

__attribute__((used)) static void FUNC_2(struct rtmp_stream *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3;
 socklen_t VAR_5 = sizeof(int);

 FUNC_0(VAR_2->rtmp.m_sb.sb_socket, VAR_0, VAR_1,
     (char *)&VAR_4, &VAR_5);

 if (VAR_4 < VAR_3) {
  VAR_4 = VAR_3;
  FUNC_1(VAR_2->rtmp.m_sb.sb_socket, VAR_0, VAR_1,
      (const char *)&VAR_4, VAR_5);
 }
}
