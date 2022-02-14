
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ring {scalar_t__ type; unsigned int rd_num; TYPE_1__* rd; } ;
struct pollfd {int fd; int events; scalar_t__ revents; } ;
struct TYPE_4__ {int block_status; } ;
struct block_desc {TYPE_2__ h1; } ;
typedef int pfd ;
struct TYPE_3__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct block_desc*) ;
 int FUNC_1 (struct block_desc*,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (struct pollfd*,int ,int) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*,int ) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (struct pollfd*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_10(int VAR_9, struct ring *VAR_10)
{
 unsigned int VAR_11 = 0;
 struct pollfd VAR_12;
 struct block_desc *VAR_13;
 int VAR_14[2];

 FUNC_2(VAR_10->type != VAR_1);

 FUNC_7(VAR_14, VAR_4);

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.fd = VAR_9;
 VAR_12.events = VAR_3 | VAR_2;
 VAR_12.revents = 0;

 FUNC_8(VAR_14, VAR_0);

 while (VAR_8 < VAR_0 * 2) {
  VAR_13 = (struct block_desc *) VAR_10->rd[VAR_11].iov_base;

  while ((VAR_13->h1.block_status & VAR_5) == 0)
   FUNC_9(&VAR_12, 1, 1);

  FUNC_1(VAR_13, VAR_11);
  FUNC_0(VAR_13);

  VAR_11 = (VAR_11 + 1) % VAR_10->rd_num;
 }

 FUNC_6(VAR_14);

 if (VAR_8 != 2 * VAR_0) {
  FUNC_4(VAR_6, "walk_v3_rx: received %u out of %u pkts\n",
   VAR_8, VAR_0);
  FUNC_3(1);
 }

 FUNC_4(VAR_6, " %u pkts (%u bytes)", VAR_0, VAR_7 >> 1);
}
