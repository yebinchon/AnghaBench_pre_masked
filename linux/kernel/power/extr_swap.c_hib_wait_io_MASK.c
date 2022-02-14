
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hib_bio_batch {int error; int count; int wait; } ;
typedef int blk_status_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static blk_status_t FUNC_3(struct hib_bio_batch *VAR_0)
{
 FUNC_2(VAR_0->wait, FUNC_0(&VAR_0->count) == 0);
 return FUNC_1(VAR_0->error);
}
