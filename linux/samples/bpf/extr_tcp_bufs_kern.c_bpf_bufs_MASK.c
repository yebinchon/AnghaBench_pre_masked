
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sock_ops {int local_port; int reply; scalar_t__ op; int remote_port; } ;
typedef int bufsize ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct bpf_sock_ops*,int ,int ,int*,int) ;

int FUNC_3(struct bpf_sock_ops *VAR_3)
{
 int VAR_4 = 1500000;
 int VAR_5 = 40;
 int VAR_6 = 0;
 int VAR_7;




 if (FUNC_0(VAR_3->remote_port) != 55601 &&
     VAR_3->local_port != 55601) {
  VAR_3->reply = -1;
  return 1;
 }

 VAR_7 = (int) VAR_3->op;
 switch (VAR_7) {
 case 129:
  VAR_6 = VAR_5;
  break;
 case 128:

  VAR_6 = FUNC_2(VAR_3, VAR_0, VAR_2, &VAR_4,
        sizeof(VAR_4));
  VAR_6 += FUNC_2(VAR_3, VAR_0, VAR_1,
         &VAR_4, sizeof(VAR_4));
  break;
 case 131:

  break;
 case 130:

  VAR_6 = FUNC_2(VAR_3, VAR_0, VAR_2, &VAR_4,
        sizeof(VAR_4));
  VAR_6 += FUNC_2(VAR_3, VAR_0, VAR_1,
         &VAR_4, sizeof(VAR_4));
  break;
 default:
  VAR_6 = -1;
 }



 VAR_3->reply = VAR_6;
 return 1;
}
