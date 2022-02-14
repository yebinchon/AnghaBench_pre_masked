
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct page** rq_pages; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 struct page* FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (struct svc_rqst*) ;

__attribute__((used)) static int
FUNC_3(struct svc_rqst *VAR_3, unsigned int VAR_4, int VAR_5)
{
 unsigned int VAR_6, VAR_7;


 if (FUNC_2(VAR_3))
  return 1;

 VAR_6 = VAR_4 / VAR_1 + 1;


 VAR_7 = 0;
 FUNC_0(VAR_6 > VAR_2);
 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;
 while (VAR_6) {
  struct page *VAR_8 = FUNC_1(VAR_5, VAR_0, 0);
  if (!VAR_8)
   break;
  VAR_3->rq_pages[VAR_7++] = VAR_8;
  VAR_6--;
 }
 return VAR_6 == 0;
}
