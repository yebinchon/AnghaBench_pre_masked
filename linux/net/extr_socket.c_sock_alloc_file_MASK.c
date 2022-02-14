
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct file* file; TYPE_2__* sk; } ;
struct file {struct socket* private_data; } ;
struct TYPE_4__ {TYPE_1__* sk_prot_creator; } ;
struct TYPE_3__ {char* name; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct socket*) ;
 struct file* FUNC_2 (int ,int ,char const*,int,int *) ;
 int VAR_2 ;
 int FUNC_3 (struct socket*) ;
 int VAR_3 ;

struct file *FUNC_4(struct socket *VAR_4, int VAR_5, const char *VAR_6)
{
 struct file *VAR_7;

 if (!VAR_6)
  VAR_6 = VAR_4->sk ? VAR_4->sk->sk_prot_creator->name : "";

 VAR_7 = FUNC_2(FUNC_1(VAR_4), VAR_2, VAR_6,
    VAR_1 | (VAR_5 & VAR_0),
    &VAR_3);
 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_4);
  return VAR_7;
 }

 VAR_4->file = VAR_7;
 VAR_7->private_data = VAR_4;
 return VAR_7;
}
