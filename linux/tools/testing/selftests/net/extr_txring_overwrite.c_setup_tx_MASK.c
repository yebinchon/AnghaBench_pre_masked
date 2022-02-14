
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpacket_req {int tp_block_size; int tp_block_nr; int tp_frame_nr; void* tp_frame_size; } ;
struct sockaddr_ll {int sll_ifindex; int sll_protocol; int sll_family; } ;
typedef int req ;
typedef int laddr ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 int VAR_9 ;
 int FUNC_1 (int,int ,char*) ;
 void* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,int,int,int ,int,int ) ;
 scalar_t__ FUNC_6 (int,int ,int ,void*,int) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(char **VAR_10)
{
 struct sockaddr_ll VAR_11 = {};
 struct tpacket_req VAR_12 = {};
 int VAR_13;

 VAR_13 = FUNC_7(VAR_4, VAR_7, 0);
 if (VAR_13 == -1)
  FUNC_1(1, VAR_9, "socket t");

 VAR_11.sll_family = VAR_0;
 VAR_11.sll_protocol = FUNC_3(0);
 VAR_11.sll_ifindex = FUNC_4("lo");
 if (!VAR_11.sll_ifindex)
  FUNC_1(1, VAR_9, "if_nametoindex");

 if (FUNC_0(VAR_13, (void *)&VAR_11, sizeof(VAR_11)))
  FUNC_1(1, VAR_9, "bind fdt");

 VAR_12.tp_block_size = FUNC_2();
 VAR_12.tp_block_nr = 1;
 VAR_12.tp_frame_size = FUNC_2();
 VAR_12.tp_frame_nr = 1;

 if (FUNC_6(VAR_13, VAR_8, VAR_3,
         (void *)&VAR_12, sizeof(VAR_12)))
  FUNC_1(1, VAR_9, "setsockopt ring");

 *VAR_10 = FUNC_5(0, VAR_12.tp_block_size * VAR_12.tp_block_nr,
       VAR_5 | VAR_6, VAR_2, VAR_13, 0);
 if (*VAR_10 == VAR_1)
  FUNC_1(1, VAR_9, "mmap");

 return VAR_13;
}
