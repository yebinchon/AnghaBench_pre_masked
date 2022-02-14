
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_pcb {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct tcp_pcb*,int ,int ) ;
 int FUNC_6 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(struct tcp_pcb *VAR_4, char* VAR_5, size_t VAR_6)
{
    FUNC_0("Handling POST");
    if (FUNC_7(VAR_5 + 5, "/setwifi ", 9) == 0)
    {
      char* VAR_7=FUNC_8(VAR_5, "\r\n\r\n");
      char *VAR_8 = FUNC_8(VAR_5, "Content-Length: ");
      if( VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
      {
        FUNC_5(VAR_4, VAR_3, FUNC_2(VAR_3));
        return;
      }
      int VAR_9 = FUNC_3(VAR_8 + 16);
      VAR_7 += 4;
      switch (FUNC_4(VAR_7, VAR_9))
      {
        case 0: {

            FUNC_6(VAR_7, VAR_9);

          FUNC_5(VAR_4, VAR_2, FUNC_2(VAR_2));
          break;
        }
        case 1:
          FUNC_5(VAR_4, VAR_3, FUNC_2(VAR_3));
          break;
        default:
          FUNC_1("http_recvcb failed. Failed to handle wifi credentials.", VAR_1, VAR_0);
          break;
      }
    }
}
