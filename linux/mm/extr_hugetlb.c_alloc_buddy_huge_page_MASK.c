
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {int dummy; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct page* FUNC_0 (int,int,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hstate*) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static struct page *FUNC_7(struct hstate *VAR_6,
  gfp_t VAR_7, int VAR_8, nodemask_t *VAR_9,
  nodemask_t *VAR_10)
{
 int VAR_11 = FUNC_2(VAR_6);
 struct page *VAR_12;
 bool VAR_13 = 1;
 if (VAR_10 && FUNC_4(VAR_8, *VAR_10))
  VAR_13 = 0;
 VAR_7 |= VAR_3|VAR_4;
 if (VAR_13)
  VAR_7 |= VAR_5;
 if (VAR_8 == VAR_2)
  VAR_8 = FUNC_6();
 VAR_12 = FUNC_0(VAR_7, VAR_11, VAR_8, VAR_9);
 if (VAR_12)
  FUNC_1(VAR_0);
 else
  FUNC_1(VAR_1);






 if (VAR_10 && VAR_12 && !VAR_13)
  FUNC_3(VAR_8, *VAR_10);






 if (VAR_10 && !VAR_12 && VAR_13)
  FUNC_5(VAR_8, *VAR_10);

 return VAR_12;
}
