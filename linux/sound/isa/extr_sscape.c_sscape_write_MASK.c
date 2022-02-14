
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soundscape {int lock; int io_base; } ;
typedef enum GA_REG { ____Placeholder_GA_REG } GA_REG ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct soundscape *VAR_0, enum GA_REG VAR_1,
    unsigned char VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);
 FUNC_2(VAR_0->io_base, VAR_1, VAR_2);
 FUNC_1(&VAR_0->lock, VAR_3);
}
