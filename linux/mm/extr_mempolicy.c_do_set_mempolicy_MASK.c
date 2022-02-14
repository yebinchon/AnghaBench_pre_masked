
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mempolicy {scalar_t__ mode; } ;
typedef int nodemask_t ;
struct TYPE_4__ {scalar_t__ il_prev; struct mempolicy* mempolicy; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (struct mempolicy*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mempolicy*) ;
 TYPE_1__* VAR_3 ;
 struct mempolicy* FUNC_4 (unsigned short,unsigned short,int *) ;
 int FUNC_5 (struct mempolicy*) ;
 int FUNC_6 (struct mempolicy*,int *,int ) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static long FUNC_9(unsigned short VAR_5, unsigned short VAR_6,
        nodemask_t *VAR_7)
{
 struct mempolicy *VAR_8, *VAR_9;
 FUNC_1(VAR_4);
 int VAR_10;

 if (!VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_7);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_3(VAR_8);
  goto out;
 }

 FUNC_7(VAR_3);
 VAR_10 = FUNC_6(VAR_8, VAR_7, VAR_4);
 if (VAR_10) {
  FUNC_8(VAR_3);
  FUNC_5(VAR_8);
  goto out;
 }
 VAR_9 = VAR_3->mempolicy;
 VAR_3->mempolicy = VAR_8;
 if (VAR_8 && VAR_8->mode == VAR_2)
  VAR_3->il_prev = VAR_1-1;
 FUNC_8(VAR_3);
 FUNC_5(VAR_9);
 VAR_10 = 0;
out:
 FUNC_2(VAR_4);
 return VAR_10;
}
