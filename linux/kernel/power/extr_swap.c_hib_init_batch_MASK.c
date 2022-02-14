
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hib_bio_batch {int error; int wait; int count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hib_bio_batch *VAR_1)
{
 FUNC_0(&VAR_1->count, 0);
 FUNC_1(&VAR_1->wait);
 VAR_1->error = VAR_0;
}
