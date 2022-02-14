
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* tcp_port_rdp; } ;
typedef TYPE_1__ RDPCLIENT ;


 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ) ;
 void* FUNC_3 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_4(RDPCLIENT * VAR_0, char *VAR_1)
{
 char *VAR_2;
 VAR_2 = FUNC_0(VAR_1, ':');
 if (VAR_2 != ((void*)0))
 {
  VAR_0->tcp_port_rdp = FUNC_3(VAR_2 + 1, ((void*)0), 10);
  *VAR_2 = 0;
 }


}
