
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_family; int sk_type; int sk_protocol; } ;
struct path {int dentry; } ;
struct inode {int dummy; } ;


 struct socket* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (char* const,int const,char*,...) ;

__attribute__((used)) static char *FUNC_3(const struct path *VAR_0, char * const VAR_1,
        const int VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_0->dentry);
 struct socket *VAR_4 = VAR_3 ? FUNC_0(VAR_3) : ((void*)0);
 struct sock *VAR_5 = VAR_4 ? VAR_4->sk : ((void*)0);

 if (VAR_5) {
  FUNC_2(VAR_1, VAR_2, "socket:[family=%u:type=%u:protocol=%u]",
    VAR_5->sk_family, VAR_5->sk_type, VAR_5->sk_protocol);
 } else {
  FUNC_2(VAR_1, VAR_2, "socket:[unknown]");
 }
 return VAR_1;
}
