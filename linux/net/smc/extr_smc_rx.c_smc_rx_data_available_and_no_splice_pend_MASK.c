
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_connection {int splice_pending; int bytes_to_rcv; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct smc_connection *VAR_0)
{
 return FUNC_0(&VAR_0->bytes_to_rcv) &&
        !FUNC_0(&VAR_0->splice_pending);
}
