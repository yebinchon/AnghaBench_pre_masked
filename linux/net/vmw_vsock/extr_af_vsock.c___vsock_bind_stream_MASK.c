
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sockaddr_vm {scalar_t__ svm_port; int svm_cid; } ;
struct vsock_sock {struct sockaddr_vm local_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct sockaddr_vm*) ;
 int FUNC_1 (int ,struct vsock_sock*) ;
 int FUNC_2 (struct vsock_sock*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sockaddr_vm*,int ,scalar_t__) ;
 int FUNC_6 (struct sockaddr_vm*) ;

__attribute__((used)) static int FUNC_7(struct vsock_sock *VAR_8,
          struct sockaddr_vm *VAR_9)
{
 static u32 VAR_10;
 struct sockaddr_vm VAR_11;

 if (!VAR_10)
  VAR_10 = VAR_4 + 1 +
   FUNC_4(VAR_6 - VAR_4);

 FUNC_5(&VAR_11, VAR_9->svm_cid, VAR_9->svm_port);

 if (VAR_9->svm_port == VAR_7) {
  bool VAR_12 = 0;
  unsigned int VAR_13;

  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   if (VAR_10 <= VAR_4)
    VAR_10 = VAR_4 + 1;

   VAR_11.svm_port = VAR_10++;

   if (!FUNC_0(&VAR_11)) {
    VAR_12 = 1;
    break;
   }
  }

  if (!VAR_12)
   return -VAR_3;
 } else {



  if (VAR_9->svm_port <= VAR_4 &&
      !FUNC_3(VAR_0)) {
   return -VAR_1;
  }

  if (FUNC_0(&VAR_11))
   return -VAR_2;
 }

 FUNC_5(&VAR_8->local_addr, VAR_11.svm_cid, VAR_11.svm_port);





 FUNC_2(VAR_8);
 FUNC_1(FUNC_6(&VAR_8->local_addr), VAR_8);

 return 0;
}
