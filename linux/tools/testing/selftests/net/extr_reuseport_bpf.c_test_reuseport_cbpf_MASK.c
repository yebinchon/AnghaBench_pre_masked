
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_params {int recv_socks; int send_port_min; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct test_params,int*,int,int (*) (int,int)) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_4 (struct test_params,int*,int) ;

__attribute__((used)) static void FUNC_5(struct test_params VAR_1)
{
 int VAR_2, VAR_3[VAR_1.recv_socks];

 FUNC_3(VAR_0, "Testing CBPF mod %d...\n", VAR_1.recv_socks);
 FUNC_1(VAR_1, VAR_3, VAR_1.recv_socks, FUNC_0);
 FUNC_4(VAR_1, VAR_3, VAR_1.recv_socks);

 VAR_1.send_port_min += VAR_1.recv_socks * 2;
 FUNC_3(VAR_0, "Reprograming, testing mod %d...\n", VAR_1.recv_socks / 2);
 FUNC_0(VAR_3[0], VAR_1.recv_socks / 2);
 FUNC_4(VAR_1, VAR_3, VAR_1.recv_socks / 2);

 for (VAR_2 = 0; VAR_2 < VAR_1.recv_socks; ++VAR_2)
  FUNC_2(VAR_3[VAR_2]);
}
