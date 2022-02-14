
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mempolicy {scalar_t__ mode; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int,unsigned int,int ,int ) ;
 struct page* FUNC_1 (int,unsigned int,int ) ;
 int VAR_2 ;
 struct mempolicy VAR_3 ;
 struct mempolicy* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mempolicy*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,struct mempolicy*,int ) ;
 int FUNC_7 (int,struct mempolicy*) ;

struct page *FUNC_8(gfp_t VAR_4, unsigned VAR_5)
{
 struct mempolicy *VAR_6 = &VAR_3;
 struct page *VAR_7;

 if (!FUNC_3() && !(VAR_4 & VAR_1))
  VAR_6 = FUNC_2(VAR_2);





 if (VAR_6->mode == VAR_0)
  VAR_7 = FUNC_1(VAR_4, VAR_5, FUNC_4(VAR_6));
 else
  VAR_7 = FUNC_0(VAR_4, VAR_5,
    FUNC_6(VAR_4, VAR_6, FUNC_5()),
    FUNC_7(VAR_4, VAR_6));

 return VAR_7;
}
