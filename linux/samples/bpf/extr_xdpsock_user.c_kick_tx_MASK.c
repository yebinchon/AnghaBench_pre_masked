
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_socket_info {int xsk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int ,int ,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct xsk_socket_info *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(FUNC_2(VAR_5->xsk), ((void*)0), 0, VAR_3, ((void*)0), 0);
 if (VAR_6 >= 0 || VAR_4 == VAR_2 || VAR_4 == VAR_0 || VAR_4 == VAR_1)
  return;
 FUNC_0(VAR_4);
}
