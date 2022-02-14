
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct fd {int flags; scalar_t__ file; } ;


 int VAR_0 ;
 struct fd FUNC_0 (int) ;
 int FUNC_1 (struct fd) ;
 scalar_t__ FUNC_2 (struct socket*) ;
 struct socket* FUNC_3 (scalar_t__,int*) ;

__attribute__((used)) static struct socket *FUNC_4(int VAR_1, int *VAR_2, int *VAR_3)
{
 struct fd VAR_4 = FUNC_0(VAR_1);
 struct socket *VAR_5;

 *VAR_2 = -VAR_0;
 if (VAR_4.file) {
  VAR_5 = FUNC_3(VAR_4.file, VAR_2);
  if (FUNC_2(VAR_5)) {
   *VAR_3 = VAR_4.flags;
   return VAR_5;
  }
  FUNC_1(VAR_4);
 }
 return ((void*)0);
}
