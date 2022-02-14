
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;
struct pep_sock {int pipe_handle; int init_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pep_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_4, struct sockaddr *VAR_5, int VAR_6)
{
 struct pep_sock *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;
 u8 VAR_9[4] = { 0 , VAR_0, VAR_0, VAR_0 };

 if (VAR_7->pipe_handle == VAR_2)
  VAR_7->pipe_handle = 1;

 VAR_8 = FUNC_1(VAR_4, VAR_1,
    VAR_7->init_enable, VAR_9, 4);
 if (VAR_8) {
  VAR_7->pipe_handle = VAR_2;
  return VAR_8;
 }

 VAR_4->sk_state = VAR_3;

 return 0;
}
