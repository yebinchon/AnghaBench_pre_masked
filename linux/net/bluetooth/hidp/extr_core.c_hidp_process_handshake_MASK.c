
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int output_report_success; int report_queue; int flags; } ;


 int FUNC_0 (char*,struct hidp_session*,unsigned char) ;
 int const VAR_0 ;







 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hidp_session*,int const,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hidp_session *VAR_5,
     unsigned char VAR_6)
{
 FUNC_0("session %p param 0x%02x", VAR_5, VAR_6);
 VAR_5->output_report_success = 0;

 switch (VAR_6) {
 case 128:

  VAR_5->output_report_success = 1;
  break;

 case 129:
 case 132:
 case 130:
 case 133:
  if (FUNC_2(VAR_3, &VAR_5->flags))
   FUNC_3(&VAR_5->report_queue);


  break;

 case 131:
  break;

 case 134:


  FUNC_1(VAR_5,
   VAR_2 | VAR_0, ((void*)0), 0);
  break;

 default:
  FUNC_1(VAR_5,
   VAR_1 | 133, ((void*)0), 0);
  break;
 }


 if (FUNC_2(VAR_4, &VAR_5->flags))
  FUNC_3(&VAR_5->report_queue);
}
