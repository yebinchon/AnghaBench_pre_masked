
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_counter {long max; long watermark; struct page_counter* parent; int failcnt; int usage; } ;


 long FUNC_0 (unsigned long,int *) ;
 int FUNC_1 (unsigned long,int *) ;
 int FUNC_2 (struct page_counter*,unsigned long) ;
 int FUNC_3 (struct page_counter*,long) ;

bool FUNC_4(struct page_counter *VAR_0,
        unsigned long VAR_1,
        struct page_counter **VAR_2)
{
 struct page_counter *VAR_3;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->parent) {
  long VAR_4;
  VAR_4 = FUNC_0(VAR_1, &VAR_3->usage);
  if (VAR_4 > VAR_3->max) {
   FUNC_1(VAR_1, &VAR_3->usage);
   FUNC_3(VAR_0, VAR_4);




   VAR_3->failcnt++;
   *VAR_2 = VAR_3;
   goto failed;
  }
  FUNC_3(VAR_0, VAR_4);




  if (VAR_4 > VAR_3->watermark)
   VAR_3->watermark = VAR_4;
 }
 return 1;

failed:
 for (VAR_3 = VAR_0; VAR_3 != *VAR_2; VAR_3 = VAR_3->parent)
  FUNC_2(VAR_3, VAR_1);

 return 0;
}
