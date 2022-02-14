
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sock_ops {int local_port; int reply; scalar_t__ op; int remote_port; } ;
typedef int iw ;
typedef int bufsize ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct bpf_sock_ops*,int ,int ,int*,int) ;

int FUNC_3(struct bpf_sock_ops *VAR_5)
{
 int VAR_6 = 1500000;
 int VAR_7 = 40;
 int VAR_8 = 40;
 int VAR_9 = 0;
 int VAR_10;




 if (FUNC_0(VAR_5->remote_port) != 55601 &&
     VAR_5->local_port != 55601) {
  VAR_5->reply = -1;
  return 1;
 }

 VAR_10 = (int) VAR_5->op;
 switch (VAR_10) {
 case 129:
  VAR_9 = VAR_7;
  break;
 case 128:

  VAR_9 = FUNC_2(VAR_5, VAR_0, VAR_3, &VAR_6,
        sizeof(VAR_6));
  VAR_9 += FUNC_2(VAR_5, VAR_0, VAR_2,
         &VAR_6, sizeof(VAR_6));
  break;
 case 131:
  VAR_9 = FUNC_2(VAR_5, VAR_1, VAR_4, &VAR_8,
        sizeof(VAR_8));
  break;
 case 130:

  VAR_9 = FUNC_2(VAR_5, VAR_0, VAR_3, &VAR_6,
        sizeof(VAR_6));
  VAR_9 += FUNC_2(VAR_5, VAR_0, VAR_2,
          &VAR_6, sizeof(VAR_6));
  break;
 default:
  VAR_9 = -1;
 }



 VAR_5->reply = VAR_9;
 return 1;
}
