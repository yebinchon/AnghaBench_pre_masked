
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_timestamping {int * ts; } ;





 int FUNC_0 (char const*,int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct scm_timestamping *VAR_2, int VAR_3,
       int VAR_4, int VAR_5)
{
 const char *VAR_6;

 FUNC_2(VAR_4, VAR_3);

 switch (VAR_3) {
 case 129:
  VAR_6 = "  ENQ";
  FUNC_3(&VAR_2->ts[0], 0);
  break;
 case 128:
  VAR_6 = "  SND";
  FUNC_3(&VAR_2->ts[0], VAR_1);
  break;
 case 130:
  VAR_6 = "  ACK";
  FUNC_3(&VAR_2->ts[0], VAR_0);
  break;
 default:
  FUNC_1(1, 0, "unknown timestamp type: %u",
  VAR_3);
 }
 FUNC_0(VAR_6, &VAR_2->ts[0], VAR_4, VAR_5);
}
