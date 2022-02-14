
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_socket {int xsks_map_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int ) ;
 int FUNC_1 (struct xsk_socket*) ;

__attribute__((used)) static int FUNC_2(struct xsk_socket *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = FUNC_0(VAR_0, "xsks_map",
     sizeof(int), sizeof(int), VAR_2, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->xsks_map_fd = VAR_3;

 return 0;
}
