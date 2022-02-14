
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_post {int is_large; int * mailbox_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipc_post*) ;
 void* FUNC_1 (int,int ) ;

int FUNC_2(struct ipc_post **VAR_3, bool VAR_4)
{
 struct ipc_post *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 if (VAR_4) {
  VAR_5->mailbox_data = FUNC_1(VAR_2, VAR_1);
  if (!VAR_5->mailbox_data) {
   FUNC_0(VAR_5);
   return -VAR_0;
  }
 } else {
  VAR_5->mailbox_data = ((void*)0);
 }
 VAR_5->is_large = VAR_4;
 *VAR_3 = VAR_5;
 return 0;
}
