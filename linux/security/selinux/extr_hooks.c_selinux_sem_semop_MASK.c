
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sembuf {int dummy; } ;
struct kern_ipc_perm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kern_ipc_perm*,int) ;

__attribute__((used)) static int FUNC_1(struct kern_ipc_perm *VAR_2,
        struct sembuf *VAR_3, unsigned VAR_4, int VAR_5)
{
 u32 VAR_6;

 if (VAR_5)
  VAR_6 = VAR_0 | VAR_1;
 else
  VAR_6 = VAR_0;

 return FUNC_0(VAR_2, VAR_6);
}
